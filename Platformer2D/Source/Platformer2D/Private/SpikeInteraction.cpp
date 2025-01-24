// Fill out your copyright notice in the Description page of Project Settings.


#include "SpikeInteraction.h"

#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "Platformer2DCharacter.h"
#include "Engine/DamageEvents.h"

ASpikeInteraction::ASpikeInteraction()
{
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxComponent->SetupAttachment(PaperSprite);
}

void ASpikeInteraction::ChangeSpikeStat()
{
	bIsSpikeUp = !bIsSpikeUp;

	if (bIsSpikeUp)
	{
		BringSpikeUp();
	}
	else
	{
		BringSpikeDown();
	}
}

void ASpikeInteraction::BringSpikeUp()
{
	if (SpriteSpikeUp)
	{
		PaperSprite->SetSprite(SpriteSpikeUp);
		BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

void ASpikeInteraction::BringSpikeDown()
{
	if (SpriteSpikeDown)
	{
		PaperSprite->SetSprite(SpriteSpikeDown);
		BoxComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void ASpikeInteraction::BeginPlay()
{
	Super::BeginPlay();
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ASpikeInteraction::BoxBeginOverlapped);

	GetWorld()->GetTimerManager().SetTimer(SpikeTimer, this, &ASpikeInteraction::ChangeSpikeStat, Duration, BLooping);;
}

void ASpikeInteraction::BoxBeginOverlapped(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (PlayerCharacter == OtherActor)
	{
		PlayerCharacter->TakeDamage(DamageAmount, FDamageEvent(), nullptr, nullptr);
	}
}
