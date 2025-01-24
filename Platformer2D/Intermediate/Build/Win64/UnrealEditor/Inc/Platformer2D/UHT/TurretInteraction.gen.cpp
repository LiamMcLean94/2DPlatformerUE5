// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/TurretInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurretInteraction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AProjectileComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ATurretInteraction();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ATurretInteraction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	DEFINE_FUNCTION(ATurretInteraction::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	void ATurretInteraction::StaticRegisterNativesATurretInteraction()
	{
		UClass* Class = ATurretInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ATurretInteraction::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATurretInteraction_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurretInteraction_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer2D" },
		{ "ModuleRelativePath", "Public/TurretInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurretInteraction_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurretInteraction, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurretInteraction_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurretInteraction_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATurretInteraction_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurretInteraction_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurretInteraction);
	UClass* Z_Construct_UClass_ATurretInteraction_NoRegister()
	{
		return ATurretInteraction::StaticClass();
	}
	struct Z_Construct_UClass_ATurretInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaperSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaperSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurretInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurretInteraction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATurretInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurretInteraction_Fire, "Fire" }, // 3456183539
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurretInteraction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TurretInteraction.h" },
		{ "ModuleRelativePath", "Public/TurretInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretInteraction_Statics::NewProp_DurationSpawn_MetaData[] = {
		{ "Category", "Platformer2D|Interaction|Params" },
		{ "ModuleRelativePath", "Public/TurretInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurretInteraction_Statics::NewProp_DurationSpawn = { "DurationSpawn", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurretInteraction, DurationSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurretInteraction_Statics::NewProp_DurationSpawn_MetaData), Z_Construct_UClass_ATurretInteraction_Statics::NewProp_DurationSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretInteraction_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Platformer2D|Interaction|Params" },
		{ "ModuleRelativePath", "Public/TurretInteraction.h" },
	};
#endif
	void Z_Construct_UClass_ATurretInteraction_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((ATurretInteraction*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurretInteraction_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATurretInteraction), &Z_Construct_UClass_ATurretInteraction_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurretInteraction_Statics::NewProp_bLooping_MetaData), Z_Construct_UClass_ATurretInteraction_Statics::NewProp_bLooping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretInteraction_Statics::NewProp_PaperSprite_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurretInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurretInteraction_Statics::NewProp_PaperSprite = { "PaperSprite", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurretInteraction, PaperSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurretInteraction_Statics::NewProp_PaperSprite_MetaData), Z_Construct_UClass_ATurretInteraction_Statics::NewProp_PaperSprite_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretInteraction_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurretInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurretInteraction_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurretInteraction, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurretInteraction_Statics::NewProp_SceneComponent_MetaData), Z_Construct_UClass_ATurretInteraction_Statics::NewProp_SceneComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretInteraction_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "ModuleRelativePath", "Public/TurretInteraction.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurretInteraction_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurretInteraction, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurretInteraction_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_ATurretInteraction_Statics::NewProp_ProjectileClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurretInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurretInteraction_Statics::NewProp_DurationSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurretInteraction_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurretInteraction_Statics::NewProp_PaperSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurretInteraction_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurretInteraction_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurretInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurretInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurretInteraction_Statics::ClassParams = {
		&ATurretInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATurretInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurretInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurretInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurretInteraction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurretInteraction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATurretInteraction()
	{
		if (!Z_Registration_Info_UClass_ATurretInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurretInteraction.OuterSingleton, Z_Construct_UClass_ATurretInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATurretInteraction.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ATurretInteraction>()
	{
		return ATurretInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurretInteraction);
	ATurretInteraction::~ATurretInteraction() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_TurretInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_TurretInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATurretInteraction, ATurretInteraction::StaticClass, TEXT("ATurretInteraction"), &Z_Registration_Info_UClass_ATurretInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurretInteraction), 2934106498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_TurretInteraction_h_3001952297(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_TurretInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_TurretInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
