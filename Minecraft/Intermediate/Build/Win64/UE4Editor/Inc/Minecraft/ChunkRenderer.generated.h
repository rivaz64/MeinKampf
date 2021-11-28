// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MINECRAFT_ChunkRenderer_generated_h
#error "ChunkRenderer.generated.h already included, missing '#pragma once' in ChunkRenderer.h"
#endif
#define MINECRAFT_ChunkRenderer_generated_h

#define Minecraft_Source_Minecraft_ChunkRenderer_h_17_SPARSE_DATA
#define Minecraft_Source_Minecraft_ChunkRenderer_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execplaceSand);


#define Minecraft_Source_Minecraft_ChunkRenderer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execplaceSand);


#define Minecraft_Source_Minecraft_ChunkRenderer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChunkRenderer(); \
	friend struct Z_Construct_UClass_AChunkRenderer_Statics; \
public: \
	DECLARE_CLASS(AChunkRenderer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(AChunkRenderer)


#define Minecraft_Source_Minecraft_ChunkRenderer_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAChunkRenderer(); \
	friend struct Z_Construct_UClass_AChunkRenderer_Statics; \
public: \
	DECLARE_CLASS(AChunkRenderer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(AChunkRenderer)


#define Minecraft_Source_Minecraft_ChunkRenderer_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChunkRenderer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChunkRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChunkRenderer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChunkRenderer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChunkRenderer(AChunkRenderer&&); \
	NO_API AChunkRenderer(const AChunkRenderer&); \
public:


#define Minecraft_Source_Minecraft_ChunkRenderer_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChunkRenderer(AChunkRenderer&&); \
	NO_API AChunkRenderer(const AChunkRenderer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChunkRenderer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChunkRenderer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChunkRenderer)


#define Minecraft_Source_Minecraft_ChunkRenderer_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(AChunkRenderer, mesh); } \
	FORCEINLINE static uint32 __PPO__sand() { return STRUCT_OFFSET(AChunkRenderer, sand); } \
	FORCEINLINE static uint32 __PPO__quad() { return STRUCT_OFFSET(AChunkRenderer, quad); } \
	FORCEINLINE static uint32 __PPO__ClassOfPlayer() { return STRUCT_OFFSET(AChunkRenderer, ClassOfPlayer); } \
	FORCEINLINE static uint32 __PPO__item() { return STRUCT_OFFSET(AChunkRenderer, item); } \
	FORCEINLINE static uint32 __PPO__cual() { return STRUCT_OFFSET(AChunkRenderer, cual); }


#define Minecraft_Source_Minecraft_ChunkRenderer_h_14_PROLOG
#define Minecraft_Source_Minecraft_ChunkRenderer_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_ChunkRenderer_h_17_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_ChunkRenderer_h_17_SPARSE_DATA \
	Minecraft_Source_Minecraft_ChunkRenderer_h_17_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_ChunkRenderer_h_17_INCLASS \
	Minecraft_Source_Minecraft_ChunkRenderer_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_ChunkRenderer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_ChunkRenderer_h_17_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_ChunkRenderer_h_17_SPARSE_DATA \
	Minecraft_Source_Minecraft_ChunkRenderer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_ChunkRenderer_h_17_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_ChunkRenderer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class AChunkRenderer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_ChunkRenderer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
