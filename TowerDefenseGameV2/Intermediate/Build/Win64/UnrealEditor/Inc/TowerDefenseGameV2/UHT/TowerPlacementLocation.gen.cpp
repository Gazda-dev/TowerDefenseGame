// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Tower/TowerPlacementLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerPlacementLocation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_BaseTower_NoRegister();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATowerPlacementLocation();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATowerPlacementLocation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	DEFINE_FUNCTION(ATowerPlacementLocation::execUpgradeTower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpgradeTower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATowerPlacementLocation::execSpawnTower)
	{
		P_GET_OBJECT(UClass,Z_Param_TowerClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnTower(Z_Param_TowerClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATowerPlacementLocation::execOnPlacementClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlacementClicked();
		P_NATIVE_END;
	}
	void ATowerPlacementLocation::StaticRegisterNativesATowerPlacementLocation()
	{
		UClass* Class = ATowerPlacementLocation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlacementClicked", &ATowerPlacementLocation::execOnPlacementClicked },
			{ "SpawnTower", &ATowerPlacementLocation::execSpawnTower },
			{ "UpgradeTower", &ATowerPlacementLocation::execUpgradeTower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATowerPlacementLocation_OnPlacementClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerPlacementLocation_OnPlacementClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tower placement #cpp" },
		{ "ModuleRelativePath", "Tower/TowerPlacementLocation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerPlacementLocation_OnPlacementClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerPlacementLocation, nullptr, "OnPlacementClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerPlacementLocation_OnPlacementClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerPlacementLocation_OnPlacementClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerPlacementLocation_OnPlacementClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATowerPlacementLocation_OnPlacementClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics
	{
		struct TowerPlacementLocation_eventSpawnTower_Parms
		{
			TSubclassOf<ATDG_BaseTower>  TowerClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_TowerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics::NewProp_TowerClass = { "TowerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TowerPlacementLocation_eventSpawnTower_Parms, TowerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDG_BaseTower_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics::NewProp_TowerClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tower placement #cpp" },
		{ "ModuleRelativePath", "Tower/TowerPlacementLocation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerPlacementLocation, nullptr, "SpawnTower", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics::TowerPlacementLocation_eventSpawnTower_Parms), Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATowerPlacementLocation_UpgradeTower_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerPlacementLocation_UpgradeTower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tower placement #cpp" },
		{ "ModuleRelativePath", "Tower/TowerPlacementLocation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerPlacementLocation_UpgradeTower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerPlacementLocation, nullptr, "UpgradeTower", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerPlacementLocation_UpgradeTower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerPlacementLocation_UpgradeTower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerPlacementLocation_UpgradeTower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATowerPlacementLocation_UpgradeTower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATowerPlacementLocation);
	UClass* Z_Construct_UClass_ATowerPlacementLocation_NoRegister()
	{
		return ATowerPlacementLocation::StaticClass();
	}
	struct Z_Construct_UClass_ATowerPlacementLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerClassToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TowerClassToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacementMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootCollider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerPlacementLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATowerPlacementLocation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATowerPlacementLocation_OnPlacementClicked, "OnPlacementClicked" }, // 2852215518
		{ &Z_Construct_UFunction_ATowerPlacementLocation_SpawnTower, "SpawnTower" }, // 2597034935
		{ &Z_Construct_UFunction_ATowerPlacementLocation_UpgradeTower, "UpgradeTower" }, // 1373161304
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerPlacementLocation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tower/TowerPlacementLocation.h" },
		{ "ModuleRelativePath", "Tower/TowerPlacementLocation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_TowerClassToSpawn_MetaData[] = {
		{ "Category", "Tower placement #cpp" },
		{ "ModuleRelativePath", "Tower/TowerPlacementLocation.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_TowerClassToSpawn = { "TowerClassToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerPlacementLocation, TowerClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDG_BaseTower_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_TowerClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_TowerClassToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_PlacementMesh_MetaData[] = {
		{ "Category", "Tower placement #cpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tower/TowerPlacementLocation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_PlacementMesh = { "PlacementMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerPlacementLocation, PlacementMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_PlacementMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_PlacementMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_RootCollider_MetaData[] = {
		{ "Category", "Tower placement #cpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tower/TowerPlacementLocation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_RootCollider = { "RootCollider", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerPlacementLocation, RootCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_RootCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_RootCollider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATowerPlacementLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_TowerClassToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_PlacementMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerPlacementLocation_Statics::NewProp_RootCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerPlacementLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerPlacementLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerPlacementLocation_Statics::ClassParams = {
		&ATowerPlacementLocation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATowerPlacementLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATowerPlacementLocation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATowerPlacementLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerPlacementLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerPlacementLocation()
	{
		if (!Z_Registration_Info_UClass_ATowerPlacementLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATowerPlacementLocation.OuterSingleton, Z_Construct_UClass_ATowerPlacementLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATowerPlacementLocation.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<ATowerPlacementLocation>()
	{
		return ATowerPlacementLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerPlacementLocation);
	ATowerPlacementLocation::~ATowerPlacementLocation() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TowerPlacementLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TowerPlacementLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATowerPlacementLocation, ATowerPlacementLocation::StaticClass, TEXT("ATowerPlacementLocation"), &Z_Registration_Info_UClass_ATowerPlacementLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowerPlacementLocation), 1254051810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TowerPlacementLocation_h_4048982645(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TowerPlacementLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TowerPlacementLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
