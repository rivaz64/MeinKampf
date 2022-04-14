// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseItem_CPP;
class AMinecraftCharacter;
#ifdef MINECRAFT_Inventory_W_CPP_generated_h
#error "Inventory_W_CPP.generated.h already included, missing '#pragma once' in Inventory_W_CPP.h"
#endif
#define MINECRAFT_Inventory_W_CPP_generated_h

#define Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_SPARSE_DATA
#define Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSlotItemC); \
	DECLARE_FUNCTION(execSubstractSlotItemC); \
	DECLARE_FUNCTION(execAddSlotItemC); \
	DECLARE_FUNCTION(execSubstractItemC); \
	DECLARE_FUNCTION(execAddItemC); \
	DECLARE_FUNCTION(execUpdateItems); \
	DECLARE_FUNCTION(execSetOwnerPlayer); \
	DECLARE_FUNCTION(execSubstractItem); \
	DECLARE_FUNCTION(execAddItemR); \
	DECLARE_FUNCTION(execAddItem);


#define Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSlotItemC); \
	DECLARE_FUNCTION(execSubstractSlotItemC); \
	DECLARE_FUNCTION(execAddSlotItemC); \
	DECLARE_FUNCTION(execSubstractItemC); \
	DECLARE_FUNCTION(execAddItemC); \
	DECLARE_FUNCTION(execUpdateItems); \
	DECLARE_FUNCTION(execSetOwnerPlayer); \
	DECLARE_FUNCTION(execSubstractItem); \
	DECLARE_FUNCTION(execAddItemR); \
	DECLARE_FUNCTION(execAddItem);


#define Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory_W_CPP(); \
	friend struct Z_Construct_UClass_UInventory_W_CPP_Statics; \
public: \
	DECLARE_CLASS(UInventory_W_CPP, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(UInventory_W_CPP)


#define Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInventory_W_CPP(); \
	friend struct Z_Construct_UClass_UInventory_W_CPP_Statics; \
public: \
	DECLARE_CLASS(UInventory_W_CPP, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(UInventory_W_CPP)


#define Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory_W_CPP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory_W_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory_W_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory_W_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory_W_CPP(UInventory_W_CPP&&); \
	NO_API UInventory_W_CPP(const UInventory_W_CPP&); \
public:


#define Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory_W_CPP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory_W_CPP(UInventory_W_CPP&&); \
	NO_API UInventory_W_CPP(const UInventory_W_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory_W_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory_W_CPP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory_W_CPP)


#define Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_PRIVATE_PROPERTY_OFFSET
#define Minecraft_Source_Minecraft_Inventory_W_CPP_h_12_PROLOG
#define Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_SPARSE_DATA \
	Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_INCLASS \
	Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_SPARSE_DATA \
	Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_Inventory_W_CPP_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class UInventory_W_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_Inventory_W_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS