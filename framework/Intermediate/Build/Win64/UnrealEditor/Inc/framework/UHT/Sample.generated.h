// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sample.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRAMEWORK_Sample_generated_h
#error "Sample.generated.h already included, missing '#pragma once' in Sample.h"
#endif
#define FRAMEWORK_Sample_generated_h

#define FID_framework_Source_framework_Public_Sample_h_15_SPARSE_DATA
#define FID_framework_Source_framework_Public_Sample_h_15_RPC_WRAPPERS
#define FID_framework_Source_framework_Public_Sample_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_framework_Source_framework_Public_Sample_h_15_ACCESSORS
#define FID_framework_Source_framework_Public_Sample_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASample(); \
	friend struct Z_Construct_UClass_ASample_Statics; \
public: \
	DECLARE_CLASS(ASample, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/framework"), NO_API) \
	DECLARE_SERIALIZER(ASample)


#define FID_framework_Source_framework_Public_Sample_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASample(); \
	friend struct Z_Construct_UClass_ASample_Statics; \
public: \
	DECLARE_CLASS(ASample, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/framework"), NO_API) \
	DECLARE_SERIALIZER(ASample)


#define FID_framework_Source_framework_Public_Sample_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASample); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASample(ASample&&); \
	NO_API ASample(const ASample&); \
public: \
	NO_API virtual ~ASample();


#define FID_framework_Source_framework_Public_Sample_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASample(ASample&&); \
	NO_API ASample(const ASample&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASample); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASample) \
	NO_API virtual ~ASample();


#define FID_framework_Source_framework_Public_Sample_h_12_PROLOG
#define FID_framework_Source_framework_Public_Sample_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_framework_Source_framework_Public_Sample_h_15_SPARSE_DATA \
	FID_framework_Source_framework_Public_Sample_h_15_RPC_WRAPPERS \
	FID_framework_Source_framework_Public_Sample_h_15_ACCESSORS \
	FID_framework_Source_framework_Public_Sample_h_15_INCLASS \
	FID_framework_Source_framework_Public_Sample_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_framework_Source_framework_Public_Sample_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_framework_Source_framework_Public_Sample_h_15_SPARSE_DATA \
	FID_framework_Source_framework_Public_Sample_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_framework_Source_framework_Public_Sample_h_15_ACCESSORS \
	FID_framework_Source_framework_Public_Sample_h_15_INCLASS_NO_PURE_DECLS \
	FID_framework_Source_framework_Public_Sample_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRAMEWORK_API UClass* StaticClass<class ASample>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_framework_Source_framework_Public_Sample_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
