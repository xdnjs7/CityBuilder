// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "framework/Public/BuildingTypeEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingTypeEnum() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
	FRAMEWORK_API UClass* Z_Construct_UClass_UBuildingTypeEnum();
	FRAMEWORK_API UClass* Z_Construct_UClass_UBuildingTypeEnum_NoRegister();
	FRAMEWORK_API UEnum* Z_Construct_UEnum_framework_EBuildingTypeEnum();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	void UBuildingTypeEnum::StaticRegisterNativesUBuildingTypeEnum()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildingTypeEnum);
	UClass* Z_Construct_UClass_UBuildingTypeEnum_NoRegister()
	{
		return UBuildingTypeEnum::StaticClass();
	}
	struct Z_Construct_UClass_UBuildingTypeEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuildingTypeEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedEnum,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildingTypeEnum_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BuildingTypeEnum.h" },
		{ "ModuleRelativePath", "Public/BuildingTypeEnum.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuildingTypeEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingTypeEnum>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildingTypeEnum_Statics::ClassParams = {
		&UBuildingTypeEnum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBuildingTypeEnum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingTypeEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuildingTypeEnum()
	{
		if (!Z_Registration_Info_UClass_UBuildingTypeEnum.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingTypeEnum.OuterSingleton, Z_Construct_UClass_UBuildingTypeEnum_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuildingTypeEnum.OuterSingleton;
	}
	template<> FRAMEWORK_API UClass* StaticClass<UBuildingTypeEnum>()
	{
		return UBuildingTypeEnum::StaticClass();
	}
	UBuildingTypeEnum::UBuildingTypeEnum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildingTypeEnum);
	UBuildingTypeEnum::~UBuildingTypeEnum() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuildingTypeEnum;
	static UEnum* EBuildingTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBuildingTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBuildingTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_framework_EBuildingTypeEnum, (UObject*)Z_Construct_UPackage__Script_framework(), TEXT("EBuildingTypeEnum"));
		}
		return Z_Registration_Info_UEnum_EBuildingTypeEnum.OuterSingleton;
	}
	template<> FRAMEWORK_API UEnum* StaticEnum<EBuildingTypeEnum>()
	{
		return EBuildingTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_framework_EBuildingTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_framework_EBuildingTypeEnum_Statics::Enumerators[] = {
		{ "EBuildingTypeEnum::Zoned", (int64)EBuildingTypeEnum::Zoned },
		{ "EBuildingTypeEnum::Placed", (int64)EBuildingTypeEnum::Placed },
		{ "EBuildingTypeEnum::Road", (int64)EBuildingTypeEnum::Road },
		{ "EBuildingTypeEnum::None", (int64)EBuildingTypeEnum::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_framework_EBuildingTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BuildingTypeEnum.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EBuildingTypeEnum::None" },
		{ "Placed.DisplayName", "Placed" },
		{ "Placed.Name", "EBuildingTypeEnum::Placed" },
		{ "Road.DisplayName", "Road" },
		{ "Road.Name", "EBuildingTypeEnum::Road" },
		{ "Zoned.DisplayName", "Zoned" },
		{ "Zoned.Name", "EBuildingTypeEnum::Zoned" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_framework_EBuildingTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_framework,
		nullptr,
		"EBuildingTypeEnum",
		"EBuildingTypeEnum",
		Z_Construct_UEnum_framework_EBuildingTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_framework_EBuildingTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_framework_EBuildingTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_framework_EBuildingTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_framework_EBuildingTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_EBuildingTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuildingTypeEnum.InnerSingleton, Z_Construct_UEnum_framework_EBuildingTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBuildingTypeEnum.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_framework_Source_framework_Public_BuildingTypeEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_Public_BuildingTypeEnum_h_Statics::EnumInfo[] = {
		{ EBuildingTypeEnum_StaticEnum, TEXT("EBuildingTypeEnum"), &Z_Registration_Info_UEnum_EBuildingTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3460950520U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_Public_BuildingTypeEnum_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingTypeEnum, UBuildingTypeEnum::StaticClass, TEXT("UBuildingTypeEnum"), &Z_Registration_Info_UClass_UBuildingTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingTypeEnum), 1578737451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_Public_BuildingTypeEnum_h_1491605787(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_framework_Source_framework_Public_BuildingTypeEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_framework_Source_framework_Public_BuildingTypeEnum_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_framework_Source_framework_Public_BuildingTypeEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_framework_Source_framework_Public_BuildingTypeEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
