// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Gameplay/TDG_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDG_PlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_PlayerController();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_ATDG_PlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	void ATDG_PlayerController::StaticRegisterNativesATDG_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDG_PlayerController);
	UClass* Z_Construct_UClass_ATDG_PlayerController_NoRegister()
	{
		return ATDG_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATDG_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDG_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDG_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Gameplay/TDG_PlayerController.h" },
		{ "ModuleRelativePath", "Gameplay/TDG_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDG_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDG_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDG_PlayerController_Statics::ClassParams = {
		&ATDG_PlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDG_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDG_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDG_PlayerController()
	{
		if (!Z_Registration_Info_UClass_ATDG_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDG_PlayerController.OuterSingleton, Z_Construct_UClass_ATDG_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDG_PlayerController.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<ATDG_PlayerController>()
	{
		return ATDG_PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDG_PlayerController);
	ATDG_PlayerController::~ATDG_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_TDG_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_TDG_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDG_PlayerController, ATDG_PlayerController::StaticClass, TEXT("ATDG_PlayerController"), &Z_Registration_Info_UClass_ATDG_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDG_PlayerController), 4226794340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_TDG_PlayerController_h_1904890832(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_TDG_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_TDG_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
