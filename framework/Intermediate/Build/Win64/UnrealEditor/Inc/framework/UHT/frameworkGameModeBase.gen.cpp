// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "framework/frameworkGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeframeworkGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FRAMEWORK_API UClass* Z_Construct_UClass_AframeworkGameModeBase();
	FRAMEWORK_API UClass* Z_Construct_UClass_AframeworkGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	void AframeworkGameModeBase::StaticRegisterNativesAframeworkGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AframeworkGameModeBase);
	UClass* Z_Construct_UClass_AframeworkGameModeBase_NoRegister()
	{
		return AframeworkGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AframeworkGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AframeworkGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AframeworkGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "frameworkGameModeBase.h" },
		{ "ModuleRelativePath", "frameworkGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AframeworkGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AframeworkGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AframeworkGameModeBase_Statics::ClassParams = {
		&AframeworkGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AframeworkGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AframeworkGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AframeworkGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AframeworkGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AframeworkGameModeBase.OuterSingleton, Z_Construct_UClass_AframeworkGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AframeworkGameModeBase.OuterSingleton;
	}
	template<> FRAMEWORK_API UClass* StaticClass<AframeworkGameModeBase>()
	{
		return AframeworkGameModeBase::StaticClass();
	}
	AframeworkGameModeBase::AframeworkGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AframeworkGameModeBase);
	AframeworkGameModeBase::~AframeworkGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_framework_Source_framework_frameworkGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_frameworkGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AframeworkGameModeBase, AframeworkGameModeBase::StaticClass, TEXT("AframeworkGameModeBase"), &Z_Registration_Info_UClass_AframeworkGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AframeworkGameModeBase), 3934340155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_frameworkGameModeBase_h_3434266847(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_framework_Source_framework_frameworkGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_framework_Source_framework_frameworkGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
