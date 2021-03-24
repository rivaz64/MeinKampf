// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseItem_CPP;
#ifdef MINECRAFT_ItemBar_W_CPP_generated_h
#error "ItemBar_W_CPP.generated.h already included, missing '#pragma once' in ItemBar_W_CPP.h"
#endif
#define MINECRAFT_ItemBar_W_CPP_generated_h

#define respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_SPARSE_DATA
#define respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateItems); \
	DECLARE_FUNCTION(execSubstractItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execSetSelected);


#define respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateItems); \
	DECLARE_FUNCTION(execSubstractItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execSetSelected);


#define respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemBar_W_CPP(); \
	friend struct Z_Construct_UClass_UItemBar_W_CPP_Statics; \
public: \
	DECLARE_CLASS(UItemBar_W_CPP, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(UItemBar_W_CPP)


#define respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUItemBar_W_CPP(); \
	friend struct Z_Construct_UClass_UItemBar_W_CPP_Statics; \
public: \
	DECLARE_CLASS(UItemBar_W_CPP, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(UItemBar_W_CPP)


#define respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemBar_W_CPP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemBar_W_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemBar_W_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemBar_W_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemBar_W_CPP(UItemBar_W_CPP&&); \
	NO_API UItemBar_W_CPP(const UItemBar_W_CPP&); \
public:


#define respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemBar_W_CPP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemBar_W_CPP(UItemBar_W_CPP&&); \
	NO_API UItemBar_W_CPP(const UItemBar_W_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemBar_W_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemBar_W_CPP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemBar_W_CPP)


#define respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_PRIVATE_PROPERTY_OFFSET
#define respaldo_Source_Minecraft_ItemBar_W_CPP_h_12_PROLOG
#define respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_PRIVATE_PROPERTY_OFFSET \
	respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_SPARSE_DATA \
	respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_RPC_WRAPPERS \
	respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_INCLASS \
	respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_PRIVATE_PROPERTY_OFFSET \
	respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_SPARSE_DATA \
	respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_INCLASS_NO_PURE_DECLS \
	respaldo_Source_Minecraft_ItemBar_W_CPP_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class UItemBar_W_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID respaldo_Source_Minecraft_ItemBar_W_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
