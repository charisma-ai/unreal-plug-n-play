// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharismaEntityComponent.h"

#include "CharismaInteractableComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractDelegate);

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CHARISMAPLUGNPLAY_API UCharismaInteractableComponent : public UCharismaEntityComponent
{
	GENERATED_BODY()

public:
	UCharismaInteractableComponent();

	UFUNCTION(BlueprintCallable, Category = "Charisma|Interactable")
	void Interact();

	UFUNCTION(BlueprintCallable, Category = "Charisma|Interactable")
	bool HasBeenUsed();

	UFUNCTION(BlueprintCallable, Category = "Charisma|Interactable")
	void SetAvailable(bool available);

	UFUNCTION(BlueprintCallable, Category = "Charisma|Interactable")
	bool IsAvailable();

	UFUNCTION(BlueprintCallable, Category = "Charisma|Interactable")
	void ResetUsage();

	UPROPERTY(BlueprintAssignable, Category = "Charisma|Interactable")
	FOnInteractDelegate OnInteract;

private:
	UPROPERTY()
	bool Enabled = true;

	UPROPERTY()
	bool Used = false;

	UPROPERTY()
	float Range = 1.5f;

	UPROPERTY()
	bool Available = true;
};
