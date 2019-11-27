// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CKUE4/TankCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankCharacter() {}
// Cross Module References
	CKUE4_API UClass* Z_Construct_UClass_ATankCharacter_NoRegister();
	CKUE4_API UClass* Z_Construct_UClass_ATankCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CKUE4();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATankCharacter::StaticRegisterNativesATankCharacter()
	{
	}
	UClass* Z_Construct_UClass_ATankCharacter_NoRegister()
	{
		return ATankCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATankCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Turret_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Turret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightWheel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightWheel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftWheel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftWheel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CKUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TankCharacter.h" },
		{ "ModuleRelativePath", "TankCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankCharacter_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankCharacter_Statics::NewProp_SpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankCharacter_Statics::NewProp_Turret_MetaData[] = {
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankCharacter_Statics::NewProp_Turret = { "Turret", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankCharacter, Turret), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankCharacter_Statics::NewProp_Turret_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankCharacter_Statics::NewProp_Turret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankCharacter_Statics::NewProp_RightWheel_MetaData[] = {
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankCharacter_Statics::NewProp_RightWheel = { "RightWheel", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankCharacter, RightWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankCharacter_Statics::NewProp_RightWheel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankCharacter_Statics::NewProp_RightWheel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankCharacter_Statics::NewProp_LeftWheel_MetaData[] = {
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankCharacter_Statics::NewProp_LeftWheel = { "LeftWheel", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankCharacter, LeftWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankCharacter_Statics::NewProp_LeftWheel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankCharacter_Statics::NewProp_LeftWheel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankCharacter_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankCharacter_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankCharacter, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankCharacter_Statics::NewProp_Body_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankCharacter_Statics::NewProp_Body_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankCharacter_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankCharacter_Statics::NewProp_Turret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankCharacter_Statics::NewProp_RightWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankCharacter_Statics::NewProp_LeftWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankCharacter_Statics::NewProp_Body,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankCharacter_Statics::ClassParams = {
		&ATankCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATankCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATankCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATankCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATankCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankCharacter, 2098016600);
	template<> CKUE4_API UClass* StaticClass<ATankCharacter>()
	{
		return ATankCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankCharacter(Z_Construct_UClass_ATankCharacter, &ATankCharacter::StaticClass, TEXT("/Script/CKUE4"), TEXT("ATankCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
