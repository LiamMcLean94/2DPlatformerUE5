// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBase.h"
#include "EnemySimple.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AEnemySimple : public AEnemyBase
{
	GENERATED_BODY()

public:

	AEnemySimple();

private:

	bool bAlreadyHit = false;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Props")
	bool bCanFollowCharacter = false;

	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable, Category = "Platformer2D")
	virtual void OnHit(
		UPrimitiveComponent* HitComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComponent,
		FVector NormalImpulse,
		const FHitResult& Hit)
	override;

	UFUNCTION(BlueprintCallable, Category = "Platformer2D")
	virtual void OnCapsuleComponentHit(AActor* OtherActor, FVector HitNormal) override;

	UFUNCTION(BlueprintCallable, Category = "Platformer2D")
	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult)
	override;

	UFUNCTION(BlueprintCallable, Category = "Platformer2D")
	virtual void OnSphereEndOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex)
	override;

	void ResetHit();

	FTimerHandle TimerHandle;
	
public:

	virtual void Tick(float DeltaSeconds) override;
	
};