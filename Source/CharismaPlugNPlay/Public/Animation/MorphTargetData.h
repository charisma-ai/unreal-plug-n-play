#pragma once

#include "CoreMinimal.h"
#include "MorphTargetData.generated.h"

USTRUCT(BlueprintType)
struct FMorphTargetData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString MorphTargetName = "";

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Intensity = 0;

};
