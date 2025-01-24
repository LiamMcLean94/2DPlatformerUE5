// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/ParentActorInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentActorInteraction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AParentActorInteraction();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AParentActorInteraction_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void AParentActorInteraction::StaticRegisterNativesAParentActorInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AParentActorInteraction);
	UClass* Z_Construct_UClass_AParentActorInteraction_NoRegister()
	{
		return AParentActorInteraction::StaticClass();
	}
	struct Z_Construct_UClass_AParentActorInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaperSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaperSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParentActorInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParentActorInteraction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentActorInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ParentActorInteraction.h" },
		{ "ModuleRelativePath", "Public/ParentActorInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentActorInteraction_Statics::NewProp_PaperSprite_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ParentActorInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParentActorInteraction_Statics::NewProp_PaperSprite = { "PaperSprite", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParentActorInteraction, PaperSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParentActorInteraction_Statics::NewProp_PaperSprite_MetaData), Z_Construct_UClass_AParentActorInteraction_Statics::NewProp_PaperSprite_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentActorInteraction_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "ModuleRelativePath", "Public/ParentActorInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParentActorInteraction_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParentActorInteraction, PlayerCharacter), Z_Construct_UClass_APlatformer2DCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParentActorInteraction_Statics::NewProp_PlayerCharacter_MetaData), Z_Construct_UClass_AParentActorInteraction_Statics::NewProp_PlayerCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParentActorInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentActorInteraction_Statics::NewProp_PaperSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentActorInteraction_Statics::NewProp_PlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParentActorInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParentActorInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AParentActorInteraction_Statics::ClassParams = {
		&AParentActorInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AParentActorInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AParentActorInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParentActorInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_AParentActorInteraction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParentActorInteraction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AParentActorInteraction()
	{
		if (!Z_Registration_Info_UClass_AParentActorInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParentActorInteraction.OuterSingleton, Z_Construct_UClass_AParentActorInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AParentActorInteraction.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AParentActorInteraction>()
	{
		return AParentActorInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParentActorInteraction);
	AParentActorInteraction::~AParentActorInteraction() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_ParentActorInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_ParentActorInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AParentActorInteraction, AParentActorInteraction::StaticClass, TEXT("AParentActorInteraction"), &Z_Registration_Info_UClass_AParentActorInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParentActorInteraction), 2262070116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_ParentActorInteraction_h_1001775369(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_ParentActorInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_ParentActorInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
