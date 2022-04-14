// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/ChunkRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkRenderer() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_AChunkRenderer_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AChunkRenderer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AChunkRenderer::execplaceSand)
	{
		P_GET_STRUCT(FVector,Z_Param_pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->placeSand(Z_Param_pos);
		P_NATIVE_END;
	}
	void AChunkRenderer::StaticRegisterNativesAChunkRenderer()
	{
		UClass* Class = AChunkRenderer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "placeSand", &AChunkRenderer::execplaceSand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChunkRenderer_placeSand_Statics
	{
		struct ChunkRenderer_eventplaceSand_Parms
		{
			FVector pos;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkRenderer_placeSand_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChunkRenderer_eventplaceSand_Parms, pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkRenderer_placeSand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkRenderer_placeSand_Statics::NewProp_pos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkRenderer_placeSand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChunkRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkRenderer_placeSand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkRenderer, nullptr, "placeSand", nullptr, nullptr, sizeof(ChunkRenderer_eventplaceSand_Parms), Z_Construct_UFunction_AChunkRenderer_placeSand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkRenderer_placeSand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChunkRenderer_placeSand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkRenderer_placeSand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChunkRenderer_placeSand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChunkRenderer_placeSand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChunkRenderer_NoRegister()
	{
		return AChunkRenderer::StaticClass();
	}
	struct Z_Construct_UClass_AChunkRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sand_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_sand;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_quad_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quad_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_quad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassOfPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassOfPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sheep_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_sheep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zombi_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_zombi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_creeper_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_creeper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cual_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_cual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_load_MetaData[];
#endif
		static void NewProp_load_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_load;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChunkRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChunkRenderer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChunkRenderer_placeSand, "placeSand" }, // 2539121278
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChunkRenderer.h" },
		{ "ModuleRelativePath", "ChunkRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkRenderer_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "ChunkRenderer" },
		{ "Comment", "//ChunckMesh* c;\n" },
		{ "ModuleRelativePath", "ChunkRenderer.h" },
		{ "ToolTip", "ChunckMesh* c;" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkRenderer_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunkRenderer, mesh), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkRenderer_Statics::NewProp_sand_MetaData[] = {
		{ "Category", "ChunkRenderer" },
		{ "ModuleRelativePath", "ChunkRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkRenderer_Statics::NewProp_sand = { "sand", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunkRenderer, sand), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_sand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_sand_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkRenderer_Statics::NewProp_quad_Inner = { "quad", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkRenderer_Statics::NewProp_quad_MetaData[] = {
		{ "Category", "ChunkRenderer" },
		{ "ModuleRelativePath", "ChunkRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChunkRenderer_Statics::NewProp_quad = { "quad", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunkRenderer, quad), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_quad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_quad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkRenderer_Statics::NewProp_ClassOfPlayer_MetaData[] = {
		{ "Category", "ChunkRenderer" },
		{ "ModuleRelativePath", "ChunkRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkRenderer_Statics::NewProp_ClassOfPlayer = { "ClassOfPlayer", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunkRenderer, ClassOfPlayer), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_ClassOfPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_ClassOfPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkRenderer_Statics::NewProp_itemManager_MetaData[] = {
		{ "Category", "ChunkRenderer" },
		{ "ModuleRelativePath", "ChunkRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkRenderer_Statics::NewProp_itemManager = { "itemManager", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunkRenderer, itemManager), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_itemManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_itemManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkRenderer_Statics::NewProp_sheep_MetaData[] = {
		{ "Category", "ChunkRenderer" },
		{ "ModuleRelativePath", "ChunkRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkRenderer_Statics::NewProp_sheep = { "sheep", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunkRenderer, sheep), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_sheep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_sheep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkRenderer_Statics::NewProp_zombi_MetaData[] = {
		{ "Category", "ChunkRenderer" },
		{ "ModuleRelativePath", "ChunkRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkRenderer_Statics::NewProp_zombi = { "zombi", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunkRenderer, zombi), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_zombi_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_zombi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkRenderer_Statics::NewProp_creeper_MetaData[] = {
		{ "Category", "ChunkRenderer" },
		{ "ModuleRelativePath", "ChunkRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkRenderer_Statics::NewProp_creeper = { "creeper", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunkRenderer, creeper), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_creeper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_creeper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkRenderer_Statics::NewProp_cual_MetaData[] = {
		{ "Category", "ChunkRenderer" },
		{ "ModuleRelativePath", "ChunkRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AChunkRenderer_Statics::NewProp_cual = { "cual", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunkRenderer, cual), METADATA_PARAMS(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_cual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_cual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkRenderer_Statics::NewProp_load_MetaData[] = {
		{ "Category", "ChunkRenderer" },
		{ "ModuleRelativePath", "ChunkRenderer.h" },
	};
#endif
	void Z_Construct_UClass_AChunkRenderer_Statics::NewProp_load_SetBit(void* Obj)
	{
		((AChunkRenderer*)Obj)->load = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChunkRenderer_Statics::NewProp_load = { "load", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChunkRenderer), &Z_Construct_UClass_AChunkRenderer_Statics::NewProp_load_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_load_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::NewProp_load_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunkRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkRenderer_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkRenderer_Statics::NewProp_sand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkRenderer_Statics::NewProp_quad_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkRenderer_Statics::NewProp_quad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkRenderer_Statics::NewProp_ClassOfPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkRenderer_Statics::NewProp_itemManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkRenderer_Statics::NewProp_sheep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkRenderer_Statics::NewProp_zombi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkRenderer_Statics::NewProp_creeper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkRenderer_Statics::NewProp_cual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkRenderer_Statics::NewProp_load,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChunkRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunkRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChunkRenderer_Statics::ClassParams = {
		&AChunkRenderer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChunkRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChunkRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChunkRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChunkRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChunkRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChunkRenderer, 2896997194);
	template<> MINECRAFT_API UClass* StaticClass<AChunkRenderer>()
	{
		return AChunkRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChunkRenderer(Z_Construct_UClass_AChunkRenderer, &AChunkRenderer::StaticClass, TEXT("/Script/Minecraft"), TEXT("AChunkRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChunkRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
