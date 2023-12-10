// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "framework/Public/PloppableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePloppableComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FRAMEWORK_API UClass* Z_Construct_UClass_UPloppableComponent();
	FRAMEWORK_API UClass* Z_Construct_UClass_UPloppableComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_framework();
// End Cross Module References
	DEFINE_FUNCTION(UPloppableComponent::execSetPlacement)
	{
		P_GET_UBOOL(Z_Param_onoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlacement(Z_Param_onoff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPloppableComponent::execUpdateState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateState();
		P_NATIVE_END;
	}
	void UPloppableComponent::StaticRegisterNativesUPloppableComponent()
	{
		UClass* Class = UPloppableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPlacement", &UPloppableComponent::execSetPlacement },
			{ "UpdateState", &UPloppableComponent::execUpdateState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics
	{
		struct PloppableComponent_eventSetPlacement_Parms
		{
			bool onoff;
		};
		static void NewProp_onoff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onoff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::NewProp_onoff_SetBit(void* Obj)
	{
		((PloppableComponent_eventSetPlacement_Parms*)Obj)->onoff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::NewProp_onoff = { "onoff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PloppableComponent_eventSetPlacement_Parms), &Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::NewProp_onoff_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::NewProp_onoff,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PloppableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPloppableComponent, nullptr, "SetPlacement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::PloppableComponent_eventSetPlacement_Parms), Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPloppableComponent_SetPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPloppableComponent_SetPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPloppableComponent_UpdateState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPloppableComponent_UpdateState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp);\n" },
		{ "ModuleRelativePath", "Public/PloppableComponent.h" },
		{ "ToolTip", "void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPloppableComponent_UpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPloppableComponent, nullptr, "UpdateState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPloppableComponent_UpdateState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPloppableComponent_UpdateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPloppableComponent_UpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPloppableComponent_UpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPloppableComponent);
	UClass* Z_Construct_UClass_UPloppableComponent_NoRegister()
	{
		return UPloppableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPloppableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isPlacement_MetaData[];
#endif
		static void NewProp_isPlacement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPlacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ploppableMeta_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ploppableMeta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_invalidPloppableMeta_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_invalidPloppableMeta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPloppableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_framework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPloppableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPloppableComponent_SetPlacement, "SetPlacement" }, // 3520745199
		{ &Z_Construct_UFunction_UPloppableComponent_UpdateState, "UpdateState" }, // 2869465657
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPloppableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PloppableComponent.h" },
		{ "ModuleRelativePath", "Public/PloppableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPloppableComponent_Statics::NewProp_isPlacement_MetaData[] = {
		{ "Category", "PloppableComponent" },
		{ "ModuleRelativePath", "Public/PloppableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPloppableComponent_Statics::NewProp_isPlacement_SetBit(void* Obj)
	{
		((UPloppableComponent*)Obj)->isPlacement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPloppableComponent_Statics::NewProp_isPlacement = { "isPlacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPloppableComponent), &Z_Construct_UClass_UPloppableComponent_Statics::NewProp_isPlacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPloppableComponent_Statics::NewProp_isPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPloppableComponent_Statics::NewProp_isPlacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPloppableComponent_Statics::NewProp_ploppableMeta_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/PloppableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPloppableComponent_Statics::NewProp_ploppableMeta = { "ploppableMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPloppableComponent, ploppableMeta), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPloppableComponent_Statics::NewProp_ploppableMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPloppableComponent_Statics::NewProp_ploppableMeta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPloppableComponent_Statics::NewProp_invalidPloppableMeta_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/PloppableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPloppableComponent_Statics::NewProp_invalidPloppableMeta = { "invalidPloppableMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPloppableComponent, invalidPloppableMeta), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPloppableComponent_Statics::NewProp_invalidPloppableMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPloppableComponent_Statics::NewProp_invalidPloppableMeta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPloppableComponent_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PloppableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPloppableComponent_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPloppableComponent, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPloppableComponent_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPloppableComponent_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPloppableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPloppableComponent_Statics::NewProp_isPlacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPloppableComponent_Statics::NewProp_ploppableMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPloppableComponent_Statics::NewProp_invalidPloppableMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPloppableComponent_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPloppableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPloppableComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPloppableComponent_Statics::ClassParams = {
		&UPloppableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPloppableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPloppableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPloppableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPloppableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPloppableComponent()
	{
		if (!Z_Registration_Info_UClass_UPloppableComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPloppableComponent.OuterSingleton, Z_Construct_UClass_UPloppableComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPloppableComponent.OuterSingleton;
	}
	template<> FRAMEWORK_API UClass* StaticClass<UPloppableComponent>()
	{
		return UPloppableComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPloppableComponent);
	UPloppableComponent::~UPloppableComponent() {}
	struct Z_CompiledInDeferFile_FID_framework_Source_framework_Public_PloppableComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_Public_PloppableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPloppableComponent, UPloppableComponent::StaticClass, TEXT("UPloppableComponent"), &Z_Registration_Info_UClass_UPloppableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPloppableComponent), 2672362520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_framework_Source_framework_Public_PloppableComponent_h_3506409037(TEXT("/Script/framework"),
		Z_CompiledInDeferFile_FID_framework_Source_framework_Public_PloppableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_framework_Source_framework_Public_PloppableComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
