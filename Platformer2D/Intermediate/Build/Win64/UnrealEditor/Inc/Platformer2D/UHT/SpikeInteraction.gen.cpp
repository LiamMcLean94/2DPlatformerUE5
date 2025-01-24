// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Public/SpikeInteraction.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpikeInteraction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AParentActorInteraction();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ASpikeInteraction();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ASpikeInteraction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	DEFINE_FUNCTION(ASpikeInteraction::execBoxBeginOverlapped)
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
	DEFINE_FUNCTION(ASpikeInteraction::execBringSpikeDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BringSpikeDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpikeInteraction::execBringSpikeUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BringSpikeUp();
		P_NATIVE_END;
	}
	void ASpikeInteraction::StaticRegisterNativesASpikeInteraction()
	{
		UClass* Class = ASpikeInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoxBeginOverlapped", &ASpikeInteraction::execBoxBeginOverlapped },
			{ "BringSpikeDown", &ASpikeInteraction::execBringSpikeDown },
			{ "BringSpikeUp", &ASpikeInteraction::execBringSpikeUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics
	{
		struct SpikeInteraction_eventBoxBeginOverlapped_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpikeInteraction_eventBoxBeginOverlapped_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpikeInteraction_eventBoxBeginOverlapped_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpikeInteraction_eventBoxBeginOverlapped_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpikeInteraction_eventBoxBeginOverlapped_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SpikeInteraction_eventBoxBeginOverlapped_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpikeInteraction_eventBoxBeginOverlapped_Parms), &Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpikeInteraction_eventBoxBeginOverlapped_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "ModuleRelativePath", "Public/SpikeInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpikeInteraction, nullptr, "BoxBeginOverlapped", nullptr, nullptr, Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::SpikeInteraction_eventBoxBeginOverlapped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::SpikeInteraction_eventBoxBeginOverlapped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpikeInteraction_BringSpikeDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpikeInteraction_BringSpikeDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer2D" },
		{ "ModuleRelativePath", "Public/SpikeInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpikeInteraction_BringSpikeDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpikeInteraction, nullptr, "BringSpikeDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpikeInteraction_BringSpikeDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpikeInteraction_BringSpikeDown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASpikeInteraction_BringSpikeDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpikeInteraction_BringSpikeDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpikeInteraction_BringSpikeUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpikeInteraction_BringSpikeUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platformer2D" },
		{ "ModuleRelativePath", "Public/SpikeInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpikeInteraction_BringSpikeUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpikeInteraction, nullptr, "BringSpikeUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpikeInteraction_BringSpikeUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpikeInteraction_BringSpikeUp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASpikeInteraction_BringSpikeUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpikeInteraction_BringSpikeUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpikeInteraction);
	UClass* Z_Construct_UClass_ASpikeInteraction_NoRegister()
	{
		return ASpikeInteraction::StaticClass();
	}
	struct Z_Construct_UClass_ASpikeInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpikeUp_MetaData[];
#endif
		static void NewProp_bIsSpikeUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpikeUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BLooping_MetaData[];
#endif
		static void NewProp_BLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteSpikeUp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteSpikeUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteSpikeDown_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteSpikeDown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpikeInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AParentActorInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpikeInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpikeInteraction_BoxBeginOverlapped, "BoxBeginOverlapped" }, // 3665461783
		{ &Z_Construct_UFunction_ASpikeInteraction_BringSpikeDown, "BringSpikeDown" }, // 1674345641
		{ &Z_Construct_UFunction_ASpikeInteraction_BringSpikeUp, "BringSpikeUp" }, // 1416733896
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpikeInteraction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SpikeInteraction.h" },
		{ "ModuleRelativePath", "Public/SpikeInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_bIsSpikeUp_MetaData[] = {
		{ "Category", "Platformer2D|Interaction|Params" },
		{ "ModuleRelativePath", "Public/SpikeInteraction.h" },
	};
#endif
	void Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_bIsSpikeUp_SetBit(void* Obj)
	{
		((ASpikeInteraction*)Obj)->bIsSpikeUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_bIsSpikeUp = { "bIsSpikeUp", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpikeInteraction), &Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_bIsSpikeUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_bIsSpikeUp_MetaData), Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_bIsSpikeUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BLooping_MetaData[] = {
		{ "Category", "Platformer2D|Interaction|Params" },
		{ "ModuleRelativePath", "Public/SpikeInteraction.h" },
	};
#endif
	void Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BLooping_SetBit(void* Obj)
	{
		((ASpikeInteraction*)Obj)->BLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BLooping = { "BLooping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpikeInteraction), &Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BLooping_MetaData), Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BLooping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "Platformer2D|Interaction|Params" },
		{ "ModuleRelativePath", "Public/SpikeInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpikeInteraction, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_DamageAmount_MetaData), Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_DamageAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Platformer2D|Interaction|Params" },
		{ "ModuleRelativePath", "Public/SpikeInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpikeInteraction, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_Duration_MetaData), Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Platformer2D|Interaction|" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpikeInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpikeInteraction, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BoxComponent_MetaData), Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BoxComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_SpriteSpikeUp_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "ModuleRelativePath", "Public/SpikeInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_SpriteSpikeUp = { "SpriteSpikeUp", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpikeInteraction, SpriteSpikeUp), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_SpriteSpikeUp_MetaData), Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_SpriteSpikeUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_SpriteSpikeDown_MetaData[] = {
		{ "Category", "Platformer2D|Interaction" },
		{ "ModuleRelativePath", "Public/SpikeInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_SpriteSpikeDown = { "SpriteSpikeDown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpikeInteraction, SpriteSpikeDown), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_SpriteSpikeDown_MetaData), Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_SpriteSpikeDown_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpikeInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_bIsSpikeUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_SpriteSpikeUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpikeInteraction_Statics::NewProp_SpriteSpikeDown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpikeInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpikeInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpikeInteraction_Statics::ClassParams = {
		&ASpikeInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpikeInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpikeInteraction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeInteraction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpikeInteraction()
	{
		if (!Z_Registration_Info_UClass_ASpikeInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpikeInteraction.OuterSingleton, Z_Construct_UClass_ASpikeInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpikeInteraction.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ASpikeInteraction>()
	{
		return ASpikeInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpikeInteraction);
	ASpikeInteraction::~ASpikeInteraction() {}
	struct Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_SpikeInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_SpikeInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpikeInteraction, ASpikeInteraction::StaticClass, TEXT("ASpikeInteraction"), &Z_Registration_Info_UClass_ASpikeInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpikeInteraction), 2780227145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_SpikeInteraction_h_1954156143(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_SpikeInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_SpikeInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
