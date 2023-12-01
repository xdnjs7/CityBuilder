// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "framework/MovingCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingCamera() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	FRAMEWORK_API UClass* Z_Construct_UClass_AMovingCamera();
	FRAMEWORK_API UClass* Z_Construct_UClass_AMovingCamera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	DEFINE_FUNCTION(AMovingCamera::execOnMouseRightRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseRightRelease();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovingCamera::execOnMouseRightClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseRightClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovingCamera::execZoomOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovingCamera::execZoomIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovingCamera::execCameraZoom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CameraZoom(Z_Param_Magnitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovingCamera::execCameraPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CameraPitch(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovingCamera::execRotate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rotate(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovingCamera::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovingCamera::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	void AMovingCamera::StaticRegisterNativesAMovingCamera()
	{
		UClass* Class = AMovingCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CameraPitch", &AMovingCamera::execCameraPitch },
			{ "CameraZoom", &AMovingCamera::execCameraZoom },
			{ "MoveForward", &AMovingCamera::execMoveForward },
			{ "MoveRight", &AMovingCamera::execMoveRight },
			{ "OnMouseRightClick", &AMovingCamera::execOnMouseRightClick },
			{ "OnMouseRightRelease", &AMovingCamera::execOnMouseRightRelease },
			{ "Rotate", &AMovingCamera::execRotate },
			{ "ZoomIn", &AMovingCamera::execZoomIn },
			{ "ZoomOut", &AMovingCamera::execZoomOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics
	{
		struct MovingCamera_eventCameraPitch_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovingCamera_eventCameraPitch_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingCamera, nullptr, "CameraPitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics::MovingCamera_eventCameraPitch_Parms), Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingCamera_CameraPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingCamera_CameraPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics
	{
		struct MovingCamera_eventCameraZoom_Parms
		{
			float Magnitude;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovingCamera_eventCameraZoom_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics::NewProp_Magnitude,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingCamera, nullptr, "CameraZoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics::MovingCamera_eventCameraZoom_Parms), Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingCamera_CameraZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingCamera_CameraZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingCamera_MoveForward_Statics
	{
		struct MovingCamera_eventMoveForward_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingCamera_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovingCamera_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingCamera_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingCamera_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCamera_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*virtual void MouseWheelZoom(float Value);*/" },
		{ "ModuleRelativePath", "MovingCamera.h" },
		{ "ToolTip", "virtual void MouseWheelZoom(float Value);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingCamera_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingCamera, nullptr, "MoveForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMovingCamera_MoveForward_Statics::MovingCamera_eventMoveForward_Parms), Z_Construct_UFunction_AMovingCamera_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingCamera_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingCamera_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingCamera_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingCamera_MoveRight_Statics
	{
		struct MovingCamera_eventMoveRight_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingCamera_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovingCamera_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingCamera_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingCamera_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCamera_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingCamera_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingCamera, nullptr, "MoveRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMovingCamera_MoveRight_Statics::MovingCamera_eventMoveRight_Parms), Z_Construct_UFunction_AMovingCamera_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingCamera_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingCamera_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingCamera_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingCamera_OnMouseRightClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCamera_OnMouseRightClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingCamera_OnMouseRightClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingCamera, nullptr, "OnMouseRightClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingCamera_OnMouseRightClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_OnMouseRightClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingCamera_OnMouseRightClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingCamera_OnMouseRightClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingCamera_OnMouseRightRelease_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCamera_OnMouseRightRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingCamera_OnMouseRightRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingCamera, nullptr, "OnMouseRightRelease", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingCamera_OnMouseRightRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_OnMouseRightRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingCamera_OnMouseRightRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingCamera_OnMouseRightRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingCamera_Rotate_Statics
	{
		struct MovingCamera_eventRotate_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingCamera_Rotate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovingCamera_eventRotate_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingCamera_Rotate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingCamera_Rotate_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCamera_Rotate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = \"Custom Function\")\n//void UpdateMovementSpeed();\n" },
		{ "ModuleRelativePath", "MovingCamera.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = \"Custom Function\")\nvoid UpdateMovementSpeed();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingCamera_Rotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingCamera, nullptr, "Rotate", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMovingCamera_Rotate_Statics::MovingCamera_eventRotate_Parms), Z_Construct_UFunction_AMovingCamera_Rotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_Rotate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingCamera_Rotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_Rotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingCamera_Rotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingCamera_Rotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingCamera_ZoomIn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCamera_ZoomIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingCamera_ZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingCamera, nullptr, "ZoomIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingCamera_ZoomIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_ZoomIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingCamera_ZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingCamera_ZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingCamera_ZoomOut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCamera_ZoomOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingCamera_ZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingCamera, nullptr, "ZoomOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingCamera_ZoomOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCamera_ZoomOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingCamera_ZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingCamera_ZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingCamera);
	UClass* Z_Construct_UClass_AMovingCamera_NoRegister()
	{
		return AMovingCamera::StaticClass();
	}
	struct Z_Construct_UClass_AMovingCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MCCapsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MCCapsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MCCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MCCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MCSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MCSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationSpeed;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCameraRotation_MetaData[];
#endif
		static void NewProp_bAllowCameraRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCameraRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMovingCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingCamera_CameraPitch, "CameraPitch" }, // 4034491956
		{ &Z_Construct_UFunction_AMovingCamera_CameraZoom, "CameraZoom" }, // 1258177141
		{ &Z_Construct_UFunction_AMovingCamera_MoveForward, "MoveForward" }, // 2284062779
		{ &Z_Construct_UFunction_AMovingCamera_MoveRight, "MoveRight" }, // 54255481
		{ &Z_Construct_UFunction_AMovingCamera_OnMouseRightClick, "OnMouseRightClick" }, // 1340384980
		{ &Z_Construct_UFunction_AMovingCamera_OnMouseRightRelease, "OnMouseRightRelease" }, // 587920309
		{ &Z_Construct_UFunction_AMovingCamera_Rotate, "Rotate" }, // 430854726
		{ &Z_Construct_UFunction_AMovingCamera_ZoomIn, "ZoomIn" }, // 419364055
		{ &Z_Construct_UFunction_AMovingCamera_ZoomOut, "ZoomOut" }, // 3848460600
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MovingCamera.h" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCapsule_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCapsule = { "MCCapsule", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, MCCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCapsule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCamera = { "MCCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, MCCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCSpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCSpringArm = { "MCSpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, MCSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraRotationSpeed_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraRotationSpeed = { "CameraRotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, CameraRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Zoom" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, ZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomMin_MetaData[] = {
		{ "Category", "Zoom" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomMin = { "ZoomMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, ZoomMin), METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomMax_MetaData[] = {
		{ "Category", "Zoom" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomMax = { "ZoomMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, ZoomMax), METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_InitialMovementSpeed_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_InitialMovementSpeed = { "InitialMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, InitialMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_InitialMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_InitialMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraMinClamp_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraMinClamp = { "CameraMinClamp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, CameraMinClamp), METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraMinClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraMinClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraMaxClamp_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraMaxClamp = { "CameraMaxClamp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, CameraMaxClamp), METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraMaxClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraMaxClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_bAllowCameraRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	void Z_Construct_UClass_AMovingCamera_Statics::NewProp_bAllowCameraRotation_SetBit(void* Obj)
	{
		((AMovingCamera*)Obj)->bAllowCameraRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_bAllowCameraRotation = { "bAllowCameraRotation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMovingCamera), &Z_Construct_UClass_AMovingCamera_Statics::NewProp_bAllowCameraRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_bAllowCameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_bAllowCameraRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCapsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_InitialMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraMinClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraMaxClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_bAllowCameraRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingCamera_Statics::ClassParams = {
		&AMovingCamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMovingCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingCamera()
	{
		if (!Z_Registration_Info_UClass_AMovingCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingCamera.OuterSingleton, Z_Construct_UClass_AMovingCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingCamera.OuterSingleton;
	}
	template<> FRAMEWORK_API UClass* StaticClass<AMovingCamera>()
	{
		return AMovingCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingCamera);
	AMovingCamera::~AMovingCamera() {}
	struct Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_MovingCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_MovingCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingCamera, AMovingCamera::StaticClass, TEXT("AMovingCamera"), &Z_Registration_Info_UClass_AMovingCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingCamera), 3267530935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_MovingCamera_h_4025730185(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_MovingCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_MovingCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
