// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Tower/TDG_SimpleTower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDG_SimpleTower() {}
// Cross Module References
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_BaseTower();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_SimpleTower();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_SimpleTower_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	void ATDG_SimpleTower::StaticRegisterNativesATDG_SimpleTower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDG_SimpleTower);
	UClass* Z_Construct_UClass_ATDG_SimpleTower_NoRegister()
	{
		return ATDG_SimpleTower::StaticClass();
	}
	struct Z_Construct_UClass_ATDG_SimpleTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDG_SimpleTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDG_BaseTower,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_SimpleTower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tower/TDG_SimpleTower.h" },
		{ "ModuleRelativePath", "Tower/TDG_SimpleTower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDG_SimpleTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDG_SimpleTower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDG_SimpleTower_Statics::ClassParams = {
		&ATDG_SimpleTower::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATDG_SimpleTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_SimpleTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDG_SimpleTower()
	{
		if (!Z_Registration_Info_UClass_ATDG_SimpleTower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDG_SimpleTower.OuterSingleton, Z_Construct_UClass_ATDG_SimpleTower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDG_SimpleTower.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<ATDG_SimpleTower>()
	{
		return ATDG_SimpleTower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDG_SimpleTower);
	ATDG_SimpleTower::~ATDG_SimpleTower() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_SimpleTower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_SimpleTower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDG_SimpleTower, ATDG_SimpleTower::StaticClass, TEXT("ATDG_SimpleTower"), &Z_Registration_Info_UClass_ATDG_SimpleTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDG_SimpleTower), 4079509089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_SimpleTower_h_3512369092(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_SimpleTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_SimpleTower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
