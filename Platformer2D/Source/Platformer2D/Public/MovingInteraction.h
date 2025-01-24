// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ParentActorInteraction.h"
#include "MovingInteraction.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AMovingInteraction : public AParentActorInteraction
{
	GENERATED_BODY()

	AMovingInteraction();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class UBoxComponent* BoxComponent;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class USceneComponent* EndLocation;

	FVector StartLocation;

	FVector TargetLocation;

public:

	UFUNCTION(BlueprintCallable, Category = "Platformer2D")
	void Move(const float& DurationTimeline);
	
};
