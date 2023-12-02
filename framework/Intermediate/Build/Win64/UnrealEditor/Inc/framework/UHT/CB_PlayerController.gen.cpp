// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "framework/CB_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCB_PlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	FRAMEWORK_API UClass* Z_Construct_UClass_ACB_PlayerController();
	FRAMEWORK_API UClass* Z_Construct_UClass_ACB_PlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	void ACB_PlayerController::StaticRegisterNativesACB_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACB_PlayerController);
	UClass* Z_Construct_UClass_ACB_PlayerController_NoRegister()
	{
		return ACB_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACB_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACB_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CB_PlayerController.h" },
		{ "ModuleRelativePath", "CB_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACB_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACB_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACB_PlayerController_Statics::ClassParams = {
		&ACB_PlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACB_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACB_PlayerController()
	{
		if (!Z_Registration_Info_UClass_ACB_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACB_PlayerController.OuterSingleton, Z_Construct_UClass_ACB_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACB_PlayerController.OuterSingleton;
	}
	template<> FRAMEWORK_API UClass* StaticClass<ACB_PlayerController>()
	{
		return ACB_PlayerController::StaticClass();
	}
	ACB_PlayerController::ACB_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACB_PlayerController);
	ACB_PlayerController::~ACB_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACB_PlayerController, ACB_PlayerController::StaticClass, TEXT("ACB_PlayerController"), &Z_Registration_Info_UClass_ACB_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACB_PlayerController), 3596730558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerController_h_3707546010(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
