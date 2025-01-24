// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/LadderInteraction.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLadderInteraction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ALadderInteraction();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ALadderInteraction_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	DEFINE_FUNCTION(ALadderInteraction::execBoxEndOverlapped)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BoxEndOverlapped(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALadderInteraction::execBoxBeginOverlapped)
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
	void ALadderInteraction::StaticRegisterNativesALadderInteraction()
	{
		UClass* Class = ALadderInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoxBeginOverlapped", &ALadderInteraction::execBoxBeginOverlapped },
			{ "BoxEndOverlapped", &ALadderInteraction::execBoxEndOverlapped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics
	{
		struct LadderInteraction_eventBoxBeginOverlapped_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LadderInteraction_eventBoxBeginOverlapped_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LadderInteraction_eventBoxBeginOverlapped_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LadderInteraction_eventBoxBeginOverlapped_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LadderInteraction_eventBoxBeginOverlapped_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LadderInteraction_eventBoxBeginOverlapped_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LadderInteraction_eventBoxBeginOverlapped_Parms), &Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LadderInteraction_eventBoxBeginOverlapped_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "ModuleRelativePath", "Public/LadderInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALadderInteraction, nullptr, "BoxBeginOverlapped", nullptr, nullptr, Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::LadderInteraction_eventBoxBeginOverlapped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::LadderInteraction_eventBoxBeginOverlapped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics
	{
		struct LadderInteraction_eventBoxEndOverlapped_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LadderInteraction_eventBoxEndOverlapped_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LadderInteraction_eventBoxEndOverlapped_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LadderInteraction_eventBoxEndOverlapped_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LadderInteraction_eventBoxEndOverlapped_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "ModuleRelativePath", "Public/LadderInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALadderInteraction, nullptr, "BoxEndOverlapped", nullptr, nullptr, Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::LadderInteraction_eventBoxEndOverlapped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::LadderInteraction_eventBoxEndOverlapped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALadderInteraction);
	UClass* Z_Construct_UClass_ALadderInteraction_NoRegister()
	{
		return ALadderInteraction::StaticClass();
	}
	struct Z_Construct_UClass_ALadderInteraction_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALadderInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALadderInteraction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALadderInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALadderInteraction_BoxBeginOverlapped, "BoxBeginOverlapped" }, // 516253740
		{ &Z_Construct_UFunction_ALadderInteraction_BoxEndOverlapped, "BoxEndOverlapped" }, // 468428665
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALadderInteraction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadderInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LadderInteraction.h" },
		{ "ModuleRelativePath", "Public/LadderInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadderInteraction_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LadderInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadderInteraction_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadderInteraction, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALadderInteraction_Statics::NewProp_BoxComponent_MetaData), Z_Construct_UClass_ALadderInteraction_Statics::NewProp_BoxComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadderInteraction_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "Platformer2D|" },
		{ "ModuleRelativePath", "Public/LadderInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadderInteraction_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadderInteraction, PlayerCharacter), Z_Construct_UClass_APlatformer2DCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALadderInteraction_Statics::NewProp_PlayerCharacter_MetaData), Z_Construct_UClass_ALadderInteraction_Statics::NewProp_PlayerCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALadderInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadderInteraction_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadderInteraction_Statics::NewProp_PlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALadderInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALadderInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALadderInteraction_Statics::ClassParams = {
		&ALadderInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALadderInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALadderInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALadderInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_ALadderInteraction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALadderInteraction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALadderInteraction()
	{
		if (!Z_Registration_Info_UClass_ALadderInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALadderInteraction.OuterSingleton, Z_Construct_UClass_ALadderInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALadderInteraction.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ALadderInteraction>()
	{
		return ALadderInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALadderInteraction);
	ALadderInteraction::~ALadderInteraction() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_LadderInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_LadderInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALadderInteraction, ALadderInteraction::StaticClass, TEXT("ALadderInteraction"), &Z_Registration_Info_UClass_ALadderInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALadderInteraction), 1147078839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_LadderInteraction_h_3968591000(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_LadderInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_LadderInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
