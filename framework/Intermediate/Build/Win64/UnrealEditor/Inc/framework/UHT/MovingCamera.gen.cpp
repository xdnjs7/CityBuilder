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
	FRAMEWORK_API UClass* Z_Construct_UClass_AMovingCamera();
	FRAMEWORK_API UClass* Z_Construct_UClass_AMovingCamera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	void AMovingCamera::StaticRegisterNativesAMovingCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingCamera);
	UClass* Z_Construct_UClass_AMovingCamera_NoRegister()
	{
		return AMovingCamera::StaticClass();
	}
	struct Z_Construct_UClass_AMovingCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinZoomDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoomDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoomDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoomDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraRotationSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraRotationSpeed = { "CameraRotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, CameraRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, ZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_MinZoomDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_MinZoomDistance = { "MinZoomDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, MinZoomDistance), METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_MinZoomDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_MinZoomDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCamera_Statics::NewProp_MaxZoomDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MovingCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCamera_Statics::NewProp_MaxZoomDistance = { "MaxZoomDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingCamera, MaxZoomDistance), METADATA_PARAMS(Z_Construct_UClass_AMovingCamera_Statics::NewProp_MaxZoomDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCamera_Statics::NewProp_MaxZoomDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCapsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_MCCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_CameraRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_ZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_MinZoomDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCamera_Statics::NewProp_MaxZoomDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingCamera_Statics::ClassParams = {
		&AMovingCamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_AMovingCamera, AMovingCamera::StaticClass, TEXT("AMovingCamera"), &Z_Registration_Info_UClass_AMovingCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingCamera), 3686739684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_MovingCamera_h_1605433488(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_MovingCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_woong_Desktop_CityBuilder_framework_Source_framework_MovingCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
