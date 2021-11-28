// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ABaseItem_CPP;
#ifdef MINECRAFT_DropManager_CPP_generated_h
#error "DropManager_CPP.generated.h already included, missing '#pragma once' in DropManager_CPP.h"
#endif
#define MINECRAFT_DropManager_CPP_generated_h

#define Minecraft_Source_Minecraft_DropManager_CPP_h_21_SPARSE_DATA
#define Minecraft_Source_Minecraft_DropManager_CPP_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnItemFromClass); \
	DECLARE_FUNCTION(execSpawnItemFromType);


#define Minecraft_Source_Minecraft_DropManager_CPP_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnItemFromClass); \
	DECLARE_FUNCTION(execSpawnItemFromType);


#define Minecraft_Source_Minecraft_DropManager_CPP_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADropManager_CPP(); \
	friend struct Z_Construct_UClass_ADropManager_CPP_Statics; \
public: \
	DECLARE_CLASS(ADropManager_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ADropManager_CPP)


#define Minecraft_Source_Minecraft_DropManager_CPP_h_21_INCLASS \
private: \
	static void StaticRegisterNativesADropManager_CPP(); \
	friend struct Z_Construct_UClass_ADropManager_CPP_Statics; \
public: \
	DECLARE_CLASS(ADropManager_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ADropManager_CPP)


#define Minecraft_Source_Minecraft_DropManager_CPP_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADropManager_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADropManager_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADropManager_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADropManager_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADropManager_CPP(ADropManager_CPP&&); \
	NO_API ADropManager_CPP(const ADropManager_CPP&); \
public:


#define Minecraft_Source_Minecraft_DropManager_CPP_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADropManager_CPP(ADropManager_CPP&&); \
	NO_API ADropManager_CPP(const ADropManager_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADropManager_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADropManager_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADropManager_CPP)


#define Minecraft_Source_Minecraft_DropManager_CPP_h_21_PRIVATE_PROPERTY_OFFSET
#define Minecraft_Source_Minecraft_DropManager_CPP_h_18_PROLOG
#define Minecraft_Source_Minecraft_DropManager_CPP_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_DropManager_CPP_h_21_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_DropManager_CPP_h_21_SPARSE_DATA \
	Minecraft_Source_Minecraft_DropManager_CPP_h_21_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_DropManager_CPP_h_21_INCLASS \
	Minecraft_Source_Minecraft_DropManager_CPP_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_DropManager_CPP_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_DropManager_CPP_h_21_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_DropManager_CPP_h_21_SPARSE_DATA \
	Minecraft_Source_Minecraft_DropManager_CPP_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_DropManager_CPP_h_21_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_DropManager_CPP_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class ADropManager_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_DropManager_CPP_h


#define FOREACH_ENUM_ESPAWN_ITEM_TYPE(op) \
	op(SPAWN_NONE) \
	op(SPAWN_BLOCK) \
	op(SPAWN_TOOL) \
	op(SPAWN_MISC) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
