// Fill out your copyright notice in the Description page of Project Settings.


#include "GemInteraction.h"

#include "CharacterGameComponent.h"
#include "PaperSpriteComponent.h"
#include "PlayerStatWidget.h"
#include "Components/BoxComponent.h"

AGemInteraction::AGemInteraction()
{
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->SetupAttachment(PaperSprite);
}

void AGemInteraction::BeginPlay()
{
	Super::BeginPlay();
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AGemInteraction::BoxBeginOverlapped);
}

void AGemInteraction::BoxBeginOverlapped(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (PlayerCharacter == nullptr)
	{
		return;
	}

	if (OtherActor == PlayerCharacter && (OtherActor != this))
	{
		if (UCharacterGameComponent* CharacterGameComponent = PlayerCharacter->FindComponentByClass<UCharacterGameComponent>())
		{
			const float CurrentGem = CharacterGameComponent->IncrementGem();

			CharacterGameComponent->GetPlayerStatWidget()->UpdateGem(CurrentGem);

			Destroy();
		}
	} 
}

void AGemInteraction::BoxEndOverlapped(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}
