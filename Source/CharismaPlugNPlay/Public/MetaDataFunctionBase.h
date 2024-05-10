// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MetaDataFunctionBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom))
class CHARISMAPLUGNPLAY_API UMetaDataFunctionBase : public UObject
{
	GENERATED_BODY()

	// TODO: ADD METADATA_ID AND OTHER VARIABLIES THAT ARE IN THE BASE BP
protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "Charisma|PnP MetaData")
	void Execute(const FString& metaData);

	UFUNCTION(BlueprintImplementableEvent, Category = "Charisma|PnP MetaData")
	void SetDependencies();
};
