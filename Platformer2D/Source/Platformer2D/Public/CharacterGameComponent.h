// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "Components/ActorComponent.h"
#include "CharacterGameComponent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLATFORMER2D_API UCharacterGameComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterGameComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void MoveLeftRight(const FInputActionValue& Value);
	void Jump();

private:
	UPROPERTY(VisibleAnywhere, Category="Platformer2D|Player")
	class APlatformer2DCharacter* CurrentCharacter;
	UPROPERTY(VisibleAnywhere, Category="Platformer2D|Player")
	AActor* Owner;

	bool bJumping;

public:
	bool IsJumping() const
	{
		return bJumping;
	}

	void SetBJumping(bool bNewJumping)
	{
		this->bJumping = bNewJumping;
	}
	
};
