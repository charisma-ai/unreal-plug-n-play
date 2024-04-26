// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "CharismaEntityComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMessageReceivedDelegate, const FCharismaMessageEvent&, MessageEvent, bool, isEntityMatch);

/**
 * 
 */
UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class CHARISMAPLUGNPLAY_API UCharismaEntityComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCharismaEntityComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Charisma|EntityComponent")
	FString EntityId;

	UPROPERTY(BlueprintReadOnly, Category = "Charisma|EntityComponent")
	bool IsOnline;

	UPROPERTY(BlueprintAssignable, Category = "Charisma|EntityComponent")
	FMessageReceivedDelegate OnMessage;
};
