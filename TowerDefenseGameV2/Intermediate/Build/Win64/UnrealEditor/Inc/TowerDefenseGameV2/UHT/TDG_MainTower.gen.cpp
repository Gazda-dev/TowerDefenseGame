// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Tower/TDG_MainTower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDG_MainTower() {}
// Cross Module References
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_BaseTower();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_MainTower();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_MainTower_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	void ATDG_MainTower::StaticRegisterNativesATDG_MainTower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDG_MainTower);
	UClass* Z_Construct_UClass_ATDG_MainTower_NoRegister()
	{
		return ATDG_MainTower::StaticClass();
	}
	struct Z_Construct_UClass_ATDG_MainTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDG_MainTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDG_BaseTower,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_MainTower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tower/TDG_MainTower.h" },
		{ "ModuleRelativePath", "Tower/TDG_MainTower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDG_MainTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDG_MainTower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDG_MainTower_Statics::ClassParams = {
		&ATDG_MainTower::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATDG_MainTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_MainTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDG_MainTower()
	{
		if (!Z_Registration_Info_UClass_ATDG_MainTower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDG_MainTower.OuterSingleton, Z_Construct_UClass_ATDG_MainTower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDG_MainTower.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<ATDG_MainTower>()
	{
		return ATDG_MainTower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDG_MainTower);
	ATDG_MainTower::~ATDG_MainTower() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_MainTower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_MainTower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDG_MainTower, ATDG_MainTower::StaticClass, TEXT("ATDG_MainTower"), &Z_Registration_Info_UClass_ATDG_MainTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDG_MainTower), 3465801512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_MainTower_h_1864834084(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_MainTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_MainTower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
