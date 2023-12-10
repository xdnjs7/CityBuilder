// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildingActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRAMEWORK_BuildingActor_generated_h
#error "BuildingActor.generated.h already included, missing '#pragma once' in BuildingActor.h"
#endif
#define FRAMEWORK_BuildingActor_generated_h

#define FID_framework_Source_framework_Public_BuildingActor_h_13_SPARSE_DATA
#define FID_framework_Source_framework_Public_BuildingActor_h_13_RPC_WRAPPERS
#define FID_framework_Source_framework_Public_BuildingActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_framework_Source_framework_Public_BuildingActor_h_13_ACCESSORS
#define FID_framework_Source_framework_Public_BuildingActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildingActor(); \
	friend struct Z_Construct_UClass_ABuildingActor_Statics; \
public: \
	DECLARE_CLASS(ABuildingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/framework"), NO_API) \
	DECLARE_SERIALIZER(ABuildingActor)


#define FID_framework_Source_framework_Public_BuildingActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABuildingActor(); \
	friend struct Z_Construct_UClass_ABuildingActor_Statics; \
public: \
	DECLARE_CLASS(ABuildingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/framework"), NO_API) \
	DECLARE_SERIALIZER(ABuildingActor)


#define FID_framework_Source_framework_Public_BuildingActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildingActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingActor(ABuildingActor&&); \
	NO_API ABuildingActor(const ABuildingActor&); \
public: \
	NO_API virtual ~ABuildingActor();


#define FID_framework_Source_framework_Public_BuildingActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingActor(ABuildingActor&&); \
	NO_API ABuildingActor(const ABuildingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuildingActor) \
	NO_API virtual ~ABuildingActor();


#define FID_framework_Source_framework_Public_BuildingActor_h_10_PROLOG
#define FID_framework_Source_framework_Public_BuildingActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_framework_Source_framework_Public_BuildingActor_h_13_SPARSE_DATA \
	FID_framework_Source_framework_Public_BuildingActor_h_13_RPC_WRAPPERS \
	FID_framework_Source_framework_Public_BuildingActor_h_13_ACCESSORS \
	FID_framework_Source_framework_Public_BuildingActor_h_13_INCLASS \
	FID_framework_Source_framework_Public_BuildingActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_framework_Source_framework_Public_BuildingActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_framework_Source_framework_Public_BuildingActor_h_13_SPARSE_DATA \
	FID_framework_Source_framework_Public_BuildingActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_framework_Source_framework_Public_BuildingActor_h_13_ACCESSORS \
	FID_framework_Source_framework_Public_BuildingActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_framework_Source_framework_Public_BuildingActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRAMEWORK_API UClass* StaticClass<class ABuildingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_framework_Source_framework_Public_BuildingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
