// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ParentActorInteraction.h"
#include "GemInteraction.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AGemInteraction : public AParentActorInteraction
{
	GENERATED_BODY()

	AGemInteraction();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class UBoxComponent* BoxComponent;

	
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
	void BoxEndOverlapped(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex);
	
	
};
