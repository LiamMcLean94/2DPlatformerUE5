// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ParentActorInteraction.h"
#include "TrampolineInteraction.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ATrampolineInteraction : public AParentActorInteraction
{
	GENERATED_BODY()

	ATrampolineInteraction();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class UBoxComponent* BoxComponent;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|Params")
	FVector LaunchVelocity = FVector(0.f,0.f,600.f);
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|Params")
	float Duration = 2.0f;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|Params")
	UPaperSprite* SpriteTrampolineLineUp;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction|Params")
	UPaperSprite* SpriteTrampolineLineDown;

	FTimerHandle TimerHandle;

public:

	UFUNCTION(BlueprintCallable, Category = "Platformer2D|Interaction")
	void BoxBeginOverlapped(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	void ResetTrampoline();
	
};


