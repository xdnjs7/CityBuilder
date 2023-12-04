// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "framework/CB_MovingCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCB_MovingCamera() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	FRAMEWORK_API UClass* Z_Construct_UClass_ACB_MovingCamera();
	FRAMEWORK_API UClass* Z_Construct_UClass_ACB_MovingCamera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	struct CB_MovingCamera_eventCameraOrbit_Parms
	{
		float Value;
	};
	struct CB_MovingCamera_eventCameraPitch_Parms
	{
		float Value;
	};
	struct CB_MovingCamera_eventCameraZoom_Parms
	{
		float Value;
	};
	struct CB_MovingCamera_eventMouseX_Parms
	{
		float Value;
	};
	struct CB_MovingCamera_eventMouseY_Parms
	{
		float Value;
	};
	struct CB_MovingCamera_eventMoveForward_Parms
	{
		float Value;
	};
	struct CB_MovingCamera_eventMoveRight_Parms
	{
		float Value;
	};
	static FName NAME_ACB_MovingCamera_CameraOrbit = FName(TEXT("CameraOrbit"));
	void ACB_MovingCamera::CameraOrbit(float Value)
	{
		CB_MovingCamera_eventCameraOrbit_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_ACB_MovingCamera_CameraOrbit),&Parms);
	}
	static FName NAME_ACB_MovingCamera_CameraPitch = FName(TEXT("CameraPitch"));
	void ACB_MovingCamera::CameraPitch(float Value)
	{
		CB_MovingCamera_eventCameraPitch_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_ACB_MovingCamera_CameraPitch),&Parms);
	}
	static FName NAME_ACB_MovingCamera_CameraZoom = FName(TEXT("CameraZoom"));
	void ACB_MovingCamera::CameraZoom(float Value)
	{
		CB_MovingCamera_eventCameraZoom_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_ACB_MovingCamera_CameraZoom),&Parms);
	}
	static FName NAME_ACB_MovingCamera_MouseX = FName(TEXT("MouseX"));
	void ACB_MovingCamera::MouseX(float Value)
	{
		CB_MovingCamera_eventMouseX_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_ACB_MovingCamera_MouseX),&Parms);
	}
	static FName NAME_ACB_MovingCamera_MouseY = FName(TEXT("MouseY"));
	void ACB_MovingCamera::MouseY(float Value)
	{
		CB_MovingCamera_eventMouseY_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_ACB_MovingCamera_MouseY),&Parms);
	}
	static FName NAME_ACB_MovingCamera_MoveForward = FName(TEXT("MoveForward"));
	void ACB_MovingCamera::MoveForward(float Value)
	{
		CB_MovingCamera_eventMoveForward_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_ACB_MovingCamera_MoveForward),&Parms);
	}
	static FName NAME_ACB_MovingCamera_MoveRight = FName(TEXT("MoveRight"));
	void ACB_MovingCamera::MoveRight(float Value)
	{
		CB_MovingCamera_eventMoveRight_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_ACB_MovingCamera_MoveRight),&Parms);
	}
	void ACB_MovingCamera::StaticRegisterNativesACB_MovingCamera()
	{
	}
	struct Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CB_MovingCamera_eventCameraOrbit_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd(A, D)\n" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd(A, D)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_MovingCamera, nullptr, "CameraOrbit", nullptr, nullptr, sizeof(CB_MovingCamera_eventCameraOrbit_Parms), Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACB_MovingCamera_CameraPitch_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACB_MovingCamera_CameraPitch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CB_MovingCamera_eventCameraPitch_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACB_MovingCamera_CameraPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACB_MovingCamera_CameraPitch_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_MovingCamera_CameraPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd(Q, E)\n" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd(Q, E)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_MovingCamera_CameraPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_MovingCamera, nullptr, "CameraPitch", nullptr, nullptr, sizeof(CB_MovingCamera_eventCameraPitch_Parms), Z_Construct_UFunction_ACB_MovingCamera_CameraPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_CameraPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_MovingCamera_CameraPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_CameraPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_MovingCamera_CameraPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_MovingCamera_CameraPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACB_MovingCamera_CameraZoom_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACB_MovingCamera_CameraZoom_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CB_MovingCamera_eventCameraZoom_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACB_MovingCamera_CameraZoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACB_MovingCamera_CameraZoom_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_MovingCamera_CameraZoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd(R, F)\n" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd(R, F)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_MovingCamera_CameraZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_MovingCamera, nullptr, "CameraZoom", nullptr, nullptr, sizeof(CB_MovingCamera_eventCameraZoom_Parms), Z_Construct_UFunction_ACB_MovingCamera_CameraZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_CameraZoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_MovingCamera_CameraZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_CameraZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_MovingCamera_CameraZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_MovingCamera_CameraZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACB_MovingCamera_MouseX_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACB_MovingCamera_MouseX_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CB_MovingCamera_eventMouseX_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACB_MovingCamera_MouseX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACB_MovingCamera_MouseX_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_MovingCamera_MouseX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xdc\xbe\xc6\xbf\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xdc\xbe\xc6\xbf\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_MovingCamera_MouseX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_MovingCamera, nullptr, "MouseX", nullptr, nullptr, sizeof(CB_MovingCamera_eventMouseX_Parms), Z_Construct_UFunction_ACB_MovingCamera_MouseX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_MouseX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_MovingCamera_MouseX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_MouseX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_MovingCamera_MouseX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_MovingCamera_MouseX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACB_MovingCamera_MouseY_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACB_MovingCamera_MouseY_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CB_MovingCamera_eventMouseY_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACB_MovingCamera_MouseY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACB_MovingCamera_MouseY_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_MovingCamera_MouseY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba X\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba X\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_MovingCamera_MouseY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_MovingCamera, nullptr, "MouseY", nullptr, nullptr, sizeof(CB_MovingCamera_eventMouseY_Parms), Z_Construct_UFunction_ACB_MovingCamera_MouseY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_MouseY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_MovingCamera_MouseY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_MouseY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_MovingCamera_MouseY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_MovingCamera_MouseY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACB_MovingCamera_MoveForward_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACB_MovingCamera_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CB_MovingCamera_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACB_MovingCamera_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACB_MovingCamera_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_MovingCamera_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_MovingCamera_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_MovingCamera, nullptr, "MoveForward", nullptr, nullptr, sizeof(CB_MovingCamera_eventMoveForward_Parms), Z_Construct_UFunction_ACB_MovingCamera_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_MovingCamera_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_MovingCamera_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_MovingCamera_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACB_MovingCamera_MoveRight_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACB_MovingCamera_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CB_MovingCamera_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACB_MovingCamera_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACB_MovingCamera_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACB_MovingCamera_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd(W, S)\n" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd(W, S)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_MovingCamera_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_MovingCamera, nullptr, "MoveRight", nullptr, nullptr, sizeof(CB_MovingCamera_eventMoveRight_Parms), Z_Construct_UFunction_ACB_MovingCamera_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACB_MovingCamera_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_MovingCamera_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACB_MovingCamera_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_MovingCamera_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACB_MovingCamera);
	UClass* Z_Construct_UClass_ACB_MovingCamera_NoRegister()
	{
		return ACB_MovingCamera::StaticClass();
	}
	struct Z_Construct_UClass_ACB_MovingCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrbitSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMinClamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraMinClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMaxClamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraMaxClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CBSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CBSpringArm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACB_MovingCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACB_MovingCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACB_MovingCamera_CameraOrbit, "CameraOrbit" }, // 260384454
		{ &Z_Construct_UFunction_ACB_MovingCamera_CameraPitch, "CameraPitch" }, // 3948491749
		{ &Z_Construct_UFunction_ACB_MovingCamera_CameraZoom, "CameraZoom" }, // 3552296879
		{ &Z_Construct_UFunction_ACB_MovingCamera_MouseX, "MouseX" }, // 2715359236
		{ &Z_Construct_UFunction_ACB_MovingCamera_MouseY, "MouseY" }, // 1391144870
		{ &Z_Construct_UFunction_ACB_MovingCamera_MoveForward, "MoveForward" }, // 2055172228
		{ &Z_Construct_UFunction_ACB_MovingCamera_MoveRight, "MoveRight" }, // 3686196745
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_MovingCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CB_MovingCamera.h" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_OrbitSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_OrbitSpeed = { "OrbitSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACB_MovingCamera, OrbitSpeed), METADATA_PARAMS(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_OrbitSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_OrbitSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACB_MovingCamera, ZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomMin_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomMin = { "ZoomMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACB_MovingCamera, ZoomMin), METADATA_PARAMS(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomMax_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomMax = { "ZoomMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACB_MovingCamera, ZoomMax), METADATA_PARAMS(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_InitialMovementSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_InitialMovementSpeed = { "InitialMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACB_MovingCamera, InitialMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_InitialMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_InitialMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CameraMinClamp_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CameraMinClamp = { "CameraMinClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACB_MovingCamera, CameraMinClamp), METADATA_PARAMS(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CameraMinClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CameraMinClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CameraMaxClamp_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CameraMaxClamp = { "CameraMaxClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACB_MovingCamera, CameraMaxClamp), METADATA_PARAMS(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CameraMaxClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CameraMaxClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CBSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CB_MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CBSpringArm = { "CBSpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACB_MovingCamera, CBSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CBSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CBSpringArm_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACB_MovingCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_OrbitSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_ZoomMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_InitialMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CameraMinClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CameraMaxClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_MovingCamera_Statics::NewProp_CBSpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACB_MovingCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACB_MovingCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACB_MovingCamera_Statics::ClassParams = {
		&ACB_MovingCamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACB_MovingCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACB_MovingCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACB_MovingCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_MovingCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACB_MovingCamera()
	{
		if (!Z_Registration_Info_UClass_ACB_MovingCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACB_MovingCamera.OuterSingleton, Z_Construct_UClass_ACB_MovingCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACB_MovingCamera.OuterSingleton;
	}
	template<> FRAMEWORK_API UClass* StaticClass<ACB_MovingCamera>()
	{
		return ACB_MovingCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACB_MovingCamera);
	ACB_MovingCamera::~ACB_MovingCamera() {}
	struct Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_MovingCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_MovingCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACB_MovingCamera, ACB_MovingCamera::StaticClass, TEXT("ACB_MovingCamera"), &Z_Registration_Info_UClass_ACB_MovingCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACB_MovingCamera), 3363033109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_MovingCamera_h_4280820656(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_MovingCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_CB_MovingCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
