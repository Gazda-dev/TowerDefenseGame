// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Tower/TDG_TowerProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDG_TowerProjectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_TowerProjectile();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_TowerProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	void ATDG_TowerProjectile::StaticRegisterNativesATDG_TowerProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDG_TowerProjectile);
	UClass* Z_Construct_UClass_ATDG_TowerProjectile_NoRegister()
	{
		return ATDG_TowerProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ATDG_TowerProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDG_TowerProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_TowerProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tower/TDG_TowerProjectile.h" },
		{ "ModuleRelativePath", "Tower/TDG_TowerProjectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDG_TowerProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDG_TowerProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDG_TowerProjectile_Statics::ClassParams = {
		&ATDG_TowerProjectile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATDG_TowerProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_TowerProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDG_TowerProjectile()
	{
		if (!Z_Registration_Info_UClass_ATDG_TowerProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDG_TowerProjectile.OuterSingleton, Z_Construct_UClass_ATDG_TowerProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDG_TowerProjectile.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<ATDG_TowerProjectile>()
	{
		return ATDG_TowerProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDG_TowerProjectile);
	ATDG_TowerProjectile::~ATDG_TowerProjectile() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_TowerProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_TowerProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDG_TowerProjectile, ATDG_TowerProjectile::StaticClass, TEXT("ATDG_TowerProjectile"), &Z_Registration_Info_UClass_ATDG_TowerProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDG_TowerProjectile), 3872859879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_TowerProjectile_h_2202149496(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_TowerProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_TowerProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
