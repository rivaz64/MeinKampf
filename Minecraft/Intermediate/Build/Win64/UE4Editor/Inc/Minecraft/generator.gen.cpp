// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/generator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegenerator() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_Agenerator_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_Agenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void Agenerator::StaticRegisterNativesAgenerator()
	{
	}
	UClass* Z_Construct_UClass_Agenerator_NoRegister()
	{
		return Agenerator::StaticClass();
	}
	struct Z_Construct_UClass_Agenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_randomnes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_randomnes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alt_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_alt;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_capas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_capas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Agenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "generator.h" },
		{ "ModuleRelativePath", "generator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agenerator_Statics::NewProp_seed_MetaData[] = {
		{ "Category", "generator" },
		{ "ModuleRelativePath", "generator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Agenerator_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Agenerator, seed), METADATA_PARAMS(Z_Construct_UClass_Agenerator_Statics::NewProp_seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Agenerator_Statics::NewProp_seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agenerator_Statics::NewProp_randomnes_MetaData[] = {
		{ "Category", "generator" },
		{ "ModuleRelativePath", "generator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Agenerator_Statics::NewProp_randomnes = { "randomnes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Agenerator, randomnes), METADATA_PARAMS(Z_Construct_UClass_Agenerator_Statics::NewProp_randomnes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Agenerator_Statics::NewProp_randomnes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agenerator_Statics::NewProp_alt_MetaData[] = {
		{ "Category", "generator" },
		{ "ModuleRelativePath", "generator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Agenerator_Statics::NewProp_alt = { "alt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Agenerator, alt), METADATA_PARAMS(Z_Construct_UClass_Agenerator_Statics::NewProp_alt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Agenerator_Statics::NewProp_alt_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Agenerator_Statics::NewProp_capas_Inner = { "capas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agenerator_Statics::NewProp_capas_MetaData[] = {
		{ "Category", "generator" },
		{ "ModuleRelativePath", "generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Agenerator_Statics::NewProp_capas = { "capas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Agenerator, capas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Agenerator_Statics::NewProp_capas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Agenerator_Statics::NewProp_capas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Agenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agenerator_Statics::NewProp_seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agenerator_Statics::NewProp_randomnes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agenerator_Statics::NewProp_alt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agenerator_Statics::NewProp_capas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agenerator_Statics::NewProp_capas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Agenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Agenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Agenerator_Statics::ClassParams = {
		&Agenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Agenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Agenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Agenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Agenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Agenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Agenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Agenerator, 4030766813);
	template<> MINECRAFT_API UClass* StaticClass<Agenerator>()
	{
		return Agenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agenerator(Z_Construct_UClass_Agenerator, &Agenerator::StaticClass, TEXT("/Script/Minecraft"), TEXT("Agenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
