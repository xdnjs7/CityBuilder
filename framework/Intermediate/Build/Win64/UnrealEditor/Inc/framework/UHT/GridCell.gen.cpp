// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "framework/Public/GridCell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridCell() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FRAMEWORK_API UClass* Z_Construct_UClass_AGridCell();
	FRAMEWORK_API UClass* Z_Construct_UClass_AGridCell_NoRegister();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	void AGridCell::StaticRegisterNativesAGridCell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridCell);
	UClass* Z_Construct_UClass_AGridCell_NoRegister()
	{
		return AGridCell::StaticClass();
	}
	struct Z_Construct_UClass_AGridCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_green_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_green;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_red_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_red;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridCell.h" },
		{ "ModuleRelativePath", "Public/GridCell.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCell_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "GridCell" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridCell.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCell_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGridCell, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridCell_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridCell_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCell_Statics::NewProp_green_MetaData[] = {
		{ "Category", "GridCell" },
		{ "ModuleRelativePath", "Public/GridCell.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCell_Statics::NewProp_green = { "green", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGridCell, green), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridCell_Statics::NewProp_green_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridCell_Statics::NewProp_green_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCell_Statics::NewProp_red_MetaData[] = {
		{ "Category", "GridCell" },
		{ "ModuleRelativePath", "Public/GridCell.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCell_Statics::NewProp_red = { "red", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGridCell, red), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridCell_Statics::NewProp_red_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridCell_Statics::NewProp_red_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCell_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCell_Statics::NewProp_green,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCell_Statics::NewProp_red,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridCell_Statics::ClassParams = {
		&AGridCell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGridCell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridCell_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridCell()
	{
		if (!Z_Registration_Info_UClass_AGridCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridCell.OuterSingleton, Z_Construct_UClass_AGridCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridCell.OuterSingleton;
	}
	template<> FRAMEWORK_API UClass* StaticClass<AGridCell>()
	{
		return AGridCell::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridCell);
	AGridCell::~AGridCell() {}
	struct Z_CompiledInDeferFile_FID_framework_Source_framework_Public_GridCell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_Public_GridCell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridCell, AGridCell::StaticClass, TEXT("AGridCell"), &Z_Registration_Info_UClass_AGridCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridCell), 879689798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_Public_GridCell_h_1757428397(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_framework_Source_framework_Public_GridCell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_framework_Source_framework_Public_GridCell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
