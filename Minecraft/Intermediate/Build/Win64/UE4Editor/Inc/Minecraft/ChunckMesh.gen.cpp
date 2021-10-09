// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/ChunckMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunckMesh() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_AChunckMesh_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AChunckMesh();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void AChunckMesh::StaticRegisterNativesAChunckMesh()
	{
	}
	UClass* Z_Construct_UClass_AChunckMesh_NoRegister()
	{
		return AChunckMesh::StaticClass();
	}
	struct Z_Construct_UClass_AChunckMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChunckMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunckMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChunckMesh.h" },
		{ "ModuleRelativePath", "ChunckMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunckMesh_Statics::NewProp_m_mesh_MetaData[] = {
		{ "Category", "ChunckMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChunckMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunckMesh_Statics::NewProp_m_mesh = { "m_mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunckMesh, m_mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChunckMesh_Statics::NewProp_m_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunckMesh_Statics::NewProp_m_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunckMesh_Statics::NewProp_mat_MetaData[] = {
		{ "Category", "ChunckMesh" },
		{ "ModuleRelativePath", "ChunckMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunckMesh_Statics::NewProp_mat = { "mat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunckMesh, mat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChunckMesh_Statics::NewProp_mat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunckMesh_Statics::NewProp_mat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunckMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunckMesh_Statics::NewProp_m_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunckMesh_Statics::NewProp_mat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChunckMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunckMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChunckMesh_Statics::ClassParams = {
		&AChunckMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChunckMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChunckMesh_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChunckMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChunckMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChunckMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChunckMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChunckMesh, 312062836);
	template<> MINECRAFT_API UClass* StaticClass<AChunckMesh>()
	{
		return AChunckMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChunckMesh(Z_Construct_UClass_AChunckMesh, &AChunckMesh::StaticClass, TEXT("/Script/Minecraft"), TEXT("AChunckMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChunckMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
