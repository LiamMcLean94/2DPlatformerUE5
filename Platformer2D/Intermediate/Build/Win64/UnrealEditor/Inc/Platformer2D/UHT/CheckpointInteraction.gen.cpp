// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/CheckpointInteraction.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpointInteraction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ACheckpointInteraction();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ACheckpointInteraction_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AParentActorInteraction();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	DEFINE_FUNCTION(ACheckpointInteraction::execBoxBeginOverlapped)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BoxBeginOverlapped(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ACheckpointInteraction::StaticRegisterNativesACheckpointInteraction()
	{
		UClass* Class = ACheckpointInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoxBeginOverlapped", &ACheckpointInteraction::execBoxBeginOverlapped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics
	{
		struct CheckpointInteraction_eventBoxBeginOverlapped_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointInteraction_eventBoxBeginOverlapped_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointInteraction_eventBoxBeginOverlapped_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointInteraction_eventBoxBeginOverlapped_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointInteraction_eventBoxBeginOverlapped_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CheckpointInteraction_eventBoxBeginOverlapped_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CheckpointInteraction_eventBoxBeginOverlapped_Parms), &Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointInteraction_eventBoxBeginOverlapped_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "ModuleRelativePath", "Public/CheckpointInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckpointInteraction, nullptr, "BoxBeginOverlapped", nullptr, nullptr, Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::CheckpointInteraction_eventBoxBeginOverlapped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::CheckpointInteraction_eventBoxBeginOverlapped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACheckpointInteraction);
	UClass* Z_Construct_UClass_ACheckpointInteraction_NoRegister()
	{
		return ACheckpointInteraction::StaticClass();
	}
	struct Z_Construct_UClass_ACheckpointInteraction_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbookComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaperFlipbookComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Checkpoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Checkpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointOff_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckpointOff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointOn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckpointOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACheckpointInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AParentActorInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointInteraction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACheckpointInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACheckpointInteraction_BoxBeginOverlapped, "BoxBeginOverlapped" }, // 3230458205
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointInteraction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpointInteraction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CheckpointInteraction.h" },
		{ "ModuleRelativePath", "Public/CheckpointInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CheckpointInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointInteraction, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_BoxComponent_MetaData), Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_BoxComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_PaperFlipbookComponent_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CheckpointInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_PaperFlipbookComponent = { "PaperFlipbookComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointInteraction, PaperFlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_PaperFlipbookComponent_MetaData), Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_PaperFlipbookComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_Checkpoint_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CheckpointInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_Checkpoint = { "Checkpoint", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointInteraction, Checkpoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_Checkpoint_MetaData), Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_Checkpoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_CheckpointOff_MetaData[] = {
		{ "Category", "Platformer2D|Interaction|Params" },
		{ "ModuleRelativePath", "Public/CheckpointInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_CheckpointOff = { "CheckpointOff", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointInteraction, CheckpointOff), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_CheckpointOff_MetaData), Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_CheckpointOff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_CheckpointOn_MetaData[] = {
		{ "Category", "Platformer2D|Interaction|Params" },
		{ "ModuleRelativePath", "Public/CheckpointInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_CheckpointOn = { "CheckpointOn", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpointInteraction, CheckpointOn), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_CheckpointOn_MetaData), Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_CheckpointOn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckpointInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_PaperFlipbookComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_Checkpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_CheckpointOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpointInteraction_Statics::NewProp_CheckpointOn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACheckpointInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckpointInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACheckpointInteraction_Statics::ClassParams = {
		&ACheckpointInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACheckpointInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_ACheckpointInteraction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpointInteraction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACheckpointInteraction()
	{
		if (!Z_Registration_Info_UClass_ACheckpointInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACheckpointInteraction.OuterSingleton, Z_Construct_UClass_ACheckpointInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACheckpointInteraction.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ACheckpointInteraction>()
	{
		return ACheckpointInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckpointInteraction);
	ACheckpointInteraction::~ACheckpointInteraction() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_CheckpointInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_CheckpointInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACheckpointInteraction, ACheckpointInteraction::StaticClass, TEXT("ACheckpointInteraction"), &Z_Registration_Info_UClass_ACheckpointInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACheckpointInteraction), 617720687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_CheckpointInteraction_h_3901812798(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_CheckpointInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_CheckpointInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
