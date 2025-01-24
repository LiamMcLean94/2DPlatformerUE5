// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "PaperCharacter.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "GameFramework/SpringArmComponent.h"
#include "Platformer2DCharacter.generated.h"

class UInputAction;
class UInputMappingContext;
/**
 * 
 */
UCLASS()
class PLATFORMER2D_API APlatformer2DCharacter : public APaperCharacter
{
	GENERATED_BODY()

	APlatformer2DCharacter();

public:

	virtual void BeginPlay() override;
	virtual void Landed(const FHitResult& Hit) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(
		float DamageAmount,
		struct FDamageEvent const& DamageEvent,
		class AController* EventInstigator,
		AActor* DamageCauser)
	override;

private:
	UPROPERTY(VisibleAnywhere, Category="Platformer2D|Actor Component")
	class USpringArmComponent* SpringArmComponent;
	UPROPERTY(VisibleAnywhere, Category="Platformer2D|Actor Component")
	class UCameraComponent* CameraComponent;
	UPROPERTY(VisibleAnywhere, Category="Platformer2D|Actor Component")
	USceneComponent* SceneComponent;
	UPROPERTY(VisibleAnywhere, Category="Platformer2D|Actor Component")
	class UCharacterGameComponent* CharacterGameComponent;
	UPROPERTY(VisibleAnywhere, Category="Platformer2D|Actor Component")
	class UAnimationComponent* AnimationComponent;
	UPROPERTY(VisibleAnywhere, Category="Platformer2D|Actor Component")
	class UDeathComponent* DeathComponent;
	UPROPERTY(VisibleAnywhere, Category="Platformer2D|Actor Component")
	class UHealthComponent* HealthComponent;

protected:
	virtual void PawnClientRestart() override;
#pragma region INPUT
	UPROPERTY(EditDefaultsOnly, Category="Controls|Input Actions")
	UInputAction* MovementAction;
	UPROPERTY(EditDefaultsOnly, Category="Controls|Input Actions")
	UInputAction* JumpAction;
	UPROPERTY(EditDefaultsOnly, Category="Controls|Input Actions")
	UInputAction* ClimbAction;
	UPROPERTY(EditDefaultsOnly, Category="Controls|Input Actions")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditDefaultsOnly, Category="Controls|Input Actions")
	int32 InputMappingPriority = 0;

public:
	void EnhancedMove(const FInputActionValue& Value);
	void EnhancedJump(const FInputActionValue& Value);
	void EnhancedClimb(const FInputActionValue& Value);
#pragma endregion
};



