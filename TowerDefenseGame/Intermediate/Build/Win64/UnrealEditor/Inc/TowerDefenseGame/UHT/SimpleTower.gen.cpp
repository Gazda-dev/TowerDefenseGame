// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGame/Public/Tower/SimpleTower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleTower() {}
// Cross Module References
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ABaseTower();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ASimpleTower();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ASimpleTower_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGame();
// End Cross Module References
	void ASimpleTower::StaticRegisterNativesASimpleTower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimpleTower);
	UClass* Z_Construct_UClass_ASimpleTower_NoRegister()
	{
		return ASimpleTower::StaticClass();
	}
	struct Z_Construct_UClass_ASimpleTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimpleTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseTower,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleTower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tower/SimpleTower.h" },
		{ "ModuleRelativePath", "Public/Tower/SimpleTower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimpleTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimpleTower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimpleTower_Statics::ClassParams = {
		&ASimpleTower::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASimpleTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimpleTower()
	{
		if (!Z_Registration_Info_UClass_ASimpleTower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimpleTower.OuterSingleton, Z_Construct_UClass_ASimpleTower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASimpleTower.OuterSingleton;
	}
	template<> TOWERDEFENSEGAME_API UClass* StaticClass<ASimpleTower>()
	{
		return ASimpleTower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimpleTower);
	ASimpleTower::~ASimpleTower() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_SimpleTower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_SimpleTower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASimpleTower, ASimpleTower::StaticClass, TEXT("ASimpleTower"), &Z_Registration_Info_UClass_ASimpleTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimpleTower), 2708774488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_SimpleTower_h_2662296912(TEXT("/Script/TowerDefenseGame"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_SimpleTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_SimpleTower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
