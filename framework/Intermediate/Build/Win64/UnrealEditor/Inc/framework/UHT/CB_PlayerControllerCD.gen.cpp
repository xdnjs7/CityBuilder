// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "framework/CB_PlayerControllerCD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCB_PlayerControllerCD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	FRAMEWORK_API UClass* Z_Construct_UClass_ACB_PlayerControllerCD();
	FRAMEWORK_API UClass* Z_Construct_UClass_ACB_PlayerControllerCD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	void ACB_PlayerControllerCD::StaticRegisterNativesACB_PlayerControllerCD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACB_PlayerControllerCD);
	UClass* Z_Construct_UClass_ACB_PlayerControllerCD_NoRegister()
	{
		return ACB_PlayerControllerCD::StaticClass();
	}
	struct Z_Construct_UClass_ACB_PlayerControllerCD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightButtonPressed_MetaData[];
#endif
		static void NewProp_RightButtonPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightButtonPressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACB_PlayerControllerCD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_PlayerControllerCD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CB_PlayerControllerCD.h" },
		{ "ModuleRelativePath", "CB_PlayerControllerCD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_RightButtonPressed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CB_PlayerControllerCD.h" },
	};
#endif
	void Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_RightButtonPressed_SetBit(void* Obj)
	{
		((ACB_PlayerControllerCD*)Obj)->RightButtonPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_RightButtonPressed = { "RightButtonPressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACB_PlayerControllerCD), &Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_RightButtonPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_RightButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_RightButtonPressed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACB_PlayerControllerCD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_RightButtonPressed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACB_PlayerControllerCD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACB_PlayerControllerCD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACB_PlayerControllerCD_Statics::ClassParams = {
		&ACB_PlayerControllerCD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACB_PlayerControllerCD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerControllerCD_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACB_PlayerControllerCD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerControllerCD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACB_PlayerControllerCD()
	{
		if (!Z_Registration_Info_UClass_ACB_PlayerControllerCD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACB_PlayerControllerCD.OuterSingleton, Z_Construct_UClass_ACB_PlayerControllerCD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACB_PlayerControllerCD.OuterSingleton;
	}
	template<> FRAMEWORK_API UClass* StaticClass<ACB_PlayerControllerCD>()
	{
		return ACB_PlayerControllerCD::StaticClass();
	}
	ACB_PlayerControllerCD::ACB_PlayerControllerCD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACB_PlayerControllerCD);
	ACB_PlayerControllerCD::~ACB_PlayerControllerCD() {}
	struct Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerControllerCD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerControllerCD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACB_PlayerControllerCD, ACB_PlayerControllerCD::StaticClass, TEXT("ACB_PlayerControllerCD"), &Z_Registration_Info_UClass_ACB_PlayerControllerCD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACB_PlayerControllerCD), 1814065633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerControllerCD_h_2119036292(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerControllerCD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerControllerCD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
