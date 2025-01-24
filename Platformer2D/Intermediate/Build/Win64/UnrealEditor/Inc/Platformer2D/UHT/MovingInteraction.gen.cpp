// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/MovingInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingInteraction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMovingInteraction();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMovingInteraction_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AParentActorInteraction();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	DEFINE_FUNCTION(AMovingInteraction::execMove)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DurationTimeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_Out_DurationTimeline);
		P_NATIVE_END;
	}
	void AMovingInteraction::StaticRegisterNativesAMovingInteraction()
	{
		UClass* Class = AMovingInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Move", &AMovingInteraction::execMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMovingInteraction_Move_Statics
	{
		struct MovingInteraction_eventMove_Parms
		{
			float DurationTimeline;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationTimeline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingInteraction_Move_Statics::NewProp_DurationTimeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingInteraction_Move_Statics::NewProp_DurationTimeline = { "DurationTimeline", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingInteraction_eventMove_Parms, DurationTimeline), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingInteraction_Move_Statics::NewProp_DurationTimeline_MetaData), Z_Construct_UFunction_AMovingInteraction_Move_Statics::NewProp_DurationTimeline_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingInteraction_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingInteraction_Move_Statics::NewProp_DurationTimeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingInteraction_Move_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer2D" },
		{ "ModuleRelativePath", "Public/MovingInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingInteraction_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingInteraction, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AMovingInteraction_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingInteraction_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingInteraction_Move_Statics::MovingInteraction_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingInteraction_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingInteraction_Move_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingInteraction_Move_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMovingInteraction_Move_Statics::MovingInteraction_eventMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMovingInteraction_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingInteraction_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingInteraction);
	UClass* Z_Construct_UClass_AMovingInteraction_NoRegister()
	{
		return AMovingInteraction::StaticClass();
	}
	struct Z_Construct_UClass_AMovingInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EndLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AParentActorInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingInteraction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMovingInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingInteraction_Move, "Move" }, // 4096878472
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingInteraction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingInteraction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MovingInteraction.h" },
		{ "ModuleRelativePath", "Public/MovingInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingInteraction_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovingInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingInteraction_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingInteraction, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingInteraction_Statics::NewProp_BoxComponent_MetaData), Z_Construct_UClass_AMovingInteraction_Statics::NewProp_BoxComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingInteraction_Statics::NewProp_EndLocation_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovingInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingInteraction_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingInteraction, EndLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingInteraction_Statics::NewProp_EndLocation_MetaData), Z_Construct_UClass_AMovingInteraction_Statics::NewProp_EndLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingInteraction_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingInteraction_Statics::NewProp_EndLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingInteraction_Statics::ClassParams = {
		&AMovingInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMovingInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingInteraction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingInteraction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMovingInteraction()
	{
		if (!Z_Registration_Info_UClass_AMovingInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingInteraction.OuterSingleton, Z_Construct_UClass_AMovingInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingInteraction.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AMovingInteraction>()
	{
		return AMovingInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingInteraction);
	AMovingInteraction::~AMovingInteraction() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_MovingInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_MovingInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingInteraction, AMovingInteraction::StaticClass, TEXT("AMovingInteraction"), &Z_Registration_Info_UClass_AMovingInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingInteraction), 1329018495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_MovingInteraction_h_1126310190(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_MovingInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_MovingInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
