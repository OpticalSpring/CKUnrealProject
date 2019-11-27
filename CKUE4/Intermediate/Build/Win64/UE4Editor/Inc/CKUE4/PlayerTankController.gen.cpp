// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CKUE4/PlayerTankController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerTankController() {}
// Cross Module References
	CKUE4_API UClass* Z_Construct_UClass_APlayerTankController_NoRegister();
	CKUE4_API UClass* Z_Construct_UClass_APlayerTankController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CKUE4();
// End Cross Module References
	void APlayerTankController::StaticRegisterNativesAPlayerTankController()
	{
	}
	UClass* Z_Construct_UClass_APlayerTankController_NoRegister()
	{
		return APlayerTankController::StaticClass();
	}
	struct Z_Construct_UClass_APlayerTankController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerTankController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CKUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTankController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerTankController.h" },
		{ "ModuleRelativePath", "PlayerTankController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerTankController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerTankController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerTankController_Statics::ClassParams = {
		&APlayerTankController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerTankController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerTankController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerTankController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerTankController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerTankController, 1529450746);
	template<> CKUE4_API UClass* StaticClass<APlayerTankController>()
	{
		return APlayerTankController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerTankController(Z_Construct_UClass_APlayerTankController, &APlayerTankController::StaticClass, TEXT("/Script/CKUE4"), TEXT("APlayerTankController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerTankController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
