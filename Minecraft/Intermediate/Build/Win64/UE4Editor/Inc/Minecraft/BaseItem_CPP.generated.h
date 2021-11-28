// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINECRAFT_BaseItem_CPP_generated_h
#error "BaseItem_CPP.generated.h already included, missing '#pragma once' in BaseItem_CPP.h"
#endif
#define MINECRAFT_BaseItem_CPP_generated_h

#define Minecraft_Source_Minecraft_BaseItem_CPP_h_45_SPARSE_DATA
#define Minecraft_Source_Minecraft_BaseItem_CPP_h_45_RPC_WRAPPERS
#define Minecraft_Source_Minecraft_BaseItem_CPP_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define Minecraft_Source_Minecraft_BaseItem_CPP_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseItem_CPP(); \
	friend struct Z_Construct_UClass_ABaseItem_CPP_Statics; \
public: \
	DECLARE_CLASS(ABaseItem_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem_CPP)


#define Minecraft_Source_Minecraft_BaseItem_CPP_h_45_INCLASS \
private: \
	static void StaticRegisterNativesABaseItem_CPP(); \
	friend struct Z_Construct_UClass_ABaseItem_CPP_Statics; \
public: \
	DECLARE_CLASS(ABaseItem_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem_CPP)


#define Minecraft_Source_Minecraft_BaseItem_CPP_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseItem_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseItem_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseItem_CPP(ABaseItem_CPP&&); \
	NO_API ABaseItem_CPP(const ABaseItem_CPP&); \
public:


#define Minecraft_Source_Minecraft_BaseItem_CPP_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseItem_CPP(ABaseItem_CPP&&); \
	NO_API ABaseItem_CPP(const ABaseItem_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseItem_CPP)


#define Minecraft_Source_Minecraft_BaseItem_CPP_h_45_PRIVATE_PROPERTY_OFFSET
#define Minecraft_Source_Minecraft_BaseItem_CPP_h_42_PROLOG
#define Minecraft_Source_Minecraft_BaseItem_CPP_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_BaseItem_CPP_h_45_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_BaseItem_CPP_h_45_SPARSE_DATA \
	Minecraft_Source_Minecraft_BaseItem_CPP_h_45_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_BaseItem_CPP_h_45_INCLASS \
	Minecraft_Source_Minecraft_BaseItem_CPP_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_BaseItem_CPP_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_BaseItem_CPP_h_45_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_BaseItem_CPP_h_45_SPARSE_DATA \
	Minecraft_Source_Minecraft_BaseItem_CPP_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_BaseItem_CPP_h_45_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_BaseItem_CPP_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class ABaseItem_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_BaseItem_CPP_h


#define FOREACH_ENUM_EMATERIAL_TYPE(op) \
	op(NULL_MATERIAL_TYPE) \
	op(WOOD) \
	op(STONE) \
	op(IRON) \
	op(GOLD) \
	op(DIAMOND) 
#define FOREACH_ENUM_ETOOL_TYPE(op) \
	op(NULL_TOOL_TYPE) \
	op(SWORD) \
	op(AXE) \
	op(PICKAXE) \
	op(SHOVEL) \
	op(HOE) 
#define FOREACH_ENUM_EITEM_TYPE(op) \
	op(NULL_ITEM_TYPE) \
	op(TOOL) \
	op(EQUIPMENT) \
	op(BLOCK) \
	op(FOOD) \
	op(MISC) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
