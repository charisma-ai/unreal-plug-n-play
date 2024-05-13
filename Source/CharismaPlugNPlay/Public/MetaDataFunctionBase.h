// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlaythroughEntities.h"
#include "UObject/NoExportTypes.h"
#include "MetaDataFunctionBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom))
class CHARISMAPLUGNPLAY_API UMetaDataFunctionBase : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Charisma|PnP MetaData")
	FName MetadataID;
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Charisma|PnP MetaData")
	void Execute(const FString& metaData, const FCharismaPlaythroughEntities& playthroughEntities);
};
