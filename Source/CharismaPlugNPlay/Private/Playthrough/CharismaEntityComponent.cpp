// Fill out your copyright notice in the Description page of Project Settings.


#include "Playthrough/CharismaEntityComponent.h"

// Sets default values for this component's properties
UCharismaEntityComponent::UCharismaEntityComponent()
{
	IsLive = StartLive;
}

void UCharismaEntityComponent::SetLive(bool live) 
{
	IsLive = live;
}