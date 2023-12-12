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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	FRAMEWORK_API UClass* Z_Construct_UClass_ABuildingActor_NoRegister();
	FRAMEWORK_API UClass* Z_Construct_UClass_ACB_PlayerControllerCD();
	FRAMEWORK_API UClass* Z_Construct_UClass_ACB_PlayerControllerCD_NoRegister();
	FRAMEWORK_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	DEFINE_FUNCTION(ACB_PlayerControllerCD::execOnLeftMouseClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeftMouseClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACB_PlayerControllerCD::execUpdateActorPositionToMousePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActorPositionToMousePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACB_PlayerControllerCD::execSetupInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACB_PlayerControllerCD::execSpawnActorAtMousePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActorAtMousePosition();
		P_NATIVE_END;
	}
	void ACB_PlayerControllerCD::StaticRegisterNativesACB_PlayerControllerCD()
	{
		UClass* Class = ACB_PlayerControllerCD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLeftMouseClick", &ACB_PlayerControllerCD::execOnLeftMouseClick },
			{ "SetupInputComponent", &ACB_PlayerControllerCD::execSetupInputComponent },
			{ "SpawnActorAtMousePosition", &ACB_PlayerControllerCD::execSpawnActorAtMousePosition },
			{ "UpdateActorPositionToMousePosition", &ACB_PlayerControllerCD::execUpdateActorPositionToMousePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACB_PlayerControllerCD_OnLeftMouseClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_PlayerControllerCD_OnLeftMouseClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CB_PlayerControllerCD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_PlayerControllerCD_OnLeftMouseClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_PlayerControllerCD, nullptr, "OnLeftMouseClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_PlayerControllerCD_OnLeftMouseClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_PlayerControllerCD_OnLeftMouseClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_PlayerControllerCD_OnLeftMouseClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_PlayerControllerCD_OnLeftMouseClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACB_PlayerControllerCD_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_PlayerControllerCD_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CB_PlayerControllerCD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_PlayerControllerCD_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_PlayerControllerCD, nullptr, "SetupInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_PlayerControllerCD_SetupInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_PlayerControllerCD_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_PlayerControllerCD_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_PlayerControllerCD_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACB_PlayerControllerCD_SpawnActorAtMousePosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_PlayerControllerCD_SpawnActorAtMousePosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*UFUNCTION(BlueprintCallable)\n\x09void InPlacementMode(bool isEnabled);\n\x09UFUNCTION(BlueprintCallable)\n\x09void UpdatePlacement();\n\x09UFUNCTION(BlueprintCallable)\n\x09void SpawnBuilding();*/" },
		{ "ModuleRelativePath", "CB_PlayerControllerCD.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\n       void InPlacementMode(bool isEnabled);\n       UFUNCTION(BlueprintCallable)\n       void UpdatePlacement();\n       UFUNCTION(BlueprintCallable)\n       void SpawnBuilding();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_PlayerControllerCD_SpawnActorAtMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_PlayerControllerCD, nullptr, "SpawnActorAtMousePosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_PlayerControllerCD_SpawnActorAtMousePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_PlayerControllerCD_SpawnActorAtMousePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_PlayerControllerCD_SpawnActorAtMousePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_PlayerControllerCD_SpawnActorAtMousePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACB_PlayerControllerCD_UpdateActorPositionToMousePosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_PlayerControllerCD_UpdateActorPositionToMousePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CB_PlayerControllerCD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_PlayerControllerCD_UpdateActorPositionToMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_PlayerControllerCD, nullptr, "UpdateActorPositionToMousePosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_PlayerControllerCD_UpdateActorPositionToMousePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_PlayerControllerCD_UpdateActorPositionToMousePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_PlayerControllerCD_UpdateActorPositionToMousePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_PlayerControllerCD_UpdateActorPositionToMousePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACB_PlayerControllerCD);
	UClass* Z_Construct_UClass_ACB_PlayerControllerCD_NoRegister()
	{
		return ACB_PlayerControllerCD::StaticClass();
	}
	struct Z_Construct_UClass_ACB_PlayerControllerCD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightButtonPressed_MetaData[];
#endif
		static void NewProp_RightButtonPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buildingType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_buildingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gridManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gridManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACB_PlayerControllerCD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACB_PlayerControllerCD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACB_PlayerControllerCD_OnLeftMouseClick, "OnLeftMouseClick" }, // 2047412369
		{ &Z_Construct_UFunction_ACB_PlayerControllerCD_SetupInputComponent, "SetupInputComponent" }, // 4189271154
		{ &Z_Construct_UFunction_ACB_PlayerControllerCD_SpawnActorAtMousePosition, "SpawnActorAtMousePosition" }, // 3002487969
		{ &Z_Construct_UFunction_ACB_PlayerControllerCD_UpdateActorPositionToMousePosition, "UpdateActorPositionToMousePosition" }, // 2355229832
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_buildingType_MetaData[] = {
		{ "Category", "CB_PlayerControllerCD" },
		{ "ModuleRelativePath", "CB_PlayerControllerCD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_buildingType = { "buildingType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACB_PlayerControllerCD, buildingType), Z_Construct_UClass_UClass, Z_Construct_UClass_ABuildingActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_buildingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_buildingType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_gridManager_MetaData[] = {
		{ "Category", "CB_PlayerControllerCD" },
		{ "ModuleRelativePath", "CB_PlayerControllerCD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_gridManager = { "gridManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACB_PlayerControllerCD, gridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_gridManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_gridManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACB_PlayerControllerCD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_RightButtonPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_buildingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_PlayerControllerCD_Statics::NewProp_gridManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACB_PlayerControllerCD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACB_PlayerControllerCD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACB_PlayerControllerCD_Statics::ClassParams = {
		&ACB_PlayerControllerCD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACB_PlayerControllerCD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	struct Z_CompiledInDeferFile_FID_framework_Source_framework_CB_PlayerControllerCD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_CB_PlayerControllerCD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACB_PlayerControllerCD, ACB_PlayerControllerCD::StaticClass, TEXT("ACB_PlayerControllerCD"), &Z_Registration_Info_UClass_ACB_PlayerControllerCD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACB_PlayerControllerCD), 2011772637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_CB_PlayerControllerCD_h_3849466563(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_framework_Source_framework_CB_PlayerControllerCD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_framework_Source_framework_CB_PlayerControllerCD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
