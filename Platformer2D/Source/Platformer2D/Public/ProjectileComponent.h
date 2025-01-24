// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileComponent.generated.h"

UCLASS()
class PLATFORMER2D_API AProjectileComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class USceneComponent* SceneComponent;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class UPaperFlipbookComponent* PaperFlipbookComponent;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class USphereComponent* SphereComponent;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class UProjectileMovementComponent* ProjectileMovementComponent;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Interaction")
	class APlatformer2DCharacter* PlayerCharacter;
	UPROPERTY(EditDefaultsOnly, Category = "Platformer2D|Interaction|Params")
	float DamageAmount = 40.f;

public:
	UFUNCTION(BlueprintCallable, Category = "Platformer2D")
	void SphereOverLapped(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

};
