// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FallingInteraction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_FallingInteraction_generated_h
#error "FallingInteraction.generated.h already included, missing '#pragma once' in FallingInteraction.h"
#endif
#define PLATFORMER2D_FallingInteraction_generated_h

#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_SPARSE_DATA
#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnReset); \
	DECLARE_FUNCTION(execOnFall); \
	DECLARE_FUNCTION(execBoxBeginOverlapped);


#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_ACCESSORS
#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFallingInteraction(); \
	friend struct Z_Construct_UClass_AFallingInteraction_Statics; \
public: \
	DECLARE_CLASS(AFallingInteraction, AParentActorInteraction, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AFallingInteraction)


#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFallingInteraction(AFallingInteraction&&); \
	NO_API AFallingInteraction(const AFallingInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFallingInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFallingInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFallingInteraction) \
	NO_API virtual ~AFallingInteraction();


#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_12_PROLOG
#define FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_SPARSE_DATA \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_ACCESSORS \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AFallingInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_liam__OneDrive_Desktop_Unreal_Projects_2DPlatformerUE5_Platformer2D_Source_Platformer2D_Public_FallingInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
