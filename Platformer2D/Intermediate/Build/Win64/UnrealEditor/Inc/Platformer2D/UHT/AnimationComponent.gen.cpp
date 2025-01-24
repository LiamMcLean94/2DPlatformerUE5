// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/AnimationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DCharacter_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UAnimationComponent();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UAnimationComponent_NoRegister();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_ECharacterState();
	PLATFORMER2D_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationStruct();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
	static UEnum* ECharacterState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_ECharacterState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("ECharacterState"));
		}
		return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<ECharacterState>()
	{
		return ECharacterState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_ECharacterState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_ECharacterState_Statics::Enumerators[] = {
		{ "Idle", (int64)Idle },
		{ "Run", (int64)Run },
		{ "Jump", (int64)Jump },
		{ "Attack", (int64)Attack },
		{ "Fall", (int64)Fall },
		{ "Climb", (int64)Climb },
		{ "IdleClimb", (int64)IdleClimb },
		{ "Dead", (int64)Dead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_ECharacterState_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Name", "Attack" },
		{ "BlueprintType", "true" },
		{ "Climb.Name", "Climb" },
		{ "Dead.Name", "Dead" },
		{ "Fall.Name", "Fall" },
		{ "Idle.Name", "Idle" },
		{ "IdleClimb.Name", "IdleClimb" },
		{ "Jump.Name", "Jump" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
		{ "Run.Name", "Run" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_ECharacterState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"ECharacterState",
		"ECharacterState",
		Z_Construct_UEnum_Platformer2D_ECharacterState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_ECharacterState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_ECharacterState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_ECharacterState()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_Platformer2D_ECharacterState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimationStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAnimationStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationStruct;
class UScriptStruct* FAnimationStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationStruct, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("AnimationStruct"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationStruct.OuterSingleton;
}
template<> PLATFORMER2D_API UScriptStruct* StaticStruct<FAnimationStruct>()
{
	return FAnimationStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopAnimation_MetaData[];
#endif
		static void NewProp_bLoopAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_AnimationState_MetaData[] = {
		{ "Category", "Platformer2D|struct" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_AnimationState = { "AnimationState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationStruct, AnimationState), Z_Construct_UEnum_Platformer2D_ECharacterState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_AnimationState_MetaData), Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_AnimationState_MetaData) }; // 2328770151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_AnimationFlipbook_MetaData[] = {
		{ "Category", "Platformer2D|struct" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_AnimationFlipbook = { "AnimationFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationStruct, AnimationFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_AnimationFlipbook_MetaData), Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_AnimationFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_bLoopAnimation_MetaData[] = {
		{ "Category", "Platformer2D|struct" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_bLoopAnimation_SetBit(void* Obj)
	{
		((FAnimationStruct*)Obj)->bLoopAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_bLoopAnimation = { "bLoopAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimationStruct), &Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_bLoopAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_bLoopAnimation_MetaData), Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_bLoopAnimation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_AnimationState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_AnimationFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewProp_bLoopAnimation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AnimationStruct",
		Z_Construct_UScriptStruct_FAnimationStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStruct_Statics::PropPointers),
		sizeof(FAnimationStruct),
		alignof(FAnimationStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationStruct.InnerSingleton, Z_Construct_UScriptStruct_FAnimationStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationStruct.InnerSingleton;
	}
	void UAnimationComponent::StaticRegisterNativesUAnimationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationComponent);
	UClass* Z_Construct_UClass_UAnimationComponent_NoRegister()
	{
		return UAnimationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationStructs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatatablePtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatablePtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RunFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathFlipbook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AnimationComponent.h" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationComponent_Statics::NewProp_CurrentCharacter_MetaData[] = {
		{ "Category", "Platformer2D|Player" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, CurrentCharacter), Z_Construct_UClass_APlatformer2DCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::NewProp_CurrentCharacter_MetaData), Z_Construct_UClass_UAnimationComponent_Statics::NewProp_CurrentCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationComponent_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "Platformer2D|Player" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::NewProp_Owner_MetaData), Z_Construct_UClass_UAnimationComponent_Statics::NewProp_Owner_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AnimationStructs_Inner = { "AnimationStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimationStruct, METADATA_PARAMS(0, nullptr) }; // 963668361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AnimationStructs_MetaData[] = {
		{ "Category", "Platformer2D|Animation" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AnimationStructs = { "AnimationStructs", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, AnimationStructs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AnimationStructs_MetaData), Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AnimationStructs_MetaData) }; // 963668361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DatatablePtr_MetaData[] = {
		{ "Category", "Platformer2D|Animation" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DatatablePtr = { "DatatablePtr", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, DatatablePtr), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DatatablePtr_MetaData), Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DatatablePtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationComponent_Statics::NewProp_IdleFlipbook_MetaData[] = {
		{ "Category", "Platformer2D|Animation" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_IdleFlipbook = { "IdleFlipbook", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, IdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::NewProp_IdleFlipbook_MetaData), Z_Construct_UClass_UAnimationComponent_Statics::NewProp_IdleFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationComponent_Statics::NewProp_RunFlipbook_MetaData[] = {
		{ "Category", "Platformer2D|Animation" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_RunFlipbook = { "RunFlipbook", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, RunFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::NewProp_RunFlipbook_MetaData), Z_Construct_UClass_UAnimationComponent_Statics::NewProp_RunFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationComponent_Statics::NewProp_JumpFlipbook_MetaData[] = {
		{ "Category", "Platformer2D|Animation" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_JumpFlipbook = { "JumpFlipbook", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, JumpFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::NewProp_JumpFlipbook_MetaData), Z_Construct_UClass_UAnimationComponent_Statics::NewProp_JumpFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AttackFlipbook_MetaData[] = {
		{ "Category", "Platformer2D|Animation" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AttackFlipbook = { "AttackFlipbook", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, AttackFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AttackFlipbook_MetaData), Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AttackFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DeathFlipbook_MetaData[] = {
		{ "Category", "Platformer2D|Animation" },
		{ "ModuleRelativePath", "Public/AnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DeathFlipbook = { "DeathFlipbook", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, DeathFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DeathFlipbook_MetaData), Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DeathFlipbook_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_CurrentCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AnimationStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AnimationStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DatatablePtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_IdleFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_RunFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_JumpFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AttackFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DeathFlipbook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationComponent_Statics::ClassParams = {
		&UAnimationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimationComponent()
	{
		if (!Z_Registration_Info_UClass_UAnimationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationComponent.OuterSingleton, Z_Construct_UClass_UAnimationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationComponent.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<UAnimationComponent>()
	{
		return UAnimationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationComponent);
	UAnimationComponent::~UAnimationComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_Statics::EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2328770151U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_Statics::ScriptStructInfo[] = {
		{ FAnimationStruct::StaticStruct, Z_Construct_UScriptStruct_FAnimationStruct_Statics::NewStructOps, TEXT("AnimationStruct"), &Z_Registration_Info_UScriptStruct_AnimationStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationStruct), 963668361U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationComponent, UAnimationComponent::StaticClass, TEXT("UAnimationComponent"), &Z_Registration_Info_UClass_UAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationComponent), 2359278009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_2668768180(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
