// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CKUE4/TankGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankGameMode() {}
// Cross Module References
	CKUE4_API UClass* Z_Construct_UClass_ATankGameMode_NoRegister();
	CKUE4_API UClass* Z_Construct_UClass_ATankGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CKUE4();
// End Cross Module References
	void ATankGameMode::StaticRegisterNativesATankGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATankGameMode_NoRegister()
	{
		return ATankGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATankGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CKUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankGameMode.h" },
		{ "ModuleRelativePath", "TankGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankGameMode_Statics::ClassParams = {
		&ATankGameMode::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATankGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATankGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankGameMode, 3840121441);
	template<> CKUE4_API UClass* StaticClass<ATankGameMode>()
	{
		return ATankGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankGameMode(Z_Construct_UClass_ATankGameMode, &ATankGameMode::StaticClass, TEXT("/Script/CKUE4"), TEXT("ATankGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
