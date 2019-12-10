// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CKUE4_TankCharacter_generated_h
#error "TankCharacter.generated.h already included, missing '#pragma once' in TankCharacter.h"
#endif
#define CKUE4_TankCharacter_generated_h

#define CKUE4_Source_CKUE4_TankCharacter_h_14_RPC_WRAPPERS
#define CKUE4_Source_CKUE4_TankCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define CKUE4_Source_CKUE4_TankCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankCharacter(); \
	friend struct Z_Construct_UClass_ATankCharacter_Statics; \
public: \
	DECLARE_CLASS(ATankCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CKUE4"), NO_API) \
	DECLARE_SERIALIZER(ATankCharacter)


#define CKUE4_Source_CKUE4_TankCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATankCharacter(); \
	friend struct Z_Construct_UClass_ATankCharacter_Statics; \
public: \
	DECLARE_CLASS(ATankCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CKUE4"), NO_API) \
	DECLARE_SERIALIZER(ATankCharacter)


#define CKUE4_Source_CKUE4_TankCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankCharacter(ATankCharacter&&); \
	NO_API ATankCharacter(const ATankCharacter&); \
public:


#define CKUE4_Source_CKUE4_TankCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankCharacter(ATankCharacter&&); \
	NO_API ATankCharacter(const ATankCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankCharacter)


#define CKUE4_Source_CKUE4_TankCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define CKUE4_Source_CKUE4_TankCharacter_h_11_PROLOG
#define CKUE4_Source_CKUE4_TankCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CKUE4_Source_CKUE4_TankCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	CKUE4_Source_CKUE4_TankCharacter_h_14_RPC_WRAPPERS \
	CKUE4_Source_CKUE4_TankCharacter_h_14_INCLASS \
	CKUE4_Source_CKUE4_TankCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CKUE4_Source_CKUE4_TankCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CKUE4_Source_CKUE4_TankCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	CKUE4_Source_CKUE4_TankCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CKUE4_Source_CKUE4_TankCharacter_h_14_INCLASS_NO_PURE_DECLS \
	CKUE4_Source_CKUE4_TankCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CKUE4_API UClass* StaticClass<class ATankCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CKUE4_Source_CKUE4_TankCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
