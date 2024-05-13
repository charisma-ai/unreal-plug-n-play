// Copyright 2024 Charisma Entertainment Ltd

#pragma once

#include "CoreMinimal.h"
#include "MetaDataFunctionBase.h"
#include "PlaythroughEntities.h"
#include "GameFramework/GameModeBase.h"
#include "Playthrough/CharismaPlayerComponent.h"
#include "CharismaGameMode.generated.h"

USTRUCT(BlueprintType)
struct CHARISMAPLUGNPLAY_API FCharismaConnectionParams
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
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Charisma")
	FCharismaConnectionParams ConnectionParams;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Charisma")
	TArray<TSubclassOf<UMetaDataFunctionBase>> MetaDataClasses;

	UPROPERTY(BlueprintReadWrite, Category="Charisma")
	TArray<UMetaDataFunctionBase*> MetaDataFunctions;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Charisma")
	TArray<UCharismaEntityComponent*> BaseEntities;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Charisma")
	UCharismaPlayerComponent* PlayerComponent;
	
	UPROPERTY(BlueprintReadWrite, Category="Charisma")
	FCharismaPlaythroughEntities PlaythroughEntities;
};

