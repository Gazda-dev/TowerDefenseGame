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
	DEFINE_FUNCTION(AEnemy1::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	void AEnemy1::StaticRegisterNativesAEnemy1()
	{
		UClass* Class = AEnemy1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthPercent", &AEnemy1::execGetHealthPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics
	{
		struct Enemy1_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Enemy1_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/Enemy1.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy1, nullptr, "GetHealthPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics::Enemy1_eventGetHealthPercent_Parms), Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy1_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy1_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy1);
	UClass* Z_Construct_UClass_AEnemy1_NoRegister()
	{
		return AEnemy1::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy1_GetHealthPercent, "GetHealthPercent" }, // 3917685413
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AEnemy1, AEnemy1::StaticClass, TEXT("AEnemy1"), &Z_Registration_Info_UClass_AEnemy1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy1), 4116118628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_Enemy1_h_2823014151(TEXT("/Script/TowerDefenseGameV2"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_Enemy1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TowerDefenseGame_TowerDefenseGameV2_Source_TowerDefenseGameV2_Enemies_Enemy1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
