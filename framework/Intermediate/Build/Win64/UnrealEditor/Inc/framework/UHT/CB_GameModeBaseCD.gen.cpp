// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "framework/CB_GameModeBaseCD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCB_GameModeBaseCD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FRAMEWORK_API UClass* Z_Construct_UClass_ACB_GameModeBaseCD();
	FRAMEWORK_API UClass* Z_Construct_UClass_ACB_GameModeBaseCD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	void ACB_GameModeBaseCD::StaticRegisterNativesACB_GameModeBaseCD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACB_GameModeBaseCD);
	UClass* Z_Construct_UClass_ACB_GameModeBaseCD_NoRegister()
	{
		return ACB_GameModeBaseCD::StaticClass();
	}
	struct Z_Construct_UClass_ACB_GameModeBaseCD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACB_GameModeBaseCD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_GameModeBaseCD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CB_GameModeBaseCD.h" },
		{ "ModuleRelativePath", "CB_GameModeBaseCD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACB_GameModeBaseCD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACB_GameModeBaseCD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACB_GameModeBaseCD_Statics::ClassParams = {
		&ACB_GameModeBaseCD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACB_GameModeBaseCD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_GameModeBaseCD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACB_GameModeBaseCD()
	{
		if (!Z_Registration_Info_UClass_ACB_GameModeBaseCD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACB_GameModeBaseCD.OuterSingleton, Z_Construct_UClass_ACB_GameModeBaseCD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACB_GameModeBaseCD.OuterSingleton;
	}
	template<> FRAMEWORK_API UClass* StaticClass<ACB_GameModeBaseCD>()
	{
		return ACB_GameModeBaseCD::StaticClass();
	}
	ACB_GameModeBaseCD::ACB_GameModeBaseCD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACB_GameModeBaseCD);
	ACB_GameModeBaseCD::~ACB_GameModeBaseCD() {}
	struct Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_GameModeBaseCD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_GameModeBaseCD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACB_GameModeBaseCD, ACB_GameModeBaseCD::StaticClass, TEXT("ACB_GameModeBaseCD"), &Z_Registration_Info_UClass_ACB_GameModeBaseCD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACB_GameModeBaseCD), 405897719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_GameModeBaseCD_h_3422426109(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_GameModeBaseCD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_GameModeBaseCD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
