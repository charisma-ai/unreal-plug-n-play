// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "CharismaCharacterBase.h"
#include "Playthrough/CharismaEntityComponent.h"
#include "PlaythroughEntities.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType, Blueprintable, Category="Custom")
struct CHARISMAPLUGNPLAY_API FCharismaPlaythroughEntities
{
	GENERATED_USTRUCT_BODY()

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ACharismaCharacterBase* Player;

	
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UCharismaEntityComponent*> Entities;
};
