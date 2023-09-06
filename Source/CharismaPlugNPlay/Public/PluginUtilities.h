// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"
#include "PluginUtilities.generated.h"

/**
 * 
 */
UCLASS()
class CHARISMAPLUGNPLAY_API UPluginUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Plugins")
	static bool IsPluginModuleLoaded(FName ModuleName);
};
