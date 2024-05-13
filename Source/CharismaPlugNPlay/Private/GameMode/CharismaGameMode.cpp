// Copyright 2024 Charisma Entertainment Ltd

#include "GameMode/CharismaGameMode.h"

#include "CharismaEntityBase.h"
#include "CharismaNpcCharacter.h"
#include "CharismaPlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

void ACharismaGameMode::CollateAllCharismaEntities()
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
		BaseEntities.Add(EntityComponent);
	}
	
	// Find and set all charisma entity components found on NPCs
	TArray<AActor*> FoundNpcs;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharismaNpcCharacter::StaticClass(), FoundNpcs);

	for (const auto& NPC : FoundNpcs)
	{
		UCharismaEntityComponent* EntityComponent = StaticCast<UCharismaEntityComponent*>(NPC->GetComponentByClass(UCharismaEntityComponent::StaticClass()));
		BaseEntities.Add(EntityComponent);
	}

	// Create and store instances of all metadata functions based on provided classes
	for(const auto& MetaClass : MetaDataClasses)
	{
		MetaDataFunctions.Add(NewObject<UMetaDataFunctionBase>(GetTransientPackage(), MetaClass));
	}

	// Set PlaythroughEntities entities
	PlaythroughEntities.Entities = BaseEntities;
	PlaythroughEntities.Player = PlayerCharacter;
}
