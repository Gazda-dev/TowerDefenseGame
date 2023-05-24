// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Enemies/EnemySpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ABasicEnemy_NoRegister();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_AEnemySpawner();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	void AEnemySpawner::StaticRegisterNativesAEnemySpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpawner);
	UClass* Z_Construct_UClass_AEnemySpawner_NoRegister()
	{
		return AEnemySpawner::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemyClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemies/EnemySpawner.h" },
		{ "ModuleRelativePath", "Enemies/EnemySpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemyClasses_Inner = { "EnemyClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ABasicEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemyClasses_MetaData[] = {
		{ "Category", "EnemySpawner #cpp" },
		{ "ModuleRelativePath", "Enemies/EnemySpawner.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemyClasses = { "EnemyClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemySpawner, EnemyClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemyClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemyClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "EnemySpawner #cpp" },
		{ "ModuleRelativePath", "Enemies/EnemySpawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemySpawner, SpawnInterval), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemyClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemyClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawner_Statics::ClassParams = {
		&AEnemySpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemySpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemySpawner()
	{
		if (!Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton, Z_Construct_UClass_AEnemySpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<AEnemySpawner>()
	{
		return AEnemySpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawner);
	AEnemySpawner::~AEnemySpawner() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_EnemySpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_EnemySpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawner, AEnemySpawner::StaticClass, TEXT("AEnemySpawner"), &Z_Registration_Info_UClass_AEnemySpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawner), 588386912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_EnemySpawner_h_1512473362(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_EnemySpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_EnemySpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
