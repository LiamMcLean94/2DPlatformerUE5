// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ParentActorInteraction.h"
#include "SpikeInteraction.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ASpikeInteraction : public AParentActorInteraction
{
	GENERATED_BODY()

public:
	
	ASpikeInteraction();
	void ChangeSpikeStat();
	UFUNCTION(BlueprintCallable, Category = "Platformer2D")
	void BringSpikeUp();
	UFUNCTION(BlueprintCallable, Category = "Platformer2D")
	void BringSpikeDown();

protected:
	
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|Params")
	bool bIsSpikeUp = false;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|Params")
	bool BLooping = true;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|Params")
	float DamageAmount = 10.f;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|Params")
	float Duration = 4.0f;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction|")
	class UBoxComponent* BoxComponent;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction")
	class UPaperSprite* SpriteSpikeUp;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction")
	UPaperSprite* SpriteSpikeDown;

	FTimerHandle SpikeTimer;

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
