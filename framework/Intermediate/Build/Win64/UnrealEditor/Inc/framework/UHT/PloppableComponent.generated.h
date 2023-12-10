// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PloppableComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRAMEWORK_PloppableComponent_generated_h
#error "PloppableComponent.generated.h already included, missing '#pragma once' in PloppableComponent.h"
#endif
#define FRAMEWORK_PloppableComponent_generated_h

#define FID_framework_Source_framework_Public_PloppableComponent_h_13_SPARSE_DATA
#define FID_framework_Source_framework_Public_PloppableComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPlacement); \
	DECLARE_FUNCTION(execUpdateState);


#define FID_framework_Source_framework_Public_PloppableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPlacement); \
	DECLARE_FUNCTION(execUpdateState);


#define FID_framework_Source_framework_Public_PloppableComponent_h_13_ACCESSORS
#define FID_framework_Source_framework_Public_PloppableComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPloppableComponent(); \
	friend struct Z_Construct_UClass_UPloppableComponent_Statics; \
public: \
	DECLARE_CLASS(UPloppableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/framework"), NO_API) \
	DECLARE_SERIALIZER(UPloppableComponent)


#define FID_framework_Source_framework_Public_PloppableComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPloppableComponent(); \
	friend struct Z_Construct_UClass_UPloppableComponent_Statics; \
public: \
	DECLARE_CLASS(UPloppableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/framework"), NO_API) \
	DECLARE_SERIALIZER(UPloppableComponent)


#define FID_framework_Source_framework_Public_PloppableComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPloppableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPloppableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPloppableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPloppableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPloppableComponent(UPloppableComponent&&); \
	NO_API UPloppableComponent(const UPloppableComponent&); \
public: \
	NO_API virtual ~UPloppableComponent();


#define FID_framework_Source_framework_Public_PloppableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPloppableComponent(UPloppableComponent&&); \
	NO_API UPloppableComponent(const UPloppableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPloppableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPloppableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPloppableComponent) \
	NO_API virtual ~UPloppableComponent();


#define FID_framework_Source_framework_Public_PloppableComponent_h_10_PROLOG
#define FID_framework_Source_framework_Public_PloppableComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_framework_Source_framework_Public_PloppableComponent_h_13_SPARSE_DATA \
	FID_framework_Source_framework_Public_PloppableComponent_h_13_RPC_WRAPPERS \
	FID_framework_Source_framework_Public_PloppableComponent_h_13_ACCESSORS \
	FID_framework_Source_framework_Public_PloppableComponent_h_13_INCLASS \
	FID_framework_Source_framework_Public_PloppableComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_framework_Source_framework_Public_PloppableComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_framework_Source_framework_Public_PloppableComponent_h_13_SPARSE_DATA \
	FID_framework_Source_framework_Public_PloppableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_framework_Source_framework_Public_PloppableComponent_h_13_ACCESSORS \
	FID_framework_Source_framework_Public_PloppableComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_framework_Source_framework_Public_PloppableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRAMEWORK_API UClass* StaticClass<class UPloppableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_framework_Source_framework_Public_PloppableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
