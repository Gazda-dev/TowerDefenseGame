// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGame/Public/Tower/BaseTower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTower() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ABaseTower();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ABaseTower_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGame();
// End Cross Module References
	void ABaseTower::StaticRegisterNativesABaseTower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseTower);
	UClass* Z_Construct_UClass_ABaseTower_NoRegister()
	{
		return ABaseTower::StaticClass();
	}
	struct Z_Construct_UClass_ABaseTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tower/BaseTower.h" },
		{ "ModuleRelativePath", "Public/Tower/BaseTower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseTower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseTower_Statics::ClassParams = {
		&ABaseTower::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABaseTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseTower()
	{
		if (!Z_Registration_Info_UClass_ABaseTower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseTower.OuterSingleton, Z_Construct_UClass_ABaseTower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseTower.OuterSingleton;
	}
	template<> TOWERDEFENSEGAME_API UClass* StaticClass<ABaseTower>()
	{
		return ABaseTower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseTower);
	ABaseTower::~ABaseTower() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_BaseTower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_BaseTower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseTower, ABaseTower::StaticClass, TEXT("ABaseTower"), &Z_Registration_Info_UClass_ABaseTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseTower), 2268165267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_BaseTower_h_1429024903(TEXT("/Script/TowerDefenseGame"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_BaseTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_BaseTower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
