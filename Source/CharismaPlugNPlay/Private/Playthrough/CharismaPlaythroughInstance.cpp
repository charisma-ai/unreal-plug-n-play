// Fill out your copyright notice in the Description page of Project Settings.

#include "Playthrough/CharismaPlaythroughInstance.h"
#include "CharismaAPI.h"
#include "CharismaConnectionParams.h"
#include "Kismet/GameplayStatics.h"

UCharismaPlaythroughInstance::UCharismaPlaythroughInstance()
{

}

UCharismaPlaythroughInstance::~UCharismaPlaythroughInstance()
{

}

void UCharismaPlaythroughInstance::Initialise(FCharismaConnectionParams connectionParams, TArray<ECharismaSpeechAudioFormat> speechAudioFormat) 
{
	StoryId = connectionParams.StoryId;
	StoryVersion = connectionParams.StoryVersion;
	ApiKey = connectionParams.ApiKey;
	StartGraphRefId = connectionParams.StartGraphRefId;
	SpeechAudioFormat = speechAudioFormat;
}

void UCharismaPlaythroughInstance::StartPlaythrough() 
{
	Started = false;

	UCharismaAPI::CreatePlaythroughToken(StoryId, StoryVersion, ApiKey, 
		[&](const FString token, const FString playthroughUuid) 
		{
			OnPlaythroughCreationSuccess(token, playthroughUuid);
		},
		[&](const FString error) 
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to Create Playthrough. Error message: %s"), *error);
		});
}

void UCharismaPlaythroughInstance::SwitchGraph(FString graphId) 
{
	StartGraphRefId = graphId;

	if (Started) 
	{
		Playthrough->Start(ConversationUuid, 0, 0, StartGraphRefId, SpeechAudioFormat);
	}
}

void UCharismaPlaythroughInstance::SendAction(FString action) 
{
	if (!Started) 
	{
		return;
	}

	if (Playthrough == nullptr) 
	{
		UE_LOG(LogTemp, Error, TEXT("[SendAction] Attempted Action for inexistant Playthrough."));
		return;
	}

	if (ConnectionState != ECharismaPlaythroughConnectionState::Connected) 
	{
		UE_LOG(LogTemp, Error, TEXT("[SendAction] Attempted Action while Playthrough is not connected."));
		return;
	}

	Playthrough->Action(ConversationUuid, action);
}

// Sends an action to the current playthrough
void UCharismaPlaythroughInstance::EndPlaythrough() 
{
	if (!Started)
	{
		return;
	}

	if (Playthrough == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("[EndPlaythrough] Attempted to end already ended playthrough."));
		return;
	}


	Playthrough->OnMessage.RemoveDynamic(this, &UCharismaPlaythroughInstance::OnMessageReceived);
	Playthrough->OnChangeConnectionState.RemoveDynamic(this, &UCharismaPlaythroughInstance::OnConnectionStateChanged);
	Playthrough->OnSpeechRecognitionResult.RemoveDynamic(this, &UCharismaPlaythroughInstance::OnSpeechRecognitionReceived);

	if (CharismaPlayer != nullptr) 
	{
		CharismaPlayer->OnReply.RemoveDynamic(this, &UCharismaPlaythroughInstance::OnReceivePlayerReply);
	}

	Started = false;
	ConnectionState = ECharismaPlaythroughConnectionState::Disconnected;

	delete Playthrough;
	Playthrough = nullptr;
}

void UCharismaPlaythroughInstance::StartSpeechRecognition(bool& bWasSuccessful,
	const ECharismaSpeechRecognitionService service,
	const FString languageCode,
	const FString encoding,
	const int32 sampleRate)
{
	if (!Started)
	{
		return;
	}

	if (Playthrough == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("[StartSpeechRecognition] Attempted Speech recognition for inexistant Playthrough."));
		return;
	}

	if (ConnectionState != ECharismaPlaythroughConnectionState::Connected)
	{
		UE_LOG(LogTemp, Error, TEXT("[StartSpeechRecognition] Attempted Speech recognition while Playthrough is not connected."));
		return;
	}

	Playthrough->StartSpeechRecognition(bWasSuccessful, service, languageCode, encoding, sampleRate);
}

