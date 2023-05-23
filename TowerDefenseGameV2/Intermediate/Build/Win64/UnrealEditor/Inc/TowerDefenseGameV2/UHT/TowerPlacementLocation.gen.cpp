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
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATowerPlacementLocation();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATowerPlacementLocation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	void ATowerPlacementLocation::StaticRegisterNativesATowerPlacementLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATowerPlacementLocation);
	UClass* Z_Construct_UClass_ATowerPlacementLocation_NoRegister()
	{
		return ATowerPlacementLocation::StaticClass();
	}
	struct Z_Construct_UClass_ATowerPlacementLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerPlacementLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerPlacementLocation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tower/TowerPlacementLocation.h" },
		{ "ModuleRelativePath", "Tower/TowerPlacementLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerPlacementLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerPlacementLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerPlacementLocation_Statics::ClassParams = {
		&ATowerPlacementLocation::StaticClass,
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
		{ Z_Construct_UClass_ATowerPlacementLocation, ATowerPlacementLocation::StaticClass, TEXT("ATowerPlacementLocation"), &Z_Registration_Info_UClass_ATowerPlacementLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowerPlacementLocation), 2633316896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TowerPlacementLocation_h_2060958749(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TowerPlacementLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Tower_TowerPlacementLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
