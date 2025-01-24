// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/PlayerStatWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatWidget() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_UPlayerStatWidget();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UPlayerStatWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerStatWidget::execUpdateGem)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGem(Z_Param_Gem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerStatWidget::execUpdateHealthBar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealthBar(Z_Param_Health,Z_Param_MaxHealth);
		P_NATIVE_END;
	}
	void UPlayerStatWidget::StaticRegisterNativesUPlayerStatWidget()
	{
		UClass* Class = UPlayerStatWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateGem", &UPlayerStatWidget::execUpdateGem },
			{ "UpdateHealthBar", &UPlayerStatWidget::execUpdateHealthBar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics
	{
		struct PlayerStatWidget_eventUpdateGem_Parms
		{
			float Gem;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::NewProp_Gem = { "Gem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStatWidget_eventUpdateGem_Parms, Gem), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::NewProp_Gem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platfromer2D|Widget" },
		{ "ModuleRelativePath", "Public/PlayerStatWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatWidget, nullptr, "UpdateGem", nullptr, nullptr, Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::PlayerStatWidget_eventUpdateGem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::PlayerStatWidget_eventUpdateGem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerStatWidget_UpdateGem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStatWidget_UpdateGem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics
	{
		struct PlayerStatWidget_eventUpdateHealthBar_Parms
		{
			float Health;
			float MaxHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStatWidget_eventUpdateHealthBar_Parms, Health), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStatWidget_eventUpdateHealthBar_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::NewProp_MaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platfromer2D|Widget" },
		{ "ModuleRelativePath", "Public/PlayerStatWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatWidget, nullptr, "UpdateHealthBar", nullptr, nullptr, Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::PlayerStatWidget_eventUpdateHealthBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::PlayerStatWidget_eventUpdateHealthBar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerStatWidget);
	UClass* Z_Construct_UClass_UPlayerStatWidget_NoRegister()
	{
		return UPlayerStatWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStatWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfGems_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NumberOfGems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStatWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerStatWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerStatWidget_UpdateGem, "UpdateGem" }, // 4197735768
		{ &Z_Construct_UFunction_UPlayerStatWidget_UpdateHealthBar, "UpdateHealthBar" }, // 4096339373
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayerStatWidget.h" },
		{ "ModuleRelativePath", "Public/PlayerStatWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatWidget_Statics::NewProp_PlayerHealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Platfromer2D|Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerStatWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStatWidget_Statics::NewProp_PlayerHealthBar = { "PlayerHealthBar", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStatWidget, PlayerHealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatWidget_Statics::NewProp_PlayerHealthBar_MetaData), Z_Construct_UClass_UPlayerStatWidget_Statics::NewProp_PlayerHealthBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatWidget_Statics::NewProp_NumberOfGems_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Platfromer2D|Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerStatWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStatWidget_Statics::NewProp_NumberOfGems = { "NumberOfGems", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStatWidget, NumberOfGems), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatWidget_Statics::NewProp_NumberOfGems_MetaData), Z_Construct_UClass_UPlayerStatWidget_Statics::NewProp_NumberOfGems_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStatWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatWidget_Statics::NewProp_PlayerHealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatWidget_Statics::NewProp_NumberOfGems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStatWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStatWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStatWidget_Statics::ClassParams = {
		&UPlayerStatWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerStatWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerStatWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerStatWidget()
	{
		if (!Z_Registration_Info_UClass_UPlayerStatWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerStatWidget.OuterSingleton, Z_Construct_UClass_UPlayerStatWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerStatWidget.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<UPlayerStatWidget>()
	{
		return UPlayerStatWidget::StaticClass();
	}
	UPlayerStatWidget::UPlayerStatWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStatWidget);
	UPlayerStatWidget::~UPlayerStatWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_PlayerStatWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_PlayerStatWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerStatWidget, UPlayerStatWidget::StaticClass, TEXT("UPlayerStatWidget"), &Z_Registration_Info_UClass_UPlayerStatWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerStatWidget), 3551399770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_PlayerStatWidget_h_2008993237(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_PlayerStatWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_PlayerStatWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
