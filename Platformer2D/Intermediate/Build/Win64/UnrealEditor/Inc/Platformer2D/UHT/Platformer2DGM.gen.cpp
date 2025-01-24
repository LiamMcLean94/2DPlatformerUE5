// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/Platformer2DGM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformer2DGM() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DGM();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DGM_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void APlatformer2DGM::StaticRegisterNativesAPlatformer2DGM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformer2DGM);
	UClass* Z_Construct_UClass_APlatformer2DGM_NoRegister()
	{
		return APlatformer2DGM::StaticClass();
	}
	struct Z_Construct_UClass_APlatformer2DGM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformer2DGM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DGM_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DGM_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Platformer2DGM.h" },
		{ "ModuleRelativePath", "Public/Platformer2DGM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformer2DGM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformer2DGM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformer2DGM_Statics::ClassParams = {
		&APlatformer2DGM::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DGM_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformer2DGM_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APlatformer2DGM()
	{
		if (!Z_Registration_Info_UClass_APlatformer2DGM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformer2DGM.OuterSingleton, Z_Construct_UClass_APlatformer2DGM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformer2DGM.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<APlatformer2DGM>()
	{
		return APlatformer2DGM::StaticClass();
	}
	APlatformer2DGM::APlatformer2DGM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformer2DGM);
	APlatformer2DGM::~APlatformer2DGM() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DGM_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DGM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformer2DGM, APlatformer2DGM::StaticClass, TEXT("APlatformer2DGM"), &Z_Registration_Info_UClass_APlatformer2DGM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformer2DGM), 1283645547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DGM_h_2798308587(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DGM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DGM_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
