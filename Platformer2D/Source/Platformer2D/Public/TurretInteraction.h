// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurretInteraction.generated.h"

UCLASS()
class PLATFORMER2D_API ATurretInteraction : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurretInteraction();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FTimerHandle TimerHandle;
	UPROPERTY(EditDefaultsOnly, Category = "Platformer2D|Interaction|Params")
	float DurationSpawn = 2.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Platformer2D|Interaction|Params")
	bool bLooping = false;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Platformer2D")
	void Fire();

private:
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class UPaperSpriteComponent* PaperSprite;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class USceneComponent* SceneComponent;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Interaction")
	TSubclassOf<class AProjectileComponent> ProjectileClass;

};
