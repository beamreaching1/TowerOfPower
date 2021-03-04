// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWEROFPOWER_Golem_generated_h
#error "Golem.generated.h already included, missing '#pragma once' in Golem.h"
#endif
#define TOWEROFPOWER_Golem_generated_h

#define TowerOfPower_Source_TowerOfPower_Golem_h_12_SPARSE_DATA
#define TowerOfPower_Source_TowerOfPower_Golem_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execStrafe); \
	DECLARE_FUNCTION(execMoveForward);


#define TowerOfPower_Source_TowerOfPower_Golem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execStrafe); \
	DECLARE_FUNCTION(execMoveForward);


#define TowerOfPower_Source_TowerOfPower_Golem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGolem(); \
	friend struct Z_Construct_UClass_AGolem_Statics; \
public: \
	DECLARE_CLASS(AGolem, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerOfPower"), NO_API) \
	DECLARE_SERIALIZER(AGolem)


#define TowerOfPower_Source_TowerOfPower_Golem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGolem(); \
	friend struct Z_Construct_UClass_AGolem_Statics; \
public: \
	DECLARE_CLASS(AGolem, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerOfPower"), NO_API) \
	DECLARE_SERIALIZER(AGolem)


#define TowerOfPower_Source_TowerOfPower_Golem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGolem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGolem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGolem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGolem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGolem(AGolem&&); \
	NO_API AGolem(const AGolem&); \
public:


#define TowerOfPower_Source_TowerOfPower_Golem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGolem(AGolem&&); \
	NO_API AGolem(const AGolem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGolem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGolem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGolem)


#define TowerOfPower_Source_TowerOfPower_Golem_h_12_PRIVATE_PROPERTY_OFFSET
#define TowerOfPower_Source_TowerOfPower_Golem_h_10_PROLOG
#define TowerOfPower_Source_TowerOfPower_Golem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerOfPower_Source_TowerOfPower_Golem_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerOfPower_Source_TowerOfPower_Golem_h_12_SPARSE_DATA \
	TowerOfPower_Source_TowerOfPower_Golem_h_12_RPC_WRAPPERS \
	TowerOfPower_Source_TowerOfPower_Golem_h_12_INCLASS \
	TowerOfPower_Source_TowerOfPower_Golem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerOfPower_Source_TowerOfPower_Golem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerOfPower_Source_TowerOfPower_Golem_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerOfPower_Source_TowerOfPower_Golem_h_12_SPARSE_DATA \
	TowerOfPower_Source_TowerOfPower_Golem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerOfPower_Source_TowerOfPower_Golem_h_12_INCLASS_NO_PURE_DECLS \
	TowerOfPower_Source_TowerOfPower_Golem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWEROFPOWER_API UClass* StaticClass<class AGolem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerOfPower_Source_TowerOfPower_Golem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
