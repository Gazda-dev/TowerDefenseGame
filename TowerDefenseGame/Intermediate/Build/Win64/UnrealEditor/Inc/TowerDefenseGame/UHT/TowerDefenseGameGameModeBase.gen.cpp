// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGame/TowerDefenseGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerDefenseGameGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ATowerDefenseGameGameModeBase();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ATowerDefenseGameGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGame();
// End Cross Module References
	void ATowerDefenseGameGameModeBase::StaticRegisterNativesATowerDefenseGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATowerDefenseGameGameModeBase);
	UClass* Z_Construct_UClass_ATowerDefenseGameGameModeBase_NoRegister()
	{
		return ATowerDefenseGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATowerDefenseGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerDefenseGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefenseGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TowerDefenseGameGameModeBase.h" },
		{ "ModuleRelativePath", "TowerDefenseGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerDefenseGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerDefenseGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerDefenseGameGameModeBase_Statics::ClassParams = {
		&ATowerDefenseGameGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATowerDefenseGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefenseGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerDefenseGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATowerDefenseGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATowerDefenseGameGameModeBase.OuterSingleton, Z_Construct_UClass_ATowerDefenseGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATowerDefenseGameGameModeBase.OuterSingleton;
	}
	template<> TOWERDEFENSEGAME_API UClass* StaticClass<ATowerDefenseGameGameModeBase>()
	{
		return ATowerDefenseGameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerDefenseGameGameModeBase);
	ATowerDefenseGameGameModeBase::~ATowerDefenseGameGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_TowerDefenseGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_TowerDefenseGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATowerDefenseGameGameModeBase, ATowerDefenseGameGameModeBase::StaticClass, TEXT("ATowerDefenseGameGameModeBase"), &Z_Registration_Info_UClass_ATowerDefenseGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowerDefenseGameGameModeBase), 2834829735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_TowerDefenseGameGameModeBase_h_861180596(TEXT("/Script/TowerDefenseGame"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_TowerDefenseGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_TowerDefenseGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
