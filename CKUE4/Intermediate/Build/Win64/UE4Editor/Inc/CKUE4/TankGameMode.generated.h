// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CKUE4_TankGameMode_generated_h
#error "TankGameMode.generated.h already included, missing '#pragma once' in TankGameMode.h"
#endif
#define CKUE4_TankGameMode_generated_h

#define CKUE4_Source_CKUE4_TankGameMode_h_15_RPC_WRAPPERS
#define CKUE4_Source_CKUE4_TankGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CKUE4_Source_CKUE4_TankGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankGameMode(); \
	friend struct Z_Construct_UClass_ATankGameMode_Statics; \
public: \
	DECLARE_CLASS(ATankGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CKUE4"), NO_API) \
	DECLARE_SERIALIZER(ATankGameMode)


#define CKUE4_Source_CKUE4_TankGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATankGameMode(); \
	friend struct Z_Construct_UClass_ATankGameMode_Statics; \
public: \
	DECLARE_CLASS(ATankGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CKUE4"), NO_API) \
	DECLARE_SERIALIZER(ATankGameMode)


#define CKUE4_Source_CKUE4_TankGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameMode(ATankGameMode&&); \
	NO_API ATankGameMode(const ATankGameMode&); \
public:


#define CKUE4_Source_CKUE4_TankGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameMode(ATankGameMode&&); \
	NO_API ATankGameMode(const ATankGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankGameMode)


#define CKUE4_Source_CKUE4_TankGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define CKUE4_Source_CKUE4_TankGameMode_h_12_PROLOG
#define CKUE4_Source_CKUE4_TankGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CKUE4_Source_CKUE4_TankGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	CKUE4_Source_CKUE4_TankGameMode_h_15_RPC_WRAPPERS \
	CKUE4_Source_CKUE4_TankGameMode_h_15_INCLASS \
	CKUE4_Source_CKUE4_TankGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CKUE4_Source_CKUE4_TankGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CKUE4_Source_CKUE4_TankGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	CKUE4_Source_CKUE4_TankGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CKUE4_Source_CKUE4_TankGameMode_h_15_INCLASS_NO_PURE_DECLS \
	CKUE4_Source_CKUE4_TankGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CKUE4_API UClass* StaticClass<class ATankGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CKUE4_Source_CKUE4_TankGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
