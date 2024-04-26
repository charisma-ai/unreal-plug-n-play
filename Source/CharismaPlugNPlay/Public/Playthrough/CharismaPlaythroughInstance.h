// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Playthrough.h"
#include "CharismaPlayerComponent.h"
#include "CharismaEntityComponent.h"
#include "CharismaPlaythroughInstance.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageReceived, const FCharismaMessageEvent&, messageEvent);

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CHARISMAPLUGNPLAY_API UCharismaPlaythroughInstance : public UActorComponent
{
	GENERATED_BODY()
private:

	FString PlaythroughToken;
	FString PlaythroughUuid;
	FString ConversationUuid;

	// Used to keep track the last event received for restarting playthroughs at a certain point
	FString LastEventId;

	bool Started;

	int32 StoryId;

	int32 StoryVersion;

	FString ApiKey;

	FString StartGraphRefId;

	TArray<ECharismaSpeechAudioFormat> SpeechAudioFormat;

public:
	UCharismaPlaythroughInstance();
	~UCharismaPlaythroughInstance();

	UPROPERTY(BlueprintReadWrite)
	UCharismaPlayerComponent* CharismaPlayer;

	UPROPERTY(BlueprintReadWrite)
	TArray<UCharismaEntityComponent*> CharismaEntities;

	UPROPERTY(BlueprintReadOnly)
	UPlaythrough* Playthrough = nullptr;

	UPROPERTY(BlueprintReadOnly)
	ECharismaPlaythroughConnectionState ConnectionState;

	// Starts the playthrough object, interfacing with the Charisma server
	UFUNCTION(BlueprintCallable, Category = "Charisma|PnP Playthrough")
	void Initialise(int32 storyId, int32 storyVersion, FString apiKey, FString startGraphRefId, TArray<ECharismaSpeechAudioFormat> speechAudioFormat);

	// Starts the playthrough object, interfacing with the Charisma server
	UFUNCTION(BlueprintCallable, Category = "Charisma|PnP Playthrough")
	void StartPlaythrough();

	// Switches the sub-story within the current Playthrough
	UFUNCTION(BlueprintCallable, Category = "Charisma|PnP Playthrough")
	void SwitchGraph(FString graphId);

	// Sends an action to the current playthrough
	UFUNCTION(BlueprintCallable, Category = "Charisma|PnP Playthrough")
	void EndPlaythrough();

	UFUNCTION(BlueprintCallable, Category = "Charisma|PnP Playthrough")
	void StartSpeechRecognition(bool& bWasSuccessful,
		const ECharismaSpeechRecognitionService service = ECharismaSpeechRecognitionService::AWS,
		const FString languageCode = "en-US",
		const FString encoding = "pcm",
		const int32 sampleRate = 16000);

	UFUNCTION(BlueprintCallable, Category = "Charisma|PnP Playthrough")
	void StopSpeechRecognition();

	// Sends an action to the current playthrough
	UFUNCTION(BlueprintCallable, Category = "Charisma|PnP Playthrough")
	void SendAction(FString action);

	// Triggers when a message is received from the playthrough
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Charisma|PnP Playthrough")
	void OnMessageReceived(const FCharismaMessageEvent& messageEvent);

	UPROPERTY(BlueprintAssignable, Category = "Charisma|PnP Playthrough")
	FOnMessageReceived OnPlaythroughMessageReceived;

private:
	UFUNCTION()
	void OnReceivePlayerReply(const FString& reply);

	UFUNCTION()
	void OnSpeechRecognitionReceived(const FString& Transcript, bool IsFinal);

	UFUNCTION()
	void OnPlaythroughCreationSuccess(FString token, FString playthroughUuid);

	UFUNCTION()
	void OnConnectionStateChanged(ECharismaPlaythroughConnectionState previousConnectionState,
		ECharismaPlaythroughConnectionState currentConnectionState);
};