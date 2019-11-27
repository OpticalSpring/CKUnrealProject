// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CKUE4_AITankController_generated_h
#error "AITankController.generated.h already included, missing '#pragma once' in AITankController.h"
#endif
#define CKUE4_AITankController_generated_h

#define CKUE4_Source_CKUE4_AITankController_h_15_RPC_WRAPPERS
#define CKUE4_Source_CKUE4_AITankController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CKUE4_Source_CKUE4_AITankController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAITankController(); \
	friend struct Z_Construct_UClass_AAITankController_Statics; \
public: \
	DECLARE_CLASS(AAITankController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CKUE4"), NO_API) \
	DECLARE_SERIALIZER(AAITankController)


#define CKUE4_Source_CKUE4_AITankController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAITankController(); \
	friend struct Z_Construct_UClass_AAITankController_Statics; \
public: \
	DECLARE_CLASS(AAITankController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CKUE4"), NO_API) \
	DECLARE_SERIALIZER(AAITankController)


#define CKUE4_Source_CKUE4_AITankController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAITankController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAITankController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAITankController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAITankController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAITankController(AAITankController&&); \
	NO_API AAITankController(const AAITankController&); \
public:


#define CKUE4_Source_CKUE4_AITankController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAITankController(AAITankController&&); \
	NO_API AAITankController(const AAITankController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAITankController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAITankController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAITankController)


#define CKUE4_Source_CKUE4_AITankController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BTAsset() { return STRUCT_OFFSET(AAITankController, BTAsset); } \
	FORCEINLINE static uint32 __PPO__BBAsset() { return STRUCT_OFFSET(AAITankController, BBAsset); }


#define CKUE4_Source_CKUE4_AITankController_h_12_PROLOG
#define CKUE4_Source_CKUE4_AITankController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CKUE4_Source_CKUE4_AITankController_h_15_PRIVATE_PROPERTY_OFFSET \
	CKUE4_Source_CKUE4_AITankController_h_15_RPC_WRAPPERS \
	CKUE4_Source_CKUE4_AITankController_h_15_INCLASS \
	CKUE4_Source_CKUE4_AITankController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CKUE4_Source_CKUE4_AITankController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CKUE4_Source_CKUE4_AITankController_h_15_PRIVATE_PROPERTY_OFFSET \
	CKUE4_Source_CKUE4_AITankController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CKUE4_Source_CKUE4_AITankController_h_15_INCLASS_NO_PURE_DECLS \
	CKUE4_Source_CKUE4_AITankController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CKUE4_API UClass* StaticClass<class AAITankController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CKUE4_Source_CKUE4_AITankController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
