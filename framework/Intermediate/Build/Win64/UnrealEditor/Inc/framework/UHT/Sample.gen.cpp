// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "framework/Public/Sample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSample() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	FRAMEWORK_API UClass* Z_Construct_UClass_ASample();
	FRAMEWORK_API UClass* Z_Construct_UClass_ASample_NoRegister();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	void ASample::StaticRegisterNativesASample()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASample);
	UClass* Z_Construct_UClass_ASample_NoRegister()
	{
		return ASample::StaticClass();
	}
	struct Z_Construct_UClass_ASample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASample_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Sample.h" },
		{ "ModuleRelativePath", "Public/Sample.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASample_Statics::ClassParams = {
		&ASample::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASample()
	{
		if (!Z_Registration_Info_UClass_ASample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASample.OuterSingleton, Z_Construct_UClass_ASample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASample.OuterSingleton;
	}
	template<> FRAMEWORK_API UClass* StaticClass<ASample>()
	{
		return ASample::StaticClass();
	}
	ASample::ASample(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASample);
	ASample::~ASample() {}
	struct Z_CompiledInDeferFile_FID_framework_Source_framework_Public_Sample_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_Public_Sample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASample, ASample::StaticClass, TEXT("ASample"), &Z_Registration_Info_UClass_ASample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASample), 3610832157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_Public_Sample_h_11910658(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_framework_Source_framework_Public_Sample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_framework_Source_framework_Public_Sample_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
