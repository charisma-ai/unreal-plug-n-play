// Fill out your copyright notice in the Description page of Project Settings.


#include "Playthrough/CharismaInteractableComponent.h"

UCharismaInteractableComponent::UCharismaInteractableComponent()
{
}

void UCharismaInteractableComponent::Interact()
{
	// Cannot interact if entity is not Live
	if (!IsLive)
	{
		return;
	}

	// Cannot interact if interactable has already been used
	if (Used) 
	{
		return;
	}

	if (Available)
	{
		Used = true;
		OnInteract.Broadcast();
	}
}

void UCharismaInteractableComponent::SetAvailable(bool available)
{
	Available = available;
}

bool UCharismaInteractableComponent::IsAvailable()
{
	return Available;
}

bool UCharismaInteractableComponent::HasBeenUsed() 
{
	return Used;
}

void UCharismaInteractableComponent::ResetUsage() 
{
	Used = false;
}