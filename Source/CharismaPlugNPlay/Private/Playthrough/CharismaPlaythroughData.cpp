// Copyright 2024 Charisma Entertainment Ltd

#include "Playthrough/CharismaPlaythroughData.h"
#include "CharismaEntityBase.h"
#include "CharismaNpcCharacter.h"
#include "CharismaPlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

void UCharismaPlaythroughData::CollateAllCharismaEntities(TArray<TSubclassOf<UMetaDataFunctionBase>> MetaClasses)
{
	// Find and set charisma player component
	AActor* PlayerActor = UGameplayStatics::GetActorOfClass(GetWorld(), ACharismaPlayerCharacter::StaticClass());
	ACharismaCharacterBase* PlayerCharacter = StaticCast<ACharismaCharacterBase*>(PlayerActor);
	UCharismaPlayerComponent* PlayerCharacterComponent = StaticCast<UCharismaPlayerComponent*>(PlayerActor->GetComponentByClass(UCharismaPlayerComponent::StaticClass()));
	PlayerComponent = PlayerCharacterComponent;

	// Find and set all charisma entity components found on base charisma entities
	TArray<AActor*> FoundEntities;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharismaEntityBase::StaticClass(), FoundEntities);

	for (const auto& Entity : FoundEntities)
	{
		UCharismaEntityComponent* EntityComponent = StaticCast<UCharismaEntityComponent*>(Entity->GetComponentByClass(UCharismaEntityComponent::StaticClass()));
		Entities.Add(EntityComponent);
	}
	
	// Find and set all charisma entity components found on NPCs
	TArray<AActor*> FoundNpcs;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharismaNpcCharacter::StaticClass(), FoundNpcs);

	for (const auto& NPC : FoundNpcs)
	{
		UCharismaEntityComponent* EntityComponent = StaticCast<UCharismaEntityComponent*>(NPC->GetComponentByClass(UCharismaEntityComponent::StaticClass()));
		Entities.Add(EntityComponent);
	}

	// Create and store instances of all metadata functions based on provided classes
	for(const auto& MetaClass : MetaClasses)
	{
		MetaDataFunctions.Add(NewObject<UMetaDataFunctionBase>(GetTransientPackage(), MetaClass));
	}

	// Set entities and play character
	Player = PlayerCharacter;
}
