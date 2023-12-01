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
	DEFINE_FUNCTION(ACB_PlayerController::execCameraOrbit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CameraOrbit_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACB_PlayerController_CameraOrbit = FName(TEXT("CameraOrbit"));
	void ACB_PlayerController::CameraOrbit()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACB_PlayerController_CameraOrbit),NULL);
	}
	void ACB_PlayerController::StaticRegisterNativesACB_PlayerController()
	{
		UClass* Class = ACB_PlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CameraOrbit", &ACB_PlayerController::execCameraOrbit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACB_PlayerController_CameraOrbit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_PlayerController_CameraOrbit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CB_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_PlayerController_CameraOrbit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_PlayerController, nullptr, "CameraOrbit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_PlayerController_CameraOrbit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_PlayerController_CameraOrbit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_PlayerController_CameraOrbit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_PlayerController_CameraOrbit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACB_PlayerController);
	UClass* Z_Construct_UClass_ACB_PlayerController_NoRegister()
	{
		return ACB_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACB_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACB_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACB_PlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACB_PlayerController_CameraOrbit, "CameraOrbit" }, // 1696449509
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CB_PlayerController.h" },
		{ "ModuleRelativePath", "CB_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_PlayerController_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CB_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACB_PlayerController_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACB_PlayerController, Magnitude), METADATA_PARAMS(Z_Construct_UClass_ACB_PlayerController_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerController_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACB_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_PlayerController_Statics::NewProp_Magnitude,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACB_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACB_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACB_PlayerController_Statics::ClassParams = {
		&ACB_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACB_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerController_Statics::PropPointers),
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
		{ Z_Construct_UClass_ACB_PlayerController, ACB_PlayerController::StaticClass, TEXT("ACB_PlayerController"), &Z_Registration_Info_UClass_ACB_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACB_PlayerController), 2989184218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerController_h_1175472478(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
