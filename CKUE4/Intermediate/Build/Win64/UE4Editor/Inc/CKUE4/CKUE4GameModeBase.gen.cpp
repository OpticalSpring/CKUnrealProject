// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CKUE4/CKUE4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCKUE4GameModeBase() {}
// Cross Module References
	CKUE4_API UClass* Z_Construct_UClass_ACKUE4GameModeBase_NoRegister();
	CKUE4_API UClass* Z_Construct_UClass_ACKUE4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CKUE4();
// End Cross Module References
	void ACKUE4GameModeBase::StaticRegisterNativesACKUE4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACKUE4GameModeBase_NoRegister()
	{
		return ACKUE4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACKUE4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACKUE4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CKUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACKUE4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CKUE4GameModeBase.h" },
		{ "ModuleRelativePath", "CKUE4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACKUE4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACKUE4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACKUE4GameModeBase_Statics::ClassParams = {
		&ACKUE4GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACKUE4GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACKUE4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACKUE4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACKUE4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACKUE4GameModeBase, 2077197282);
	template<> CKUE4_API UClass* StaticClass<ACKUE4GameModeBase>()
	{
		return ACKUE4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACKUE4GameModeBase(Z_Construct_UClass_ACKUE4GameModeBase, &ACKUE4GameModeBase::StaticClass, TEXT("/Script/CKUE4"), TEXT("ACKUE4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACKUE4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
