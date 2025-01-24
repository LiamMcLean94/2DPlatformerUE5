// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/CharacterGameComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterGameComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DCharacter_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UCharacterGameComponent();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UCharacterGameComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UPlayerStatWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void UCharacterGameComponent::StaticRegisterNativesUCharacterGameComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterGameComponent);
	UClass* Z_Construct_UClass_UCharacterGameComponent_NoRegister()
	{
		return UCharacterGameComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterGameComponent_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gem_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStatWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerStatWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStatWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerStatWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterGameComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterGameComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterGameComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterGameComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_CurrentCharacter_MetaData[] = {
		{ "Category", "Platformer2D|Player" },
		{ "ModuleRelativePath", "Public/CharacterGameComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterGameComponent, CurrentCharacter), Z_Construct_UClass_APlatformer2DCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_CurrentCharacter_MetaData), Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_CurrentCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "Platformer2D|Player" },
		{ "ModuleRelativePath", "Public/CharacterGameComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterGameComponent, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_Owner_MetaData), Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_Owner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_Gem_MetaData[] = {
		{ "Category", "Platformer2D|Widget" },
		{ "ModuleRelativePath", "Public/CharacterGameComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_Gem = { "Gem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterGameComponent, Gem), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_Gem_MetaData), Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_Gem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_PlayerStatWidgetClass_MetaData[] = {
		{ "Category", "Platformer2D|Widget" },
		{ "ModuleRelativePath", "Public/CharacterGameComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_PlayerStatWidgetClass = { "PlayerStatWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterGameComponent, PlayerStatWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerStatWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_PlayerStatWidgetClass_MetaData), Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_PlayerStatWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_PlayerStatWidget_MetaData[] = {
		{ "Category", "Platformer2D|Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterGameComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_PlayerStatWidget = { "PlayerStatWidget", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterGameComponent, PlayerStatWidget), Z_Construct_UClass_UPlayerStatWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_PlayerStatWidget_MetaData), Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_PlayerStatWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterGameComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_CurrentCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_Gem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_PlayerStatWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterGameComponent_Statics::NewProp_PlayerStatWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterGameComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterGameComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterGameComponent_Statics::ClassParams = {
		&UCharacterGameComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterGameComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterGameComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterGameComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCharacterGameComponent()
	{
		if (!Z_Registration_Info_UClass_UCharacterGameComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterGameComponent.OuterSingleton, Z_Construct_UClass_UCharacterGameComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterGameComponent.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<UCharacterGameComponent>()
	{
		return UCharacterGameComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterGameComponent);
	UCharacterGameComponent::~UCharacterGameComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_CharacterGameComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_CharacterGameComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterGameComponent, UCharacterGameComponent::StaticClass, TEXT("UCharacterGameComponent"), &Z_Registration_Info_UClass_UCharacterGameComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterGameComponent), 3533864194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_CharacterGameComponent_h_4024505075(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_CharacterGameComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_CharacterGameComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
