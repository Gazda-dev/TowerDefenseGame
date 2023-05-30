// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Gameplay/TDG_GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDG_GameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_GameModeBase();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_GameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	void ATDG_GameModeBase::StaticRegisterNativesATDG_GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDG_GameModeBase);
	UClass* Z_Construct_UClass_ATDG_GameModeBase_NoRegister()
	{
		return ATDG_GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATDG_GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWave_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemiesPerWave_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnemiesPerWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AliveEnemyCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AliveEnemyCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldStartGame_MetaData[];
#endif
		static void NewProp_bShouldStartGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldStartGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDG_GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gameplay/TDG_GameModeBase.h" },
		{ "ModuleRelativePath", "Gameplay/TDG_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_CurrentWave_MetaData[] = {
		{ "Category", "EnemySpawner #cpp" },
		{ "ModuleRelativePath", "Gameplay/TDG_GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_CurrentWave = { "CurrentWave", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_GameModeBase, CurrentWave), METADATA_PARAMS(Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_CurrentWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_CurrentWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_EnemiesPerWave_MetaData[] = {
		{ "Category", "EnemySpawner #cpp" },
		{ "ModuleRelativePath", "Gameplay/TDG_GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_EnemiesPerWave = { "EnemiesPerWave", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_GameModeBase, EnemiesPerWave), METADATA_PARAMS(Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_EnemiesPerWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_EnemiesPerWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_AliveEnemyCount_MetaData[] = {
		{ "Category", "EnemySpawner #cpp" },
		{ "ModuleRelativePath", "Gameplay/TDG_GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_AliveEnemyCount = { "AliveEnemyCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_GameModeBase, AliveEnemyCount), METADATA_PARAMS(Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_AliveEnemyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_AliveEnemyCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_bShouldStartGame_MetaData[] = {
		{ "Category", "EnemySpawner #cpp" },
		{ "ModuleRelativePath", "Gameplay/TDG_GameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_bShouldStartGame_SetBit(void* Obj)
	{
		((ATDG_GameModeBase*)Obj)->bShouldStartGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_bShouldStartGame = { "bShouldStartGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ATDG_GameModeBase), &Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_bShouldStartGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_bShouldStartGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_bShouldStartGame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDG_GameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_CurrentWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_EnemiesPerWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_AliveEnemyCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_GameModeBase_Statics::NewProp_bShouldStartGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDG_GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDG_GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDG_GameModeBase_Statics::ClassParams = {
		&ATDG_GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATDG_GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATDG_GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDG_GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATDG_GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDG_GameModeBase.OuterSingleton, Z_Construct_UClass_ATDG_GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDG_GameModeBase.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<ATDG_GameModeBase>()
	{
		return ATDG_GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDG_GameModeBase);
	ATDG_GameModeBase::~ATDG_GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_TDG_GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_TDG_GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDG_GameModeBase, ATDG_GameModeBase::StaticClass, TEXT("ATDG_GameModeBase"), &Z_Registration_Info_UClass_ATDG_GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDG_GameModeBase), 187953464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_TDG_GameModeBase_h_1614709518(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_TDG_GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_TDG_GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
