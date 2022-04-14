// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/blockspawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeblockspawner() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_Ablockspawner_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_Ablockspawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void Ablockspawner::StaticRegisterNativesAblockspawner()
	{
	}
	UClass* Z_Construct_UClass_Ablockspawner_NoRegister()
	{
		return Ablockspawner::StaticClass();
	}
	struct Z_Construct_UClass_Ablockspawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnsPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_spawnsPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deletesPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_deletesPerFrame;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_capas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_capas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ablockspawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablockspawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "blockspawner.h" },
		{ "ModuleRelativePath", "blockspawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablockspawner_Statics::NewProp_spawnsPerFrame_MetaData[] = {
		{ "Category", "blockspawner" },
		{ "ModuleRelativePath", "blockspawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Ablockspawner_Statics::NewProp_spawnsPerFrame = { "spawnsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ablockspawner, spawnsPerFrame), METADATA_PARAMS(Z_Construct_UClass_Ablockspawner_Statics::NewProp_spawnsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ablockspawner_Statics::NewProp_spawnsPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablockspawner_Statics::NewProp_deletesPerFrame_MetaData[] = {
		{ "Category", "blockspawner" },
		{ "ModuleRelativePath", "blockspawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Ablockspawner_Statics::NewProp_deletesPerFrame = { "deletesPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ablockspawner, deletesPerFrame), METADATA_PARAMS(Z_Construct_UClass_Ablockspawner_Statics::NewProp_deletesPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ablockspawner_Statics::NewProp_deletesPerFrame_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Ablockspawner_Statics::NewProp_capas_Inner = { "capas", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablockspawner_Statics::NewProp_capas_MetaData[] = {
		{ "Category", "blockspawner" },
		{ "ModuleRelativePath", "blockspawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Ablockspawner_Statics::NewProp_capas = { "capas", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ablockspawner, capas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Ablockspawner_Statics::NewProp_capas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ablockspawner_Statics::NewProp_capas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ablockspawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ablockspawner_Statics::NewProp_spawnsPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ablockspawner_Statics::NewProp_deletesPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ablockspawner_Statics::NewProp_capas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ablockspawner_Statics::NewProp_capas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ablockspawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ablockspawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ablockspawner_Statics::ClassParams = {
		&Ablockspawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Ablockspawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Ablockspawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ablockspawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ablockspawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ablockspawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ablockspawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ablockspawner, 3702090748);
	template<> MINECRAFT_API UClass* StaticClass<Ablockspawner>()
	{
		return Ablockspawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ablockspawner(Z_Construct_UClass_Ablockspawner, &Ablockspawner::StaticClass, TEXT("/Script/Minecraft"), TEXT("Ablockspawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ablockspawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
