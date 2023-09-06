// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "CharismaEntityComponent.generated.h"

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

	UPROPERTY(BlueprintReadWrite, Category = "Charisma|EntityComponent")
	bool StartLive = false;


	UPROPERTY(BlueprintReadOnly, Category = "Charisma|EntityComponent")
	bool IsLive;

	UFUNCTION(BlueprintCallable, Category = "Charisma|EntityComponent")
	void SetLive(bool live);
};
