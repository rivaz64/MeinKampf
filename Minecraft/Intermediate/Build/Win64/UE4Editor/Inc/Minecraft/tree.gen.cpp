// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/tree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetree() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_Atree_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_Atree();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void Atree::StaticRegisterNativesAtree()
	{
	}
	UClass* Z_Construct_UClass_Atree_NoRegister()
	{
		return Atree::StaticClass();
	}
	struct Z_Construct_UClass_Atree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tronco_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_tronco;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hojas_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_hojas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Atree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "tree.h" },
		{ "ModuleRelativePath", "tree.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atree_Statics::NewProp_tronco_MetaData[] = {
		{ "Category", "tree" },
		{ "ModuleRelativePath", "tree.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Atree_Statics::NewProp_tronco = { "tronco", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atree, tronco), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Atree_Statics::NewProp_tronco_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Atree_Statics::NewProp_tronco_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atree_Statics::NewProp_hojas_MetaData[] = {
		{ "Category", "tree" },
		{ "ModuleRelativePath", "tree.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Atree_Statics::NewProp_hojas = { "hojas", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atree, hojas), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Atree_Statics::NewProp_hojas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Atree_Statics::NewProp_hojas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Atree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atree_Statics::NewProp_tronco,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atree_Statics::NewProp_hojas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Atree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Atree_Statics::ClassParams = {
		&Atree::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Atree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Atree_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Atree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Atree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Atree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Atree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Atree, 1119899618);
	template<> MINECRAFT_API UClass* StaticClass<Atree>()
	{
		return Atree::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Atree(Z_Construct_UClass_Atree, &Atree::StaticClass, TEXT("/Script/Minecraft"), TEXT("Atree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
