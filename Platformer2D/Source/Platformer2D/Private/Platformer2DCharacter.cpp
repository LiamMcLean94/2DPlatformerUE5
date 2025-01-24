// Fill out your copyright notice in the Description page of Project Settings.


#include "Platformer2DCharacter.h"

#include "AnimationComponent.h"
#include "CharacterGameComponent.h"
#include "DeathComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "HealthComponent.h"
#include "PlayerStatWidget.h"
#include "GameFramework/SpringArmComponent.h"
#include "Slate/SGameLayerManager.h"

APlatformer2DCharacter::APlatformer2DCharacter()
{
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm)"));
	SpringArmComponent->SetupAttachment(RootComponent);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent);

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SceneComponent->SetupAttachment(RootComponent);

	CharacterGameComponent = CreateDefaultSubobject<UCharacterGameComponent>(TEXT("Character"));
	AnimationComponent = CreateDefaultSubobject<UAnimationComponent>(TEXT("Animation"));

	DeathComponent = CreateDefaultSubobject<UDeathComponent>(TEXT("Death"));
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
}

void APlatformer2DCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlatformer2DCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);
	if (CharacterGameComponent)
	{
		CharacterGameComponent->SetBJumping(false);
	}
}
void APlatformer2DCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* PlayerEnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (MovementAction)
		{
			PlayerEnhancedInputComponent->BindAction(
				MovementAction,
				ETriggerEvent::Triggered,
				this,
				&APlatformer2DCharacter::EnhancedMove);
		}

		if (ClimbAction)
		{
			PlayerEnhancedInputComponent->BindAction(
				ClimbAction,
				ETriggerEvent::Triggered,
				this,
				&APlatformer2DCharacter::EnhancedClimb);
		}

		if (JumpAction)
		{
			PlayerEnhancedInputComponent->BindAction(
				JumpAction,
				ETriggerEvent::Started,
				this,
				&APlatformer2DCharacter::EnhancedJump);
			PlayerEnhancedInputComponent->BindAction(
				JumpAction,
				ETriggerEvent::Completed,
				this,
				&APlatformer2DCharacter::StopJumping);
		}
	}
	
}

float APlatformer2DCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
	class AController* EventInstigator, AActor* DamageCauser)
{
	float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	if (HealthComponent)
	{
		float UpdatedHealth = HealthComponent->TakeDamage(ActualDamage);

		if (UpdatedHealth == 0.f)
		{
			CharacterGameComponent->RespawnCharacter(CharacterGameComponent->GetRespawnLocation(), true);
			UpdatedHealth = HealthComponent->GetHealth();
		}

		float MaxHealth = HealthComponent->GetDefaultHealth();
		
		if (CharacterGameComponent)
		{
			CharacterGameComponent->GetPlayerStatWidget()->UpdateHealthBar(UpdatedHealth,MaxHealth);
		}
	}
	
	return ActualDamage;
}

void APlatformer2DCharacter::PawnClientRestart()
{
	Super::PawnClientRestart();

	if (APlayerController* LocalPlayer = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer->GetLocalPlayer()))
		{
			Subsystem->ClearAllMappings();
			Subsystem->AddMappingContext(InputMappingContext, InputMappingPriority);
		}
	}
}

void APlatformer2DCharacter::EnhancedMove(const FInputActionValue& Value)
{
	if (CharacterGameComponent)
	{
		CharacterGameComponent->MoveLeftRight(Value);
	}
}

void APlatformer2DCharacter::EnhancedJump(const FInputActionValue& Value)
{
	if (CharacterGameComponent)
	{
		Super::Jump();
		CharacterGameComponent->Jump();
	}
}

void APlatformer2DCharacter::EnhancedClimb(const FInputActionValue& Value)
{
	if (CharacterGameComponent)
	{
		CharacterGameComponent->MoveUpAndDown(Value);
	}
}



