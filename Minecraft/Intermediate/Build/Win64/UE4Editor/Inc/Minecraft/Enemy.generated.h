// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINECRAFT_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define MINECRAFT_Enemy_generated_h

#define Minecraft_Source_Minecraft_Enemy_h_15_SPARSE_DATA
#define Minecraft_Source_Minecraft_Enemy_h_15_RPC_WRAPPERS
#define Minecraft_Source_Minecraft_Enemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Minecraft_Source_Minecraft_Enemy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, Amob, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Minecraft_Source_Minecraft_Enemy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, Amob, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Minecraft_Source_Minecraft_Enemy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define Minecraft_Source_Minecraft_Enemy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define Minecraft_Source_Minecraft_Enemy_h_15_PRIVATE_PROPERTY_OFFSET
#define Minecraft_Source_Minecraft_Enemy_h_12_PROLOG
#define Minecraft_Source_Minecraft_Enemy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_Enemy_h_15_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_Enemy_h_15_SPARSE_DATA \
	Minecraft_Source_Minecraft_Enemy_h_15_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_Enemy_h_15_INCLASS \
	Minecraft_Source_Minecraft_Enemy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_Enemy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_Enemy_h_15_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_Enemy_h_15_SPARSE_DATA \
	Minecraft_Source_Minecraft_Enemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_Enemy_h_15_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_Enemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
