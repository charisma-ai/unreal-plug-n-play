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

public:
	UFUNCTION(BlueprintCallable, Category = "Charisma|PnP MetaData")
	void Execute(FString metaData);

	UFUNCTION(BlueprintCallable, Category = "Charisma|PnP MetaData")
	void SetDependencies();
};
