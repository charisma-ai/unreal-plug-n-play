// Copyright 2024 Charisma Entertainment Ltd

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoreMinimal.h"
#include "MetaDataFunctionBase.h"
#include "PlaythroughEntities.h"
#include "Playthrough/CharismaConnectionParams.h"
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
	UFUNCTION(BlueprintCallable, Category="Charisma|GameMode")
	void CollateAllCharismaEntities(TArray<TSubclassOf<UMetaDataFunctionBase>> MetaClasses);
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Charisma")
	FCharismaConnectionParams ConnectionParams;
	
	UPROPERTY(BlueprintReadWrite, Category="Charisma")
	TArray<UMetaDataFunctionBase*> MetaDataFunctions;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Charisma")
	UCharismaPlayerComponent* PlayerComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ACharismaCharacterBase* Player;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UCharismaEntityComponent*> Entities;
};
