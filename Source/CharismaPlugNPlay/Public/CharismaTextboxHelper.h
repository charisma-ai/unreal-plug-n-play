// Copyright 2024 Charisma Entertainment Ltd

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h" 	
#include "Blueprint/UserWidget.h"

#include "CharismaTextboxHelper.generated.h"

USTRUCT()
struct FCharismaTextboxCollider
{
	GENERATED_BODY()

	FVector2D Position;

	FVector2D Size;

	float Left;
	float Right;
	float Up;
	float Down;

	void Update(FVector2D position, FVector2D size) 
	{
		Position = position;
		Size = size;

		Left = Position.X - size.X / 2;
		Right = Position.X + size.X / 2;
		Up = Position.Y - size.Y / 2;
		Down = Position.Y + size.Y / 2;
	}
};

UCLASS(ClassGroup = (Custom))
class UCharismaTextboxHelper : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCharismaTextboxHelper();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Charisma|Textbox")
	TArray<USceneComponent*> Positions;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Charisma|Textbox")
	TArray<UUserWidget*> Widgets;

	UFUNCTION(BlueprintCallable, Category = "Charisma|Textbox")
	void UpdateTextboxesOnScreen();

private:

	UFUNCTION()
	void UpdateTextboxesInScreenSpace();

	UFUNCTION()
	void UpdateTextboxesOverlapping();
	
	UFUNCTION()
	FVector2D FitPositionToViewport(FVector2D pendingPosition, FVector2D size, FVector2D viewportSize);

	UFUNCTION()
	bool DoCollidersOverlap(FCharismaTextboxCollider colliderOne, FCharismaTextboxCollider colliderTwo);
	
	UFUNCTION()
	FVector2D GetExcessOutsideOfBounds(FCharismaTextboxCollider targetRect);

	UFUNCTION()
	FVector2D GetNonCollidingPositionForTargetRect(FCharismaTextboxCollider targetRect, FCharismaTextboxCollider collidingRect, FVector2D& pushback, FVector2D& excess);
	
	UPROPERTY()
	FVector2D ViewportSize;

	UPROPERTY()
	float ViewportScale;

	UPROPERTY()
	TArray<FCharismaTextboxCollider> Colliders;
};
