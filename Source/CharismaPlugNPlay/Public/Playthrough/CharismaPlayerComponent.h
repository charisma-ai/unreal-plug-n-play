// Copyright 2024 Charisma Entertainment Ltd

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharismaEntityComponent.h"

#include "CharismaPlayerComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerSpeechRecognitionResult, const FString&, Transcript, bool, IsFinal);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerReplyDelegate, const FString&, Transcript);
/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CHARISMAPLUGNPLAY_API UCharismaPlayerComponent : public UActorComponent
{
	GENERATED_BODY()
private:

public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Charisma|Player")
	FPlayerReplyDelegate OnReply;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Charisma|Player")
	FPlayerSpeechRecognitionResult OnSpeechRecognition;
};
