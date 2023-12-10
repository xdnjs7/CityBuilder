// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CB_PlayerControllerCD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRAMEWORK_CB_PlayerControllerCD_generated_h
#error "CB_PlayerControllerCD.generated.h already included, missing '#pragma once' in CB_PlayerControllerCD.h"
#endif
#define FRAMEWORK_CB_PlayerControllerCD_generated_h

#define FID_framework_Source_framework_CB_PlayerControllerCD_h_16_SPARSE_DATA
#define FID_framework_Source_framework_CB_PlayerControllerCD_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLeftMouseClick); \
	DECLARE_FUNCTION(execUpdateActorPositionToMousePosition); \
	DECLARE_FUNCTION(execSetupInputComponent); \
	DECLARE_FUNCTION(execSpawnActorAtMousePosition);


#define FID_framework_Source_framework_CB_PlayerControllerCD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLeftMouseClick); \
	DECLARE_FUNCTION(execUpdateActorPositionToMousePosition); \
	DECLARE_FUNCTION(execSetupInputComponent); \
	DECLARE_FUNCTION(execSpawnActorAtMousePosition);


#define FID_framework_Source_framework_CB_PlayerControllerCD_h_16_ACCESSORS
#define FID_framework_Source_framework_CB_PlayerControllerCD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACB_PlayerControllerCD(); \
	friend struct Z_Construct_UClass_ACB_PlayerControllerCD_Statics; \
public: \
	DECLARE_CLASS(ACB_PlayerControllerCD, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/framework"), NO_API) \
	DECLARE_SERIALIZER(ACB_PlayerControllerCD)


#define FID_framework_Source_framework_CB_PlayerControllerCD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACB_PlayerControllerCD(); \
	friend struct Z_Construct_UClass_ACB_PlayerControllerCD_Statics; \
public: \
	DECLARE_CLASS(ACB_PlayerControllerCD, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/framework"), NO_API) \
	DECLARE_SERIALIZER(ACB_PlayerControllerCD)


#define FID_framework_Source_framework_CB_PlayerControllerCD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACB_PlayerControllerCD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACB_PlayerControllerCD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACB_PlayerControllerCD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACB_PlayerControllerCD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACB_PlayerControllerCD(ACB_PlayerControllerCD&&); \
	NO_API ACB_PlayerControllerCD(const ACB_PlayerControllerCD&); \
public: \
	NO_API virtual ~ACB_PlayerControllerCD();


#define FID_framework_Source_framework_CB_PlayerControllerCD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACB_PlayerControllerCD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACB_PlayerControllerCD(ACB_PlayerControllerCD&&); \
	NO_API ACB_PlayerControllerCD(const ACB_PlayerControllerCD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACB_PlayerControllerCD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACB_PlayerControllerCD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACB_PlayerControllerCD) \
	NO_API virtual ~ACB_PlayerControllerCD();


#define FID_framework_Source_framework_CB_PlayerControllerCD_h_13_PROLOG
#define FID_framework_Source_framework_CB_PlayerControllerCD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_framework_Source_framework_CB_PlayerControllerCD_h_16_SPARSE_DATA \
	FID_framework_Source_framework_CB_PlayerControllerCD_h_16_RPC_WRAPPERS \
	FID_framework_Source_framework_CB_PlayerControllerCD_h_16_ACCESSORS \
	FID_framework_Source_framework_CB_PlayerControllerCD_h_16_INCLASS \
	FID_framework_Source_framework_CB_PlayerControllerCD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_framework_Source_framework_CB_PlayerControllerCD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_framework_Source_framework_CB_PlayerControllerCD_h_16_SPARSE_DATA \
	FID_framework_Source_framework_CB_PlayerControllerCD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_framework_Source_framework_CB_PlayerControllerCD_h_16_ACCESSORS \
	FID_framework_Source_framework_CB_PlayerControllerCD_h_16_INCLASS_NO_PURE_DECLS \
	FID_framework_Source_framework_CB_PlayerControllerCD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRAMEWORK_API UClass* StaticClass<class ACB_PlayerControllerCD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_framework_Source_framework_CB_PlayerControllerCD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
