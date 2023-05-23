// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Tower/TDG_BaseTower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDG_BaseTower() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_BaseTower();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_BaseTower_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	void ATDG_BaseTower::StaticRegisterNativesATDG_BaseTower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDG_BaseTower);
	UClass* Z_Construct_UClass_ATDG_BaseTower_NoRegister()
	{
		return ATDG_BaseTower::StaticClass();
	}
	struct Z_Construct_UClass_ATDG_BaseTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDG_BaseTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_BaseTower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tower/TDG_BaseTower.h" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDG_BaseTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDG_BaseTower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDG_BaseTower_Statics::ClassParams = {
		&ATDG_BaseTower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDG_BaseTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDG_BaseTower()
	{
		if (!Z_Registration_Info_UClass_ATDG_BaseTower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDG_BaseTower.OuterSingleton, Z_Construct_UClass_ATDG_BaseTower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDG_BaseTower.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<ATDG_BaseTower>()
	{
		return ATDG_BaseTower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDG_BaseTower);
	ATDG_BaseTower::~ATDG_BaseTower() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_BaseTower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_BaseTower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDG_BaseTower, ATDG_BaseTower::StaticClass, TEXT("ATDG_BaseTower"), &Z_Registration_Info_UClass_ATDG_BaseTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDG_BaseTower), 574557154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_BaseTower_h_2902204133(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_BaseTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_BaseTower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
