// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINECRAFT_Creeper_generated_h
#error "Creeper.generated.h already included, missing '#pragma once' in Creeper.h"
#endif
#define MINECRAFT_Creeper_generated_h

#define Minecraft_Source_Minecraft_Creeper_h_15_SPARSE_DATA
#define Minecraft_Source_Minecraft_Creeper_h_15_RPC_WRAPPERS
#define Minecraft_Source_Minecraft_Creeper_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Minecraft_Source_Minecraft_Creeper_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACreeper(); \
	friend struct Z_Construct_UClass_ACreeper_Statics; \
public: \
	DECLARE_CLASS(ACreeper, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ACreeper)


#define Minecraft_Source_Minecraft_Creeper_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACreeper(); \
	friend struct Z_Construct_UClass_ACreeper_Statics; \
public: \
	DECLARE_CLASS(ACreeper, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ACreeper)


#define Minecraft_Source_Minecraft_Creeper_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACreeper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACreeper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACreeper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACreeper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACreeper(ACreeper&&); \
	NO_API ACreeper(const ACreeper&); \
public:


#define Minecraft_Source_Minecraft_Creeper_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACreeper() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACreeper(ACreeper&&); \
	NO_API ACreeper(const ACreeper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACreeper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACreeper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACreeper)


#define Minecraft_Source_Minecraft_Creeper_h_15_PRIVATE_PROPERTY_OFFSET
#define Minecraft_Source_Minecraft_Creeper_h_12_PROLOG
#define Minecraft_Source_Minecraft_Creeper_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_Creeper_h_15_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_Creeper_h_15_SPARSE_DATA \
	Minecraft_Source_Minecraft_Creeper_h_15_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_Creeper_h_15_INCLASS \
	Minecraft_Source_Minecraft_Creeper_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_Creeper_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_Creeper_h_15_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_Creeper_h_15_SPARSE_DATA \
	Minecraft_Source_Minecraft_Creeper_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_Creeper_h_15_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_Creeper_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class ACreeper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_Creeper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
