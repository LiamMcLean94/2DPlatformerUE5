// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LadderInteraction.generated.h"

UCLASS()
class PLATFORMER2D_API ALadderInteraction : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALadderInteraction();

private:
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class UBoxComponent* BoxComponent;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|")
	class APlatformer2DCharacter* PlayerCharacter;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

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
