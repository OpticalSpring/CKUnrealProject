// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CKUE4/BTTask_Attack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Attack() {}
// Cross Module References
	CKUE4_API UClass* Z_Construct_UClass_UBTTask_Attack_NoRegister();
	CKUE4_API UClass* Z_Construct_UClass_UBTTask_Attack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_CKUE4();
// End Cross Module References
	void UBTTask_Attack::StaticRegisterNativesUBTTask_Attack()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_Attack_NoRegister()
	{
		return UBTTask_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CKUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Attack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_Attack.h" },
		{ "ModuleRelativePath", "BTTask_Attack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Attack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Attack_Statics::ClassParams = {
		&UBTTask_Attack::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Attack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Attack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_Attack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_Attack, 3688178094);
	template<> CKUE4_API UClass* StaticClass<UBTTask_Attack>()
	{
		return UBTTask_Attack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_Attack(Z_Construct_UClass_UBTTask_Attack, &UBTTask_Attack::StaticClass, TEXT("/Script/CKUE4"), TEXT("UBTTask_Attack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Attack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
