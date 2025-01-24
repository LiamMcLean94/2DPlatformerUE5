// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ParentActorInteraction.h"
#include "CheckpointInteraction.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ACheckpointInteraction : public AParentActorInteraction
{
	GENERATED_BODY()

public:
	ACheckpointInteraction();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class UBoxComponent* BoxComponent;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class UPaperFlipbookComponent* PaperFlipbookComponent;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class USceneComponent* Checkpoint;
	UPROPERTY(EditDefaultsOnly, Category = "Platformer2D|Interaction|Params")
	class UPaperFlipbook* CheckpointOff;
	UPROPERTY(EditDefaultsOnly, Category = "Platformer2D|Interaction|Params")
	class UPaperFlipbook* CheckpointOn;

public:
	UFUNCTION(BlueprintCallable, Category = "Platformer2D|Interaction")
	void BoxBeginOverlapped(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
};
