
#pragma once

#include "CoreMinimal.h"
#include "PaperFlipbook.h"
#include "Components/ActorComponent.h"
#include "AnimationComponent.generated.h"


UENUM(BlueprintType)
enum ECharacterState
{
	Idle,
	Run,
	Jump,
	Attack,
	Fall,
	Climb,
	IdleClimb,
	Dead
};

USTRUCT(BlueprintType)
struct FAnimationStruct: public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platformer2D|struct")
	TEnumAsByte<ECharacterState> AnimationState;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platformer2D|struct")
	UPaperFlipbook* AnimationFlipbook;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platformer2D|struct")
	bool bLoopAnimation;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLATFORMER2D_API UAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAnimationComponent();
	void UpdateControlRotation();
	void AnimationStateMachine();

	bool RunAnimation();
	bool JumpAnimation();
	bool FallAnimation();
	bool ClimbAnimation();
	bool AttackAnimation();
	bool DeadAnimation();

	void UpdateAnimation();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UDataTable* GetDataTable();
	UDataTable* GetDateTableRow(ECharacterState CurrentState);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Player")
	class APlatformer2DCharacter* CurrentCharacter;
	UPROPERTY(VisibleAnywhere, Category = "Platformer2D|Player")
	AActor* Owner;

	ECharacterState CharacterState;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Animation")
	TArray<FAnimationStruct> AnimationStructs;
	FAnimationStruct CurrentAnimation;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Animation")
	TSoftObjectPtr<UDataTable> DatatablePtr;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Animation")
	UPaperFlipbook* IdleFlipbook;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Animation")
	UPaperFlipbook* RunFlipbook;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Animation")
	UPaperFlipbook* JumpFlipbook;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Animation")
	UPaperFlipbook* AttackFlipbook;
	UPROPERTY(EditAnywhere, Category = "Platformer2D|Animation")
	UPaperFlipbook* DeathFlipbook;
		
};
