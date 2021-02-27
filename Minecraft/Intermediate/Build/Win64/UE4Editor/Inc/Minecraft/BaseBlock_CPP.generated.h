// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINECRAFT_BaseBlock_CPP_generated_h
#error "BaseBlock_CPP.generated.h already included, missing '#pragma once' in BaseBlock_CPP.h"
#endif
#define MINECRAFT_BaseBlock_CPP_generated_h

#define Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_SPARSE_DATA
#define Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_RPC_WRAPPERS
#define Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseBlock_CPP(); \
	friend struct Z_Construct_UClass_ABaseBlock_CPP_Statics; \
public: \
	DECLARE_CLASS(ABaseBlock_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ABaseBlock_CPP)


#define Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_INCLASS \
private: \
	static void StaticRegisterNativesABaseBlock_CPP(); \
	friend struct Z_Construct_UClass_ABaseBlock_CPP_Statics; \
public: \
	DECLARE_CLASS(ABaseBlock_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ABaseBlock_CPP)


#define Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseBlock_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseBlock_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBlock_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBlock_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseBlock_CPP(ABaseBlock_CPP&&); \
	NO_API ABaseBlock_CPP(const ABaseBlock_CPP&); \
public:


#define Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseBlock_CPP(ABaseBlock_CPP&&); \
	NO_API ABaseBlock_CPP(const ABaseBlock_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBlock_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBlock_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseBlock_CPP)


#define Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_PRIVATE_PROPERTY_OFFSET
#define Minecraft_Source_Minecraft_BaseBlock_CPP_h_23_PROLOG
#define Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_SPARSE_DATA \
	Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_INCLASS \
	Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_SPARSE_DATA \
	Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_BaseBlock_CPP_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class ABaseBlock_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_BaseBlock_CPP_h


#define FOREACH_ENUM_EBLOCK_TYPES(op) \
	op(SOLID) \
	op(LIQUID) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
