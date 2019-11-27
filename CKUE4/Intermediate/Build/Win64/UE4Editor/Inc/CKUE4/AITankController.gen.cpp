// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CKUE4/AITankController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITankController() {}
// Cross Module References
	CKUE4_API UClass* Z_Construct_UClass_AAITankController_NoRegister();
	CKUE4_API UClass* Z_Construct_UClass_AAITankController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_CKUE4();
// End Cross Module References
	void AAITankController::StaticRegisterNativesAAITankController()
	{
	}
	UClass* Z_Construct_UClass_AAITankController_NoRegister()
	{
		return AAITankController::StaticClass();
	}
	struct Z_Construct_UClass_AAITankController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAITankController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_CKUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAITankController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AITankController.h" },
		{ "ModuleRelativePath", "AITankController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAITankController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAITankController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAITankController_Statics::ClassParams = {
		&AAITankController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAITankController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAITankController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAITankController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAITankController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAITankController, 806103895);
	template<> CKUE4_API UClass* StaticClass<AAITankController>()
	{
		return AAITankController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAITankController(Z_Construct_UClass_AAITankController, &AAITankController::StaticClass, TEXT("/Script/CKUE4"), TEXT("AAITankController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAITankController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
