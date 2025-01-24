// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ParentActorInteraction.h"
#include "FallingInteraction.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AFallingInteraction : public AParentActorInteraction
{
	GENERATED_BODY()
public:
	AFallingInteraction();

private:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class UBoxComponent* BoxComponent;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class UProjectileMovementComponent* ProjectileMovementComponent;
	UPROPERTY(EditDefaultsOnly, Category = "Platformer2D|Interaction")
	TSubclassOf<AFallingInteraction> FallingInteractionClass;

	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|params")
	float DropDelay = 2.0f;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|params")
	float RespawnpDelay = 2.0f;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|params")
	bool bDestroy = true;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|params")
	bool bRespawn = true;

	FVector StartLocation;

	FTimerHandle TimerHandle;

	bool bAlreadyOnFall;

public:

	UFUNCTION(BlueprintCallable, Category = "Platformer2D|Interaction")
	void BoxBeginOverlapped(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable, Category = "Platformer2D|Interaction")
	void OnFall();

	UFUNCTION(BlueprintCallable, Category = "Platformer2D|Interaction")
	void OnReset();
};
