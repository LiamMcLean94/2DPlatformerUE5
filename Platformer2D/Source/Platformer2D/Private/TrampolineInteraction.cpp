// Fill out your copyright notice in the Description page of Project Settings.


#include "Platformer2D/Public/TrampolineInteraction.h"
#include "PaperSprite.h"
#include "Platformer2DCharacter.generated.h"
#include "Components/BoxComponent.h"
//#include "TrampolineInteraction.generated.h"

ATrampolineInteraction::ATrampolineInteraction()
{
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxComponent->SetupAttachment(PaperSprite);
}

void ATrampolineInteraction::BeginPlay()
{
	Super::BeginPlay();
	if (BoxComponent)
	{
		BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ATrampolineInteraction::BoxBeginOverlapped);
	}
}

void ATrampolineInteraction::BoxBeginOverlapped(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (PlayerCharacter == nullptr)
	{
		return;
	}
	if (OtherActor == PlayerCharacter && (OtherActor != this))
	{
		PlayerCharacter->LaunchCharacer(LaunchVelocity, false, true);

		if (SpriteTrampolineLineUp)
		{
			PaperSprite->SetSprite(SpriteTrampolineLineUp);
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ATrampolineInteraction::ResetTrampoline, Duration, false);
		}
	}
	
}

void ATrampolineInteraction::ResetTrampoline()
{
	PaperSprite->SetSprite(SpriteTrampolineLineDown);
}

