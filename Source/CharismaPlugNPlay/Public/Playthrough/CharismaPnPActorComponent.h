// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharismaEntityComponent.h"

#include "CharismaPnPActorComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnResolve);

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CHARISMAPLUGNPLAY_API UCharismaPnPActorComponent : public UCharismaEntityComponent
{
	GENERATED_BODY()

public:
    // Sets default values for this component's properties
	UCharismaPnPActorComponent();

	UFUNCTION(BlueprintCallable, Category = "Charisma|New Actor")
	void Resolve();

	UPROPERTY(BlueprintAssignable, Category = "Charisma|New Actor")
	FOnResolve OnResolve;
};
