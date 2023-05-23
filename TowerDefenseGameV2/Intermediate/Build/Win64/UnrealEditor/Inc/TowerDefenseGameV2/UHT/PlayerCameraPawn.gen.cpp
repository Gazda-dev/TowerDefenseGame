// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefenseGameV2/Gameplay/PlayerCameraPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_APlayerCameraPawn();
	TOWERDEFENSEGAMEV2_API UClass* Z_Construct_UClass_APlayerCameraPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefenseGameV2();
// End Cross Module References
	void APlayerCameraPawn::StaticRegisterNativesAPlayerCameraPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCameraPawn);
	UClass* Z_Construct_UClass_APlayerCameraPawn_NoRegister()
	{
		return APlayerCameraPawn::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCameraPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCameraPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenseGameV2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Gameplay/PlayerCameraPawn.h" },
		{ "ModuleRelativePath", "Gameplay/PlayerCameraPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_ClickAction_MetaData[] = {
		{ "Category", "Player #cpp" },
		{ "ModuleRelativePath", "Gameplay/PlayerCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_ClickAction = { "ClickAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraPawn, ClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_ClickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_ClickAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerMapping_MetaData[] = {
		{ "Category", "Player #cpp" },
		{ "ModuleRelativePath", "Gameplay/PlayerCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerMapping = { "PlayerMapping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraPawn, PlayerMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerSpringArm_MetaData[] = {
		{ "Category", "Player Components #cpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/PlayerCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerSpringArm = { "PlayerSpringArm", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraPawn, PlayerSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "Player Components #cpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/PlayerCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraPawn, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "Player Components #cpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/PlayerCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraPawn, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_RootSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_RootSceneComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCameraPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_ClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_PlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_RootSceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCameraPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCameraPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCameraPawn_Statics::ClassParams = {
		&APlayerCameraPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerCameraPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCameraPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCameraPawn()
	{
		if (!Z_Registration_Info_UClass_APlayerCameraPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCameraPawn.OuterSingleton, Z_Construct_UClass_APlayerCameraPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCameraPawn.OuterSingleton;
	}
	template<> TOWERDEFENSEGAMEV2_API UClass* StaticClass<APlayerCameraPawn>()
	{
		return APlayerCameraPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraPawn);
	APlayerCameraPawn::~APlayerCameraPawn() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_PlayerCameraPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_PlayerCameraPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCameraPawn, APlayerCameraPawn::StaticClass, TEXT("APlayerCameraPawn"), &Z_Registration_Info_UClass_APlayerCameraPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCameraPawn), 1289124221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_PlayerCameraPawn_h_3775138240(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_PlayerCameraPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Gameplay_PlayerCameraPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
