// Copyright 2024 Charisma Entertainment Ltd

#pragma once

#include "CoreMinimal.h"
#include "CharismaCharacterBase.h"
#include "Playthrough/CharismaEntityComponent.h"
#include "PlaythroughEntities.generated.h"

USTRUCT(BlueprintType, Blueprintable, Category="Custom")
struct CHARISMAPLUGNPLAY_API FCharismaPlaythroughEntities
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ACharismaCharacterBase* Player;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UCharismaEntityComponent*> Entities;
};
