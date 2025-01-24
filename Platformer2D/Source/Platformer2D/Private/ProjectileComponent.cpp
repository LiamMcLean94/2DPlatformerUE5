// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileComponent.h"

#include "PaperFlipbookComponent.h"
#include "Platformer2DCharacter.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"

// Sets default values
AProjectileComponent::AProjectileComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	PaperFlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("PaperFlipbook"));
	PaperFlipbookComponent->SetupAttachment(SceneComponent);

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(SceneComponent);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	

}

// Called when the game starts or when spawned
void AProjectileComponent::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = Cast<APlatformer2DCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (SphereComponent)
	{
		SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectileComponent::SphereOverLapped);
	}
}

// Called every frame
void AProjectileComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectileComponent::SphereOverLapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (PlayerCharacter && OtherActor == PlayerCharacter)
	{
		PlayerCharacter->TakeDamage(DamageAmount, FDamageEvent(), nullptr, nullptr);
	}
	Destroy();
}

