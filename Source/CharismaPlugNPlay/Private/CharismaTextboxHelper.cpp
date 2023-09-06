// Fill out your copyright notice in the Description page of Project Settings.

#include "CharismaTextboxHelper.h"

#include "CharismaLogger.h"
#include "UnrealClient.h"
#include "Engine/Player.h"
#include "Engine/World.h"
#include "Layout/Geometry.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Slate/SceneViewport.h"
#include "Components/CanvasPanelSlot.h" 	
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UCharismaTextboxHelper::UCharismaTextboxHelper()
{
}

void UCharismaTextboxHelper::UpdateTextboxesOnScreen()
{
	// Don't update textboxes if there aren't any
	int32 totalCount = Positions.Num();

	if (totalCount <= 0) 
	{
		return;
	}

	if (Colliders.Num() != totalCount)
	{
		UE_LOG(LogTemp, Log, TEXT("[CharismaTextboxHelper] Initialising collider array"));
		Colliders.Init(FCharismaTextboxCollider(), totalCount);
	}

	// Cache viewport size and scale
	// do this every time we call this function
	// ideally only updates when a window size change occurs
	if (GEngine && GEngine->GameViewport)
	{
		ViewportSize = UWidgetLayoutLibrary::GetViewportSize(GEngine->GameViewport);
		ViewportScale = UWidgetLayoutLibrary::GetViewportScale(GEngine->GameViewport);
	}

	UpdateTextboxesInScreenSpace();
	UpdateTextboxesOverlapping();

	// apply result positions to widgets
	for (int32 index = 0; index < totalCount; index++)
	{
		Widgets[index]->SetPositionInViewport(Colliders[index].Position);
	}
}

void UCharismaTextboxHelper::UpdateTextboxesInScreenSpace()
{
	int32 totalCount = Positions.Num();

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	for (int32 index = 0; index < totalCount; index++)
	{
		// Do not move hidden widgets
		if (!Widgets[index]->IsVisible())
		{
			continue;
		}

		Widgets[index]->SetVisibility(ESlateVisibility::Visible);

		FVector location = Positions[index]->GetComponentLocation();

		FVector2D widgetPosition;
		// Desired size must be multiplied by viewport scale
		// To get correct size relative to viewport size
		FVector2D size = Widgets[index]->GetDesiredSize() * ViewportScale;

		if (UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(PlayerController, location, widgetPosition, true))
		{
			// Correct widget scale to viewport scale
			widgetPosition *= ViewportScale;

			FVector2D resultPosition = FitPositionToViewport(widgetPosition, size, ViewportSize);

			Colliders[index].Update(resultPosition, size);
		}
	}
}

FVector2D UCharismaTextboxHelper::FitPositionToViewport(FVector2D pendingPosition, FVector2D size, FVector2D viewportSize)
{
	// topleft = 0,0
	// bottomright = viewportsize
	// Need to account for half size of the Widget to fit it properly on screen
	float minXLimit = size.X / 2;
	float maxXLimit = ViewportSize.X - size.X / 2;
	float minYLimit = size.Y;
	float maxYLimit = ViewportSize.Y - size.Y;

	float clampedX = FMath::Clamp(pendingPosition.X, minXLimit, maxXLimit);
	float clampedY = FMath::Clamp(pendingPosition.Y, minYLimit, maxYLimit);

	return FVector2D(clampedX, clampedY);
}

