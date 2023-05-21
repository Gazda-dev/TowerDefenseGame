// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGame/Public/Tower/TowerProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerProjectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ATowerProjectile();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ATowerProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGame();
// End Cross Module References
	void ATowerProjectile::StaticRegisterNativesATowerProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATowerProjectile);
	UClass* Z_Construct_UClass_ATowerProjectile_NoRegister()
	{
		return ATowerProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ATowerProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tower/TowerProjectile.h" },
		{ "ModuleRelativePath", "Public/Tower/TowerProjectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerProjectile_Statics::ClassParams = {
		&ATowerProjectile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATowerProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerProjectile()
	{
		if (!Z_Registration_Info_UClass_ATowerProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATowerProjectile.OuterSingleton, Z_Construct_UClass_ATowerProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATowerProjectile.OuterSingleton;
	}
	template<> TOWERDEFENSEGAME_API UClass* StaticClass<ATowerProjectile>()
	{
		return ATowerProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerProjectile);
	ATowerProjectile::~ATowerProjectile() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_TowerProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_TowerProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATowerProjectile, ATowerProjectile::StaticClass, TEXT("ATowerProjectile"), &Z_Registration_Info_UClass_ATowerProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowerProjectile), 897217750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_TowerProjectile_h_3067277790(TEXT("/Script/TowerDefenseGame"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_TowerProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_TowerProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
