// Copyright 2024 Charisma Entertainment Ltd

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoreMinimal.h"
#include "MetaDataFunctionBase.h"
#include "PlaythroughEntities.h"
#include "Playthrough/CharismaPlayerComponent.h"
#include "CharismaPlaythroughData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable, Category="Charisma")
class CHARISMAPLUGNPLAY_API UCharismaPlaythroughData : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Charisma")
	void CollateAllCharismaEntities(TArray<TSubclassOf<UMetaDataFunctionBase>> MetaClasses);
	
	UPROPERTY(BlueprintReadOnly, Category="Charisma")
	TArray<UMetaDataFunctionBase*> MetaDataFunctions;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Charisma")
	UCharismaPlayerComponent* PlayerComponent;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Charisma")
	ACharismaCharacterBase* Player;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Charisma")
	TArray<UCharismaEntityComponent*> Entities;
};
