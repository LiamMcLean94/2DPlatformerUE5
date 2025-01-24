// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimationComponent.h"

#include "CharacterGameComponent.h"
#include "Platformer2DCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
UAnimationComponent::UAnimationComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UAnimationComponent::UpdateControlRotation()
{
	if (CurrentCharacter && CurrentCharacter->GetController())
	{
		if (CurrentCharacter->GetCharacterMovement()->Velocity.X < 0.f)
		{
			FRotator Right = FRotator(0.f, 180.f, 0.f);
			CurrentCharacter->GetController()->SetControlRotation(Right);
		}
		else if (CurrentCharacter->GetCharacterMovement()->Velocity.X > 0.f)
		{
			FRotator Left = FRotator(0.f, 0.f, 0.f);
			CurrentCharacter->GetController()->SetControlRotation(Left);
		}
		else
		{
			CharacterState = ECharacterState::Idle;
		}
	}
}

void UAnimationComponent::AnimationStateMachine()
{
	DeadAnimation();
	AttackAnimation();
	JumpAnimation();
	FallAnimation();
	RunAnimation();
}

bool UAnimationComponent::RunAnimation()
{
	if (CurrentCharacter)
	{
		float Velocity = CurrentCharacter->GetCharacterMovement()->Velocity.Length();
		bool bFalling = CurrentCharacter->GetCharacterMovement()->IsFalling();

		if (Velocity > 0.f && !bFalling && !AttackAnimation())
		{
			CharacterState = ECharacterState::Run;
			return true;
		}
		if (Velocity == 0.f)
		{
			CharacterState = ECharacterState::Idle;
		}
	}
	return false;
}

bool UAnimationComponent::JumpAnimation()
{
	if (CurrentCharacter)
	{
		if (UCharacterGameComponent* CharacterGameComponent = Owner->FindComponentByClass<UCharacterGameComponent>())
		{
			if (CharacterGameComponent->IsJumping())
			{
				CharacterState = ECharacterState::Jump;
				return true;
			}
			/*if (CurrentCharacter->GetCharacterMovement()->IsFalling())
			{
				CharacterState = ECharacterState::Fall;
				return true;
			}*/
		}
	}
	return false;
}

bool UAnimationComponent::FallAnimation()
{
	if (CurrentCharacter->GetCharacterMovement()->IsFalling())
	{
		CharacterState = ECharacterState::Fall;
		return true;
	}
	return false;
}

bool UAnimationComponent::AttackAnimation()
{
	return false;
}

bool UAnimationComponent::DeadAnimation()
{
	return false;
}

void UAnimationComponent::UpdateAnimation()
{
	if (CurrentCharacter == nullptr)
	{
		return;
	}
	if (!AnimationStructs.IsEmpty())
	{
		for (FAnimationStruct AnimationElement : AnimationStructs)
		{
			// Check if this animation matches the current character state
			if (AnimationElement.AnimationFlipbook && AnimationElement.AnimationState == CharacterState)
			{
				// Only update the flipbook if it's different from the current one
				if (CurrentCharacter->GetSprite()->GetFlipbook() != AnimationElement.AnimationFlipbook)
				{
					// Stop the current animation
					CurrentCharacter->GetSprite()->Stop();

					// Update to the new flipbook
					CurrentCharacter->GetSprite()->SetFlipbook(AnimationElement.AnimationFlipbook);
					CurrentCharacter->GetSprite()->SetLooping(AnimationElement.bLoopAnimation);

					// Play the new animation if it should loop
					if (AnimationElement.bLoopAnimation)
					{
						CurrentCharacter->GetSprite()->Play();
					}
				}

				// Update the current animation reference
				CurrentAnimation = AnimationElement;

				// Exit the loop after successfully updating the animation
				break;
			}
		}
	}
	/*if (!AnimationStructs.IsEmpty())
	{
		for (FAnimationStruct AnimationElement: AnimationStructs)
		{
			if (AnimationElement.AnimationFlipbook && AnimationElement.AnimationState == CharacterState)
			{
				CurrentAnimation = AnimationElement;
				CurrentCharacter->GetSprite()->SetFlipbook(AnimationElement.AnimationFlipbook);
				CurrentCharacter->GetSprite()->SetLooping(AnimationElement.bLoopAnimation);
				break;
			}
			if (CurrentAnimation.bLoopAnimation)
			{
				CurrentCharacter->GetSprite()->Play();
			}
			break;
		}
	}*/
	
	/*switch (CharacterState)
	{
		case ECharacterState::Dead:
			if (DeathFlipbook)
			{
				CurrentCharacter->GetSprite()->SetFlipbook((DeathFlipbook));
				CurrentCharacter->GetSprite()->SetLooping(false);
			}
			break;
		case ECharacterState::Run:
			if (RunFlipbook)
			{
				CurrentCharacter->GetSprite()->SetFlipbook((RunFlipbook));
				CurrentCharacter->GetSprite()->SetLooping(true);
			}
			break;
		case ECharacterState::Attack:
			if (AttackFlipbook)
			{
				CurrentCharacter->GetSprite()->SetFlipbook((AttackFlipbook));
				CurrentCharacter->GetSprite()->SetLooping(true);
			}
			break;
		case ECharacterState::Fall:
			if (JumpFlipbook)
			{
				CurrentCharacter->GetSprite()->SetFlipbook((JumpFlipbook));
				CurrentCharacter->GetSprite()->SetLooping(true);
			}
			break;
		case ECharacterState::Jump:
			if (JumpFlipbook)
			{
				CurrentCharacter->GetSprite()->SetFlipbook((JumpFlipbook));
				CurrentCharacter->GetSprite()->SetLooping(true);
			}
			break;
		case ECharacterState::Idle:
			if (IdleFlipbook)
			{
				CurrentCharacter->GetSprite()->SetFlipbook((IdleFlipbook));
				CurrentCharacter->GetSprite()->SetLooping(true);
			}
			break;
		default:
			if (IdleFlipbook)
			{
				CurrentCharacter->GetSprite()->SetFlipbook((IdleFlipbook));
				CurrentCharacter->GetSprite()->SetLooping(true);
			}
		break;
	}*/
}


// Called when the game starts
void UAnimationComponent::BeginPlay()
{
	Super::BeginPlay();

	Owner = GetOwner();
	CurrentCharacter = Cast<APlatformer2DCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
}

UDataTable* UAnimationComponent::GetDataTable()
{
	if (!DatatablePtr.IsValid())
	{
		DatatablePtr.LoadSynchronous();
	}
	return DatatablePtr.Get();
}





// Called every frame
void UAnimationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateControlRotation();
	AnimationStateMachine();
	UpdateAnimation();
}

