// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildingTypeEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRAMEWORK_BuildingTypeEnum_generated_h
#error "BuildingTypeEnum.generated.h already included, missing '#pragma once' in BuildingTypeEnum.h"
#endif
#define FRAMEWORK_BuildingTypeEnum_generated_h

#define FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_SPARSE_DATA
#define FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_RPC_WRAPPERS
#define FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_ACCESSORS
#define FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuildingTypeEnum(); \
	friend struct Z_Construct_UClass_UBuildingTypeEnum_Statics; \
public: \
	DECLARE_CLASS(UBuildingTypeEnum, UUserDefinedEnum, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/framework"), NO_API) \
	DECLARE_SERIALIZER(UBuildingTypeEnum)


#define FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBuildingTypeEnum(); \
	friend struct Z_Construct_UClass_UBuildingTypeEnum_Statics; \
public: \
	DECLARE_CLASS(UBuildingTypeEnum, UUserDefinedEnum, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/framework"), NO_API) \
	DECLARE_SERIALIZER(UBuildingTypeEnum)


#define FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildingTypeEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildingTypeEnum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildingTypeEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildingTypeEnum); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuildingTypeEnum(UBuildingTypeEnum&&); \
	NO_API UBuildingTypeEnum(const UBuildingTypeEnum&); \
public: \
	NO_API virtual ~UBuildingTypeEnum();


#define FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildingTypeEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuildingTypeEnum(UBuildingTypeEnum&&); \
	NO_API UBuildingTypeEnum(const UBuildingTypeEnum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildingTypeEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildingTypeEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildingTypeEnum) \
	NO_API virtual ~UBuildingTypeEnum();


#define FID_framework_Source_framework_Public_BuildingTypeEnum_h_12_PROLOG
#define FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_SPARSE_DATA \
	FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_RPC_WRAPPERS \
	FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_ACCESSORS \
	FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_INCLASS \
	FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_SPARSE_DATA \
	FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_ACCESSORS \
	FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_INCLASS_NO_PURE_DECLS \
	FID_framework_Source_framework_Public_BuildingTypeEnum_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRAMEWORK_API UClass* StaticClass<class UBuildingTypeEnum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_framework_Source_framework_Public_BuildingTypeEnum_h


#define FOREACH_ENUM_EBUILDINGTYPEENUM(op) \
	op(EBuildingTypeEnum::Zoned) \
	op(EBuildingTypeEnum::Placed) \
	op(EBuildingTypeEnum::Road) \
	op(EBuildingTypeEnum::None) 

enum class EBuildingTypeEnum : uint8;
template<> struct TIsUEnumClass<EBuildingTypeEnum> { enum { Value = true }; };
template<> FRAMEWORK_API UEnum* StaticEnum<EBuildingTypeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
