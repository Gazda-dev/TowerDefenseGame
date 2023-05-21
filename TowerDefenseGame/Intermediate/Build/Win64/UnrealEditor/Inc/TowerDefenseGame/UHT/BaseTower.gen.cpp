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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ABaseTower();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ABaseTower_NoRegister();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ATowerProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGame();
// End Cross Module References
	DEFINE_FUNCTION(ABaseTower::execUpgradeTower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpgradeTower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseTower::execAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack();
		P_NATIVE_END;
	}
	void ABaseTower::StaticRegisterNativesABaseTower()
	{
		UClass* Class = ABaseTower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &ABaseTower::execAttack },
			{ "UpgradeTower", &ABaseTower::execUpgradeTower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseTower_Attack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseTower_Attack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Public/Tower/BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseTower_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTower, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseTower_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseTower_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseTower_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseTower_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseTower_UpgradeTower_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseTower_UpgradeTower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Public/Tower/BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseTower_UpgradeTower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTower, nullptr, "UpgradeTower", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseTower_UpgradeTower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseTower_UpgradeTower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseTower_UpgradeTower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseTower_UpgradeTower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseTower);
	UClass* Z_Construct_UClass_ABaseTower_NoRegister()
	{
		return ABaseTower::StaticClass();
	}
	struct Z_Construct_UClass_ABaseTower_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TowerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxUpgradeLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxUpgradeLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseTower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseTower_Attack, "Attack" }, // 2829482588
		{ &Z_Construct_UFunction_ABaseTower_UpgradeTower, "UpgradeTower" }, // 744025183
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tower/BaseTower.h" },
		{ "ModuleRelativePath", "Public/Tower/BaseTower.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTower_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Public/Tower/BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseTower_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseTower, AttackRange), METADATA_PARAMS(Z_Construct_UClass_ABaseTower_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTower_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTower_Statics::NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Public/Tower/BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseTower_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseTower, AttackCooldown), METADATA_PARAMS(Z_Construct_UClass_ABaseTower_Statics::NewProp_AttackCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTower_Statics::NewProp_AttackCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTower_Statics::NewProp_TowerHealth_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Public/Tower/BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseTower_Statics::NewProp_TowerHealth = { "TowerHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseTower, TowerHealth), METADATA_PARAMS(Z_Construct_UClass_ABaseTower_Statics::NewProp_TowerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTower_Statics::NewProp_TowerHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTower_Statics::NewProp_TowerMesh_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tower/BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTower_Statics::NewProp_TowerMesh = { "TowerMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseTower, TowerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseTower_Statics::NewProp_TowerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTower_Statics::NewProp_TowerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTower_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Public/Tower/BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseTower_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseTower, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATowerProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseTower_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTower_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTower_Statics::NewProp_MaxUpgradeLevel_MetaData[] = {
		{ "Category", "Tower #cpp" },
		{ "ModuleRelativePath", "Public/Tower/BaseTower.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseTower_Statics::NewProp_MaxUpgradeLevel = { "MaxUpgradeLevel", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseTower, MaxUpgradeLevel), METADATA_PARAMS(Z_Construct_UClass_ABaseTower_Statics::NewProp_MaxUpgradeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTower_Statics::NewProp_MaxUpgradeLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseTower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTower_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTower_Statics::NewProp_AttackCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTower_Statics::NewProp_TowerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTower_Statics::NewProp_TowerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTower_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTower_Statics::NewProp_MaxUpgradeLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseTower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseTower_Statics::ClassParams = {
		&ABaseTower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseTower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTower_Statics::PropPointers),
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
		{ Z_Construct_UClass_ABaseTower, ABaseTower::StaticClass, TEXT("ABaseTower"), &Z_Registration_Info_UClass_ABaseTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseTower), 3001349990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_BaseTower_h_2188538262(TEXT("/Script/TowerDefenseGame"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_BaseTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_BaseTower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
