// Fill out your copyright notice in the Description page of Project Settings.


#include "Playthrough/CharismaPnPActorComponent.h"

UCharismaPnPActorComponent::UCharismaPnPActorComponent()
{
}

void UCharismaPnPActorComponent::Resolve()
{
	OnResolve.Broadcast();
}