void UCharismaPlaythroughInstance::StopSpeechRecognition()
{
	if (!Started)
	{
		return;
	}

	if (Playthrough == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("[StopSpeechRecognition] Attempted Speech recognition for inexistant Playthrough."));
		return;
	}

	if (ConnectionState != ECharismaPlaythroughConnectionState::Connected)
	{
		UE_LOG(LogTemp, Error, TEXT("[StopSpeechRecognition] Attempted Speech recognition while Playthrough is not connected."));
		return;
	}

	Playthrough->StopSpeechRecognition();
}

void UCharismaPlaythroughInstance::OnMessageReceived_Implementation(const FCharismaMessageEvent& messageEvent)
{
	LastEventId = messageEvent.EventId;

	int entityCount = CharismaEntities.Num();
	for (int index = 0; index < entityCount; index++) 
	{
		bool doesTheIdMatch = messageEvent.Message.Character.Name == CharismaEntities[index]->EntityId;
		CharismaEntities[index]->OnMessage.Broadcast(messageEvent, doesTheIdMatch);
	}

	OnPlaythroughMessageReceived.Broadcast(messageEvent);
}

void UCharismaPlaythroughInstance::OnConnectionStateChanged(ECharismaPlaythroughConnectionState previousConnectionState,
	ECharismaPlaythroughConnectionState currentConnectionState)
{
	if (ConnectionState != currentConnectionState)
	{
		ConnectionState = currentConnectionState;
		bool connected = currentConnectionState == ECharismaPlaythroughConnectionState::Connected;

		int count = CharismaEntities.Num();
		for (int i = 0; i < count; i++)
		{
			CharismaEntities[i]->IsOnline = connected;
		}

		if (connected) 
		{
			if (!Started)
			{
				Started = connected;
				Playthrough->Start(ConversationUuid, 0, 0, StartGraphRefId, SpeechAudioFormat);
			}
			else 
			{
				Playthrough->Resume(ConversationUuid);
			}
		}
	}
}

void UCharismaPlaythroughInstance::OnSpeechRecognitionReceived(const FString& Transcript, bool IsFinal) 
{
	CharismaPlayer->OnSpeechRecognition.Broadcast(Transcript, IsFinal);
}

void UCharismaPlaythroughInstance::OnReceivePlayerReply(const FString& reply)
{
	if (!Started)
	{
		return;
	}

	if (Playthrough == nullptr) 
	{
		UE_LOG(LogTemp, Error, TEXT("[OnReceivePlayerReply] Attempted reply for inexistant Playthrough."));
		return;
	}

	if (ConnectionState != ECharismaPlaythroughConnectionState::Connected)
	{
		UE_LOG(LogTemp, Error, TEXT("[OnReceivePlayerReply] Attempted reply while Playthrough is not connected."));
		return;
	}

	Playthrough->Reply(ConversationUuid, reply);
}

void UCharismaPlaythroughInstance::OnPlaythroughCreationSuccess(FString token, FString playthroughUuid)
{
	PlaythroughToken = token;
	PlaythroughUuid = playthroughUuid;
	Playthrough = UPlaythrough::NewPlaythroughObject(this, token, playthroughUuid);

	UCharismaAPI::CreateConversation(PlaythroughToken, 
		[&](const FString conversationUuid)
		{
			ConversationUuid = conversationUuid;
			Playthrough->OnMessage.AddDynamic(this, &UCharismaPlaythroughInstance::OnMessageReceived);
			Playthrough->OnChangeConnectionState.AddDynamic(this, &UCharismaPlaythroughInstance::OnConnectionStateChanged);
			Playthrough->OnSpeechRecognitionResult.AddDynamic(this, &UCharismaPlaythroughInstance::OnSpeechRecognitionReceived);

			CharismaPlayer->OnReply.AddDynamic(this, &UCharismaPlaythroughInstance::OnReceivePlayerReply);

			Playthrough->Connect();
		},
		[&](const FString error)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to Create Conversation Uuid. Error message: %s"), *error);
		});
}