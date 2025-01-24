// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckpointInteraction.h"

#include "CharacterGameComponent.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"

ACheckpointInteraction::ACheckpointInteraction()
{
	PaperFlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("PaperFlipbook"));
	PaperFlipbookComponent->SetupAttachment(PaperSprite);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxComponent->SetupAttachment(PaperFlipbookComponent);

	Checkpoint = CreateDefaultSubobject<USceneComponent>(TEXT("Checkpoint"));
	Checkpoint->SetupAttachment(BoxComponent);
}

void ACheckpointInteraction::BeginPlay()
{
	Super::BeginPlay();
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ACheckpointInteraction::BoxBeginOverlapped);
}

void ACheckpointInteraction::BoxBeginOverlapped(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (PlayerCharacter == nullptr)
	{
		return;
	}

	if (OtherActor == PlayerCharacter)
	{
		if (UCharacterGameComponent* CharacterGameComponent = PlayerCharacter->FindComponentByClass<UCharacterGameComponent>())
		{
			CharacterGameComponent->SetRespawnLocation(Checkpoint->GetComponentLocation());

			if (Checkpoint)
			{
				PaperFlipbookComponent->SetFlipbook(CheckpointOn);
			}
		}
	}
}
