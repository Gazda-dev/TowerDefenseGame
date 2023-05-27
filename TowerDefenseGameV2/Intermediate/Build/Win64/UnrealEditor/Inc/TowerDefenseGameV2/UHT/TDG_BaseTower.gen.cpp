// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Tower/TDG_BaseTower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDG_BaseTower() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_BaseTower();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_BaseTower_NoRegister();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_TowerProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	DEFINE_FUNCTION(ATDG_BaseTower::execUpgradeTower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpgradeTower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDG_BaseTower::execAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack();
		P_NATIVE_END;
	}
	void ATDG_BaseTower::StaticRegisterNativesATDG_BaseTower()
	{
		UClass* Class = ATDG_BaseTower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &ATDG_BaseTower::execAttack },
			{ "UpgradeTower", &ATDG_BaseTower::execUpgradeTower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDG_BaseTower_Attack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDG_BaseTower_Attack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDG_BaseTower_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDG_BaseTower, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDG_BaseTower_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDG_BaseTower_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDG_BaseTower_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDG_BaseTower_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDG_BaseTower_UpgradeTower_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDG_BaseTower_UpgradeTower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDG_BaseTower_UpgradeTower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDG_BaseTower, nullptr, "UpgradeTower", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDG_BaseTower_UpgradeTower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDG_BaseTower_UpgradeTower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDG_BaseTower_UpgradeTower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDG_BaseTower_UpgradeTower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDG_BaseTower);
	UClass* Z_Construct_UClass_ATDG_BaseTower_NoRegister()
	{
		return ATDG_BaseTower::StaticClass();
	}
	struct Z_Construct_UClass_ATDG_BaseTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TowerHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTowerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTowerHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TowerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxUpgradeLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxUpgradeLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerDamageApplied_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TowerDamageApplied;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDG_BaseTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDG_BaseTower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDG_BaseTower_Attack, "Attack" }, // 2257715441
		{ &Z_Construct_UFunction_ATDG_BaseTower_UpgradeTower, "UpgradeTower" }, // 1583080182
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_BaseTower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tower/TDG_BaseTower.h" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_BaseTower, AttackRange), METADATA_PARAMS(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_BaseTower, AttackCooldown), METADATA_PARAMS(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_AttackCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_AttackCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerHealth_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerHealth = { "TowerHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_BaseTower, TowerHealth), METADATA_PARAMS(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_MaxTowerHealth_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_MaxTowerHealth = { "MaxTowerHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_BaseTower, MaxTowerHealth), METADATA_PARAMS(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_MaxTowerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_MaxTowerHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerMesh_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerMesh = { "TowerMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_BaseTower, TowerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_RootCollider_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_RootCollider = { "RootCollider", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_BaseTower, RootCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_RootCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_RootCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_BaseTower, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDG_TowerProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_MaxUpgradeLevel_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_MaxUpgradeLevel = { "MaxUpgradeLevel", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_BaseTower, MaxUpgradeLevel), METADATA_PARAMS(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_MaxUpgradeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_MaxUpgradeLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerDamageApplied_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Tower/TDG_BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerDamageApplied = { "TowerDamageApplied", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDG_BaseTower, TowerDamageApplied), METADATA_PARAMS(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerDamageApplied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerDamageApplied_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDG_BaseTower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_AttackCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_MaxTowerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_RootCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_MaxUpgradeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDG_BaseTower_Statics::NewProp_TowerDamageApplied,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDG_BaseTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDG_BaseTower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDG_BaseTower_Statics::ClassParams = {
		&ATDG_BaseTower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDG_BaseTower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDG_BaseTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_BaseTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDG_BaseTower()
	{
		if (!Z_Registration_Info_UClass_ATDG_BaseTower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDG_BaseTower.OuterSingleton, Z_Construct_UClass_ATDG_BaseTower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDG_BaseTower.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<ATDG_BaseTower>()
	{
		return ATDG_BaseTower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDG_BaseTower);
	ATDG_BaseTower::~ATDG_BaseTower() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_BaseTower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_BaseTower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDG_BaseTower, ATDG_BaseTower::StaticClass, TEXT("ATDG_BaseTower"), &Z_Registration_Info_UClass_ATDG_BaseTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDG_BaseTower), 145987220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_BaseTower_h_2931821502(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_BaseTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TDG_BaseTower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
