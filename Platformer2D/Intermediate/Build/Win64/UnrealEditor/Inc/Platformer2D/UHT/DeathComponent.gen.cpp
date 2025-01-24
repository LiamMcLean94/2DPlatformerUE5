// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/DeathComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UDeathComponent();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UDeathComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	DEFINE_FUNCTION(UDeathComponent::execOnDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeathComponent::execSetIsDead)
	{
		P_GET_UBOOL(Z_Param_bNewIsDead);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsDead(Z_Param_bNewIsDead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeathComponent::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	void UDeathComponent::StaticRegisterNativesUDeathComponent()
	{
		UClass* Class = UDeathComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDead", &UDeathComponent::execIsDead },
			{ "OnDeath", &UDeathComponent::execOnDeath },
			{ "SetIsDead", &UDeathComponent::execSetIsDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeathComponent_IsDead_Statics
	{
		struct DeathComponent_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDeathComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DeathComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDeathComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DeathComponent_eventIsDead_Parms), &Z_Construct_UFunction_UDeathComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeathComponent_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeathComponent_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathComponent_IsDead_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer2D|Death Component" },
		{ "ModuleRelativePath", "Public/DeathComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathComponent, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_UDeathComponent_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDeathComponent_IsDead_Statics::DeathComponent_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeathComponent_IsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_IsDead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDeathComponent_IsDead_Statics::DeathComponent_eventIsDead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDeathComponent_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeathComponent_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeathComponent_OnDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathComponent_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer2D|Death Component" },
		{ "ModuleRelativePath", "Public/DeathComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathComponent_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathComponent, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeathComponent_OnDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDeathComponent_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeathComponent_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics
	{
		struct DeathComponent_eventSetIsDead_Parms
		{
			bool bNewIsDead;
		};
		static void NewProp_bNewIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::NewProp_bNewIsDead_SetBit(void* Obj)
	{
		((DeathComponent_eventSetIsDead_Parms*)Obj)->bNewIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::NewProp_bNewIsDead = { "bNewIsDead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DeathComponent_eventSetIsDead_Parms), &Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::NewProp_bNewIsDead_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::NewProp_bNewIsDead,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer2D|Death Component" },
		{ "ModuleRelativePath", "Public/DeathComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathComponent, nullptr, "SetIsDead", nullptr, nullptr, Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::DeathComponent_eventSetIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::DeathComponent_eventSetIsDead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDeathComponent_SetIsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeathComponent_SetIsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeathComponent);
	UClass* Z_Construct_UClass_UDeathComponent_NoRegister()
	{
		return UDeathComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDeathComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeathComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeathComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeathComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeathComponent_IsDead, "IsDead" }, // 2468026070
		{ &Z_Construct_UFunction_UDeathComponent_OnDeath, "OnDeath" }, // 589752996
		{ &Z_Construct_UFunction_UDeathComponent_SetIsDead, "SetIsDead" }, // 329833669
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeathComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DeathComponent.h" },
		{ "ModuleRelativePath", "Public/DeathComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeathComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeathComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeathComponent_Statics::ClassParams = {
		&UDeathComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeathComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeathComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDeathComponent()
	{
		if (!Z_Registration_Info_UClass_UDeathComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeathComponent.OuterSingleton, Z_Construct_UClass_UDeathComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeathComponent.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<UDeathComponent>()
	{
		return UDeathComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeathComponent);
	UDeathComponent::~UDeathComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_DeathComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_DeathComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeathComponent, UDeathComponent::StaticClass, TEXT("UDeathComponent"), &Z_Registration_Info_UClass_UDeathComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeathComponent), 1342744870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_DeathComponent_h_2697827985(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_DeathComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_DeathComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
