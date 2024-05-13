// Copyright 2024 Charisma Entertainment Ltd

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