void UCharismaTextboxHelper::UpdateTextboxesOverlapping() 
{
	int32 totalCount = Colliders.Num();

	for (int32 indexA = 0; indexA < totalCount - 1; indexA++)
	{
		// Do not move hidden widgets
		if (!Widgets[indexA]->IsVisible())
		{
			continue;
		}

		for (int32 indexB = 1; indexB < totalCount; indexB++) 
		{
			if (indexA == indexB) 
			{
				continue;
			}

			// Do not move hidden widgets
			if (!Widgets[indexB]->IsVisible())
			{
				continue;
			}

			if (DoCollidersOverlap(Colliders[indexA], Colliders[indexB])) 
			{
				float distanceToCenterA = FVector2D::Distance(Colliders[indexA].Position, ViewportSize / 2);
				float distanceToCenterB = FVector2D::Distance(Colliders[indexB].Position, ViewportSize / 2);

				FVector2D pushback;
				FVector2D excess;

				// account for objects proximity to the center
				// the farther, the more in need of movement it is
				if (distanceToCenterA > distanceToCenterB) 
				{
					FVector2D resultPosition = GetNonCollidingPositionForTargetRect(Colliders[indexA], Colliders[indexB], pushback, excess);
					// move object being pushed out back into bounds
					Colliders[indexA].Update(resultPosition, Colliders[indexA].Size);
					// apply pushback to object pushing the first out
					Colliders[indexB].Update(Colliders[indexB].Position - excess + pushback, Colliders[indexB].Size);
				}
				else 
				{
					FVector2D resultPosition = GetNonCollidingPositionForTargetRect(Colliders[indexB], Colliders[indexA], pushback, excess);
					// move object being pushed out back into bounds
					Colliders[indexB].Update(resultPosition, Colliders[indexB].Size);
					// apply pushback to object pushing the first out
					Colliders[indexA].Update(Colliders[indexA].Position - excess + pushback, Colliders[indexA].Size);
				}
			}
		}

	}
}

FVector2D UCharismaTextboxHelper::GetNonCollidingPositionForTargetRect(FCharismaTextboxCollider targetRect, FCharismaTextboxCollider collidingRect, FVector2D& pushback, FVector2D& excess)
{
	FVector2D resultPosition = targetRect.Position;
	FVector2D normal = collidingRect.Position - targetRect.Position;

	float minimumXDistance = (targetRect.Size.X + collidingRect.Size.X) / 2;
	float minimumYDistance = (targetRect.Size.Y + collidingRect.Size.Y) / 2;

	bool foundCollision = false;

	float overlapX = minimumXDistance - FMath::Abs(normal.X);
	float overlapY = minimumYDistance - FMath::Abs(normal.Y);

	// account for overlapping from other direction
	// where the distance is much longer
	if (overlapX > 0)
	{
		foundCollision = true;
	}
	else if (overlapY > 0)
	{
		foundCollision = true;
	}

	if (foundCollision)
	{
		float xSign = FMath::Sign(normal.X);
		if (xSign == 0)
		{
			// 0 sign means a perfect X overlap - set to default value
			xSign = 1;
		}

		FVector2D newPosition = targetRect.Position;
		if (overlapX > 0)
		{
			float penetrationX = (overlapX) * xSign;
			newPosition.X -= penetrationX / 2;
			pushback.X += penetrationX / 2;
		}

		targetRect.Update(newPosition, targetRect.Size);

		// re-assign the rect to re-initialise all the values needed in following function
		excess = GetExcessOutsideOfBounds(targetRect);

		FVector2D clampedPosition = targetRect.Position;

		// clamp the position on screen
		clampedPosition.X = FMath::Clamp(targetRect.Position.X, targetRect.Size.X / 2, ViewportSize.X - targetRect.Size.X / 2);
		clampedPosition.Y = FMath::Clamp(targetRect.Position.Y, targetRect.Size.Y, ViewportSize.Y - targetRect.Size.Y);

		resultPosition = clampedPosition;
	}

	return resultPosition;
}

FVector2D UCharismaTextboxHelper::GetExcessOutsideOfBounds(FCharismaTextboxCollider targetRect)
{
	FVector2D excess = FVector2D(0,0);

	float resultXmin = targetRect.Left;
	float resultXmax = targetRect.Right;
	float resultYmin = targetRect.Up;
	float resultYmax = targetRect.Down;

	float xmin = 0;
	float xmax = ViewportSize.X;
	float ymin = 0;
	float ymax = ViewportSize.Y;

	if (resultXmax > xmax)
	{
		excess.X = resultXmax - xmax;
	}

	if (resultXmin < xmin)
	{
		excess.X = resultXmin - xmin;
	}

	if (resultYmax > ymax)
	{
		excess.Y = resultYmax - ymax;
	}

	if (resultYmin < ymin)
	{
		excess.Y = resultYmin - ymin;
	}

	return excess;
}

bool UCharismaTextboxHelper::DoCollidersOverlap(FCharismaTextboxCollider colliderOne, FCharismaTextboxCollider colliderTwo) 
{
	return (colliderOne.Left <  colliderTwo.Right
		&& colliderOne.Right > colliderTwo.Left 
		&& colliderOne.Up < colliderTwo.Down
		&& colliderOne.Down > colliderTwo.Up);
}