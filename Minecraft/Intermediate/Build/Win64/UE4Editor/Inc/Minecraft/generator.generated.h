// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINECRAFT_generator_generated_h
#error "generator.generated.h already included, missing '#pragma once' in generator.h"
#endif
#define MINECRAFT_generator_generated_h

#define Minecraft_Source_Minecraft_generator_h_46_SPARSE_DATA
#define Minecraft_Source_Minecraft_generator_h_46_RPC_WRAPPERS
#define Minecraft_Source_Minecraft_generator_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define Minecraft_Source_Minecraft_generator_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAgenerator(); \
	friend struct Z_Construct_UClass_Agenerator_Statics; \
public: \
	DECLARE_CLASS(Agenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(Agenerator)


#define Minecraft_Source_Minecraft_generator_h_46_INCLASS \
private: \
	static void StaticRegisterNativesAgenerator(); \
	friend struct Z_Construct_UClass_Agenerator_Statics; \
public: \
	DECLARE_CLASS(Agenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(Agenerator)


#define Minecraft_Source_Minecraft_generator_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Agenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Agenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Agenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Agenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Agenerator(Agenerator&&); \
	NO_API Agenerator(const Agenerator&); \
public:


#define Minecraft_Source_Minecraft_generator_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Agenerator(Agenerator&&); \
	NO_API Agenerator(const Agenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Agenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Agenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Agenerator)


#define Minecraft_Source_Minecraft_generator_h_46_PRIVATE_PROPERTY_OFFSET
#define Minecraft_Source_Minecraft_generator_h_43_PROLOG
#define Minecraft_Source_Minecraft_generator_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_generator_h_46_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_generator_h_46_SPARSE_DATA \
	Minecraft_Source_Minecraft_generator_h_46_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_generator_h_46_INCLASS \
	Minecraft_Source_Minecraft_generator_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_generator_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_generator_h_46_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_generator_h_46_SPARSE_DATA \
	Minecraft_Source_Minecraft_generator_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_generator_h_46_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_generator_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class Agenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_generator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
