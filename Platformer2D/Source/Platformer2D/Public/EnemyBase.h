// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "EnemyBase.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AEnemyBase : public APaperCharacter
{
	GENERATED_BODY()

public:

	AEnemyBase();

protected:
	
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;

	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Actor Component")
	class USphereComponent* SphereComponent;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Actor Component")
	class UHealthComponent* HealthComponent;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Actor Component")
	class UDeathComponent* DeathComponent;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Player")
	class APlatformer2DCharacter* PlayerCharacter;

public:
	void ToggleFacingDirection();

#pragma region MOVEMENT
	void Move();
	void FollowCharacter();
#pragma endregion

	virtual void OnCapsuleComponentHit(AActor* OtherActor, FVector HitNormal){}
	virtual void OnHit(
		UPrimitiveComponent* HitComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComponent,
		FVector NormalImpulse,
		const FHitResult& Hit){}

	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult){}

	virtual void OnSphereEndOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex){}

protected:

	UPROPERTY(EditAnywhere, Category = "Platformer2D|Props")
	bool bEMoveRight = false;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Props")
	bool bFollowingCharacter = false;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Props")
	FVector EWorldDirection = FVector(1.0f, 0, 0);
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Props")
	float MoveDistanceBetweenCharacter = 40.f;
};
