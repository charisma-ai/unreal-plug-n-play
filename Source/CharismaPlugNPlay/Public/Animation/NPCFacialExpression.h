// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MorphTargetData.h"
#include "NPCFacialExpression.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class CHARISMAPLUGNPLAY_API UNPCFacialExpression : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString AssociatedCharismaEmotion;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FMorphTargetData> MorphTargets;
};
