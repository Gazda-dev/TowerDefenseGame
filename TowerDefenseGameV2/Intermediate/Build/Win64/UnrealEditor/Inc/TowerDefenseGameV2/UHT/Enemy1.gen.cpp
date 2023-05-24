// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Enemies/Enemy1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy1() {}
// Cross Module References
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ABasicEnemy();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_AEnemy1();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_AEnemy1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	void AEnemy1::StaticRegisterNativesAEnemy1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy1);
	UClass* Z_Construct_UClass_AEnemy1_NoRegister()
	{
		return AEnemy1::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/Enemy1.h" },
		{ "ModuleRelativePath", "Enemies/Enemy1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy1_Statics::ClassParams = {
		&AEnemy1::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy1()
	{
		if (!Z_Registration_Info_UClass_AEnemy1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy1.OuterSingleton, Z_Construct_UClass_AEnemy1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy1.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<AEnemy1>()
	{
		return AEnemy1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy1);
	AEnemy1::~AEnemy1() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_Enemy1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_Enemy1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy1, AEnemy1::StaticClass, TEXT("AEnemy1"), &Z_Registration_Info_UClass_AEnemy1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy1), 120969706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_Enemy1_h_4013406384(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_Enemy1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_Enemy1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
