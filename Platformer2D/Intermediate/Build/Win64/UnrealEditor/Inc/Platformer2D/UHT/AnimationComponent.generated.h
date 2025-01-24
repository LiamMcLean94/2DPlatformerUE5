// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_AnimationComponent_generated_h
#error "AnimationComponent.generated.h already included, missing '#pragma once' in AnimationComponent.h"
#endif
#define PLATFORMER2D_AnimationComponent_generated_h

#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationStruct_Statics; \
	PLATFORMER2D_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> PLATFORMER2D_API UScriptStruct* StaticStruct<struct FAnimationStruct>();

#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_SPARSE_DATA
#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_ACCESSORS
#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationComponent(); \
	friend struct Z_Construct_UClass_UAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(UAnimationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(UAnimationComponent)


#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationComponent(UAnimationComponent&&); \
	NO_API UAnimationComponent(const UAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimationComponent) \
	NO_API virtual ~UAnimationComponent();


#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_36_PROLOG
#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_SPARSE_DATA \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_ACCESSORS \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_INCLASS_NO_PURE_DECLS \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class UAnimationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_AnimationComponent_h


#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(Idle) \
	op(Run) \
	op(Jump) \
	op(Attack) \
	op(Fall) \
	op(Climb) \
	op(IdleClimb) \
	op(Dead) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
