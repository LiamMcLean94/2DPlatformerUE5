// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/Platformer2DPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformer2DPC() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DPC();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DPC_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void APlatformer2DPC::StaticRegisterNativesAPlatformer2DPC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformer2DPC);
	UClass* Z_Construct_UClass_APlatformer2DPC_NoRegister()
	{
		return APlatformer2DPC::StaticClass();
	}
	struct Z_Construct_UClass_APlatformer2DPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformer2DPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DPC_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DPC_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Platformer2DPC.h" },
		{ "ModuleRelativePath", "Public/Platformer2DPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformer2DPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformer2DPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformer2DPC_Statics::ClassParams = {
		&APlatformer2DPC::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DPC_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformer2DPC_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APlatformer2DPC()
	{
		if (!Z_Registration_Info_UClass_APlatformer2DPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformer2DPC.OuterSingleton, Z_Construct_UClass_APlatformer2DPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformer2DPC.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<APlatformer2DPC>()
	{
		return APlatformer2DPC::StaticClass();
	}
	APlatformer2DPC::APlatformer2DPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformer2DPC);
	APlatformer2DPC::~APlatformer2DPC() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformer2DPC, APlatformer2DPC::StaticClass, TEXT("APlatformer2DPC"), &Z_Registration_Info_UClass_APlatformer2DPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformer2DPC), 7081796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DPC_h_2409161733(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
