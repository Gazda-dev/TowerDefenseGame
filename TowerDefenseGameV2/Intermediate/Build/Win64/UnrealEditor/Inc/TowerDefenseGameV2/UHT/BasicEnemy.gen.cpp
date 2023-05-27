// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Enemies/BasicEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicEnemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ABasicEnemy();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ABasicEnemy_NoRegister();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_BaseTower_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	void ABasicEnemy::StaticRegisterNativesABasicEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasicEnemy);
	UClass* Z_Construct_UClass_ABasicEnemy_NoRegister()
	{
		return ABasicEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABasicEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyMaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TowerTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/BasicEnemy.h" },
		{ "ModuleRelativePath", "Enemies/BasicEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "BasicEnemy" },
		{ "ModuleRelativePath", "Enemies/BasicEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABasicEnemy_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((ABasicEnemy*)Obj)->bIsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABasicEnemy), &Z_Construct_UClass_ABasicEnemy_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyMesh_MetaData[] = {
		{ "Category", "Enemy #cpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/BasicEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyMesh = { "EnemyMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicEnemy, EnemyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyHealth_MetaData[] = {
		{ "Category", "Enemy #cpp" },
		{ "ModuleRelativePath", "Enemies/BasicEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyHealth = { "EnemyHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicEnemy, EnemyHealth), METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyMaxHealth_MetaData[] = {
		{ "Category", "Enemy #cpp" },
		{ "ModuleRelativePath", "Enemies/BasicEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyMaxHealth = { "EnemyMaxHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicEnemy, EnemyMaxHealth), METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyMaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyMaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::NewProp_TowerTarget_MetaData[] = {
		{ "Category", "Enemy #cpp" },
		{ "ModuleRelativePath", "Enemies/BasicEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_TowerTarget = { "TowerTarget", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicEnemy, TowerTarget), Z_Construct_UClass_ATDG_BaseTower_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_TowerTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_TowerTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Enemy #cpp" },
		{ "ModuleRelativePath", "Enemies/BasicEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicEnemy, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Enemy #cpp" },
		{ "ModuleRelativePath", "Enemies/BasicEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicEnemy, AttackRange), METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "Enemy #cpp" },
		{ "ModuleRelativePath", "Enemies/BasicEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicEnemy, AttackCooldown), METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_AttackCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_AttackCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Enemy #cpp" },
		{ "ModuleRelativePath", "Enemies/BasicEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicEnemy, Damage), METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_bIsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_EnemyMaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_TowerTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_AttackCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicEnemy_Statics::ClassParams = {
		&ABasicEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasicEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicEnemy()
	{
		if (!Z_Registration_Info_UClass_ABasicEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicEnemy.OuterSingleton, Z_Construct_UClass_ABasicEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasicEnemy.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<ABasicEnemy>()
	{
		return ABasicEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicEnemy);
	ABasicEnemy::~ABasicEnemy() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_BasicEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_BasicEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasicEnemy, ABasicEnemy::StaticClass, TEXT("ABasicEnemy"), &Z_Registration_Info_UClass_ABasicEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicEnemy), 2235051516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_BasicEnemy_h_2968424910(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_BasicEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_BasicEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
