// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterGameComponent.h"

#include "DeathComponent.h"
#include "HealthComponent.h"
#include "Platformer2DCharacter.h"
#include "PlayerStatWidget.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UCharacterGameComponent::UCharacterGameComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCharacterGameComponent::BeginPlay()
{
	Super::BeginPlay();
	Owner = GetOwner();
	CurrentCharacter = Cast<APlatformer2DCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));

	if (Owner && CurrentCharacter)
	{
		RespawnLocation = Owner->GetActorLocation();
	}

	AController* PlayerController = UGameplayStatics::GetPlayerController(this,0);

	if (PlayerStatWidgetClass)
	{
		PlayerStatWidget = NewObject<UPlayerStatWidget>(this, PlayerStatWidgetClass);
		PlayerStatWidget->AddToViewport();
	}
	
}


// Called every frame
void UCharacterGameComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCharacterGameComponent::MoveLeftRight(const FInputActionValue& Value)
{
	if (CurrentCharacter && Value.GetMagnitude() != 0.f)
	{
		FVector WorldDirection = FVector(1.f, 0.f, 0.f);
		CurrentCharacter->AddMovementInput(WorldDirection, Value.GetMagnitude(), false);
	}

}

void UCharacterGameComponent::MoveUpAndDown(const FInputActionValue& Value)
{
	if (CurrentCharacter && Value.GetMagnitude() != 0.f)
	{
		FVector WorldDirection = FVector(0.f, 0.f, 1.f); //reps upward movement
		CurrentCharacter->AddMovementInput(WorldDirection, Value.GetMagnitude(), false);
	}
}

void UCharacterGameComponent::Jump()
{
	bJumping = true;
}

void UCharacterGameComponent::RespawnCharacter(FVector Location, bool bRelife)
{
	if (Owner)
	{
		Owner->SetActorLocation(Location);
		UDeathComponent* DeathComponent = Owner->FindComponentByClass<UDeathComponent>();

		if (DeathComponent)
		{
			DeathComponent->SetIsDead(false);
		}

		if (bRelife)
		{
			UHealthComponent* HealthComponent = Owner->FindComponentByClass<UHealthComponent>();
			HealthComponent->Revive();
		}
	}
}

float UCharacterGameComponent::IncrementGem()
{
	Gem += 1;
	return Gem;
}

