// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINECRAFT_moob_generated_h
#error "moob.generated.h already included, missing '#pragma once' in moob.h"
#endif
#define MINECRAFT_moob_generated_h

#define Minecraft_Source_Minecraft_moob_h_12_SPARSE_DATA
#define Minecraft_Source_Minecraft_moob_h_12_RPC_WRAPPERS
#define Minecraft_Source_Minecraft_moob_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Minecraft_Source_Minecraft_moob_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmoob(); \
	friend struct Z_Construct_UClass_Amoob_Statics; \
public: \
	DECLARE_CLASS(Amoob, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(Amoob)


#define Minecraft_Source_Minecraft_moob_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAmoob(); \
	friend struct Z_Construct_UClass_Amoob_Statics; \
public: \
	DECLARE_CLASS(Amoob, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(Amoob)


#define Minecraft_Source_Minecraft_moob_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Amoob(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Amoob) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Amoob); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Amoob); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Amoob(Amoob&&); \
	NO_API Amoob(const Amoob&); \
public:


#define Minecraft_Source_Minecraft_moob_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Amoob(Amoob&&); \
	NO_API Amoob(const Amoob&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Amoob); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Amoob); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Amoob)


#define Minecraft_Source_Minecraft_moob_h_12_PRIVATE_PROPERTY_OFFSET
#define Minecraft_Source_Minecraft_moob_h_9_PROLOG
#define Minecraft_Source_Minecraft_moob_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_moob_h_12_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_moob_h_12_SPARSE_DATA \
	Minecraft_Source_Minecraft_moob_h_12_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_moob_h_12_INCLASS \
	Minecraft_Source_Minecraft_moob_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_moob_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_moob_h_12_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_moob_h_12_SPARSE_DATA \
	Minecraft_Source_Minecraft_moob_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_moob_h_12_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_moob_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class Amoob>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_moob_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
