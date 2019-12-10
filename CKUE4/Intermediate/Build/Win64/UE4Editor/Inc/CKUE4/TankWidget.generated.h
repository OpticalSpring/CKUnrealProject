// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CKUE4_TankWidget_generated_h
#error "TankWidget.generated.h already included, missing '#pragma once' in TankWidget.h"
#endif
#define CKUE4_TankWidget_generated_h

#define CKUE4_Source_CKUE4_TankWidget_h_15_RPC_WRAPPERS
#define CKUE4_Source_CKUE4_TankWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CKUE4_Source_CKUE4_TankWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankWidget(); \
	friend struct Z_Construct_UClass_UTankWidget_Statics; \
public: \
	DECLARE_CLASS(UTankWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CKUE4"), NO_API) \
	DECLARE_SERIALIZER(UTankWidget)


#define CKUE4_Source_CKUE4_TankWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTankWidget(); \
	friend struct Z_Construct_UClass_UTankWidget_Statics; \
public: \
	DECLARE_CLASS(UTankWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CKUE4"), NO_API) \
	DECLARE_SERIALIZER(UTankWidget)


#define CKUE4_Source_CKUE4_TankWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankWidget(UTankWidget&&); \
	NO_API UTankWidget(const UTankWidget&); \
public:


#define CKUE4_Source_CKUE4_TankWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankWidget(UTankWidget&&); \
	NO_API UTankWidget(const UTankWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankWidget)


#define CKUE4_Source_CKUE4_TankWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define CKUE4_Source_CKUE4_TankWidget_h_12_PROLOG
#define CKUE4_Source_CKUE4_TankWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CKUE4_Source_CKUE4_TankWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	CKUE4_Source_CKUE4_TankWidget_h_15_RPC_WRAPPERS \
	CKUE4_Source_CKUE4_TankWidget_h_15_INCLASS \
	CKUE4_Source_CKUE4_TankWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CKUE4_Source_CKUE4_TankWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CKUE4_Source_CKUE4_TankWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	CKUE4_Source_CKUE4_TankWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CKUE4_Source_CKUE4_TankWidget_h_15_INCLASS_NO_PURE_DECLS \
	CKUE4_Source_CKUE4_TankWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CKUE4_API UClass* StaticClass<class UTankWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CKUE4_Source_CKUE4_TankWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
