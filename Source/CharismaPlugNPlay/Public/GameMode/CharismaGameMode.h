// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CharismaGameMode.generated.h"

USTRUCT(BlueprintType)
struct FCharismaConnectionParams
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Charisma|GameMode")
	int StoryId;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Charisma|GameMode")
	int StoryVersion;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Charisma|GameMode")
	FString ApiKey;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Charisma|GameMode")
	FString StartGraphRefId;
};

/**
 * 
 */
UCLASS()
class CHARISMAPLUGNPLAY_API ACharismaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Charisma|GameMode")
	void CollateAllCharismaEntities();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Charisma|GameMode")
	FCharismaConnectionParams ConnectionParams;
};

