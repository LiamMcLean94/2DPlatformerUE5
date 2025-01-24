// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/Platformer2DCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformer2DCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DCharacter();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DCharacter_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UAnimationComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UCharacterGameComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void APlatformer2DCharacter::StaticRegisterNativesAPlatformer2DCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformer2DCharacter);
	UClass* Z_Construct_UClass_APlatformer2DCharacter_NoRegister()
	{
		return APlatformer2DCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlatformer2DCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterGameComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterGameComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputMappingPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformer2DCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Platformer2DCharacter.h" },
		{ "ModuleRelativePath", "Public/Platformer2DCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Platformer2D|Actor Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Platformer2DCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformer2DCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_SpringArmComponent_MetaData), Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_SpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Platformer2D|Actor Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Platformer2DCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformer2DCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Platformer2D|Actor Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Platformer2DCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformer2DCharacter, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_SceneComponent_MetaData), Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_SceneComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_CharacterGameComponent_MetaData[] = {
		{ "Category", "Platformer2D|Actor Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Platformer2DCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_CharacterGameComponent = { "CharacterGameComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformer2DCharacter, CharacterGameComponent), Z_Construct_UClass_UCharacterGameComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_CharacterGameComponent_MetaData), Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_CharacterGameComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_AnimationComponent_MetaData[] = {
		{ "Category", "Platformer2D|Actor Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Platformer2DCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_AnimationComponent = { "AnimationComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformer2DCharacter, AnimationComponent), Z_Construct_UClass_UAnimationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_AnimationComponent_MetaData), Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_AnimationComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "Controls|Input Actions" },
		{ "ModuleRelativePath", "Public/Platformer2DCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformer2DCharacter, MovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_MovementAction_MetaData), Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_MovementAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "Category", "Controls|Input Actions" },
		{ "ModuleRelativePath", "Public/Platformer2DCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformer2DCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Controls|Input Actions" },
		{ "ModuleRelativePath", "Public/Platformer2DCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformer2DCharacter, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_InputMappingPriority_MetaData[] = {
		{ "Category", "Controls|Input Actions" },
		{ "ModuleRelativePath", "Public/Platformer2DCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_InputMappingPriority = { "InputMappingPriority", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformer2DCharacter, InputMappingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_InputMappingPriority_MetaData), Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_InputMappingPriority_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformer2DCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_CharacterGameComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_AnimationComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_MovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformer2DCharacter_Statics::NewProp_InputMappingPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformer2DCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformer2DCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformer2DCharacter_Statics::ClassParams = {
		&APlatformer2DCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatformer2DCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformer2DCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlatformer2DCharacter()
	{
		if (!Z_Registration_Info_UClass_APlatformer2DCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformer2DCharacter.OuterSingleton, Z_Construct_UClass_APlatformer2DCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformer2DCharacter.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<APlatformer2DCharacter>()
	{
		return APlatformer2DCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformer2DCharacter);
	APlatformer2DCharacter::~APlatformer2DCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformer2DCharacter, APlatformer2DCharacter::StaticClass, TEXT("APlatformer2DCharacter"), &Z_Registration_Info_UClass_APlatformer2DCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformer2DCharacter), 2407835992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DCharacter_h_46808234(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_Platformer2DCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
