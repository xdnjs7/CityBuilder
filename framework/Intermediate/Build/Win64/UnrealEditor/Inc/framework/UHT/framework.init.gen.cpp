// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeframework_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_framework;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_framework()
	{
		if (!Z_Registration_Info_UPackage__Script_framework.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/framework",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9CCDE584,
				0x489B6E3A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_framework.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_framework.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_framework(Z_Construct_UPackage__Script_framework, TEXT("/Script/framework"), Z_Registration_Info_UPackage__Script_framework, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9CCDE584, 0x489B6E3A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
