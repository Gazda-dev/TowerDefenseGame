// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGame/Public/Tower/TowerProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerProjectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ATowerProjectile();
	TOWERDEFENSEGAME_API UClass* Z_Construct_UClass_ATowerProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGame();
// End Cross Module References
	DEFINE_FUNCTION(ATowerProjectile::execSetDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamage(Z_Param_NewDamage);
		P_NATIVE_END;
	}
	void ATowerProjectile::StaticRegisterNativesATowerProjectile()
	{
		UClass* Class = ATowerProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDamage", &ATowerProjectile::execSetDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics
	{
		struct TowerProjectile_eventSetDamage_Parms
		{
			int32 NewDamage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics::NewProp_NewDamage = { "NewDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TowerProjectile_eventSetDamage_Parms, NewDamage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics::NewProp_NewDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile #cpp" },
		{ "ModuleRelativePath", "Public/Tower/TowerProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerProjectile, nullptr, "SetDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics::TowerProjectile_eventSetDamage_Parms), Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerProjectile_SetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATowerProjectile_SetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATowerProjectile);
	UClass* Z_Construct_UClass_ATowerProjectile_NoRegister()
	{
		return ATowerProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ATowerProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATowerProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATowerProjectile_SetDamage, "SetDamage" }, // 3225769619
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tower/TowerProjectile.h" },
		{ "ModuleRelativePath", "Public/Tower/TowerProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerProjectile_Statics::NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "Projectile #cpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tower/TowerProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerProjectile_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerProjectile, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerProjectile_Statics::NewProp_ProjectileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerProjectile_Statics::NewProp_ProjectileMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerProjectile_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Projectile #cpp" },
		{ "ModuleRelativePath", "Public/Tower/TowerProjectile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATowerProjectile_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerProjectile, Damage), METADATA_PARAMS(Z_Construct_UClass_ATowerProjectile_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerProjectile_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATowerProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerProjectile_Statics::NewProp_ProjectileMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerProjectile_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerProjectile_Statics::ClassParams = {
		&ATowerProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATowerProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATowerProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATowerProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerProjectile()
	{
		if (!Z_Registration_Info_UClass_ATowerProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATowerProjectile.OuterSingleton, Z_Construct_UClass_ATowerProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATowerProjectile.OuterSingleton;
	}
	template<> TOWERDEFENSEGAME_API UClass* StaticClass<ATowerProjectile>()
	{
		return ATowerProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerProjectile);
	ATowerProjectile::~ATowerProjectile() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_TowerProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_TowerProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATowerProjectile, ATowerProjectile::StaticClass, TEXT("ATowerProjectile"), &Z_Registration_Info_UClass_ATowerProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowerProjectile), 3356277623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_TowerProjectile_h_3690741952(TEXT("/Script/TowerDefenseGame"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_TowerProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGame_Source_TowerDefenseGame_Public_Tower_TowerProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
