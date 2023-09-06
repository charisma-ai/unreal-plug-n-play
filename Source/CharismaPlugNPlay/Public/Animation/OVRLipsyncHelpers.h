// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "OVRLipsyncHelpers.generated.h"


/**
 * 
 */
UCLASS()
class CHARISMAPLUGNPLAY_API UOVRLipsyncHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Charisma|Helpers|Lipsync")
	static TArray<uint8> GetAudioSegment(const TArray<uint8> Audio, int32 StartIndex, int32 EndIndex);
};
