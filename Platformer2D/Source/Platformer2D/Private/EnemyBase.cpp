// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"

#include "DeathComponent.h"
#include "HealthComponent.h"
#include "PaperFlipbookComponent.h"
#include "Platformer2DCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/FXBudget.h"

AEnemyBase::AEnemyBase()
{
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	SphereComponent->SetupAttachment(GetSprite());

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
	DeathComponent = CreateDefaultSubobject<UDeathComponent>(TEXT("Death"));
}

void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = Cast<APlatformer2DCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
}

void AEnemyBase::BeginDestroy()
{
	Super::BeginDestroy();
}

void AEnemyBase::ToggleFacingDirection()
{
	if (GetSprite())
	{
		const FVector WorldScale = GetSprite()->K2_GetComponentScale();
		float DirectionValue = 1.0f;

		if (!bEMoveRight)
		{
			DirectionValue = -1.0f;
		}

		const float NewScaleX = FMath::Abs(WorldScale.X) * DirectionValue;
		const FVector NewScale = FVector(NewScaleX, WorldScale.Y, WorldScale.Z);
		GetSprite()->SetWorldScale3D(NewScale);
	}
}

void AEnemyBase::Move()
{
	if (!bFollowingCharacter)
	{
		float FacingDirection = 1.0f;
		
		if (bEMoveRight)
		{
			FacingDirection = -1.0f;
		}

		AddMovementInput(EWorldDirection, FacingDirection);
	}
}

void AEnemyBase::FollowCharacter()
{
	if (PlayerCharacter == nullptr)
	{
		return;
	}
	
	const FVector EWorldLocation = GetCapsuleComponent()->K2_GetComponentLocation();
	const FVector PWorldLocation = PlayerCharacter->GetCapsuleComponent()->K2_GetComponentLocation();

	const float DiffScale = PWorldLocation.X - EWorldLocation.X;

	if (DiffScale >= 0 && bFollowingCharacter)
	{
		if (bFollowingCharacter)
		{
			bEMoveRight = false;
		}
	}
	else
	{
		if (bFollowingCharacter)
		{
			bEMoveRight = true;
		}
	}

	ToggleFacingDirection();

	if (FMath::Abs(DiffScale) > MoveDistanceBetweenCharacter)
	{
		AddMovementInput(EWorldDirection, DiffScale);
	}
}
