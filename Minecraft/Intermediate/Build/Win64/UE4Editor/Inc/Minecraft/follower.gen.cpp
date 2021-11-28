// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/follower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefollower() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_Afollower_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_Afollower();
	MINECRAFT_API UClass* Z_Construct_UClass_Amob();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void Afollower::StaticRegisterNativesAfollower()
	{
	}
	UClass* Z_Construct_UClass_Afollower_NoRegister()
	{
		return Afollower::StaticClass();
	}
	struct Z_Construct_UClass_Afollower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassToFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToFind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_separation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_separation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tevio_MetaData[];
#endif
		static void NewProp_tevio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_tevio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afollower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Amob,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afollower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "follower.h" },
		{ "ModuleRelativePath", "follower.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afollower_Statics::NewProp_ClassToFind_MetaData[] = {
		{ "Category", "follower" },
		{ "ModuleRelativePath", "follower.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Afollower_Statics::NewProp_ClassToFind = { "ClassToFind", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afollower, ClassToFind), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Afollower_Statics::NewProp_ClassToFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afollower_Statics::NewProp_ClassToFind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afollower_Statics::NewProp_separation_MetaData[] = {
		{ "Category", "follower" },
		{ "ModuleRelativePath", "follower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afollower_Statics::NewProp_separation = { "separation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afollower, separation), METADATA_PARAMS(Z_Construct_UClass_Afollower_Statics::NewProp_separation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afollower_Statics::NewProp_separation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afollower_Statics::NewProp_tevio_MetaData[] = {
		{ "Category", "follower" },
		{ "ModuleRelativePath", "follower.h" },
	};
#endif
	void Z_Construct_UClass_Afollower_Statics::NewProp_tevio_SetBit(void* Obj)
	{
		((Afollower*)Obj)->tevio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afollower_Statics::NewProp_tevio = { "tevio", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afollower), &Z_Construct_UClass_Afollower_Statics::NewProp_tevio_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afollower_Statics::NewProp_tevio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afollower_Statics::NewProp_tevio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Afollower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afollower_Statics::NewProp_ClassToFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afollower_Statics::NewProp_separation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afollower_Statics::NewProp_tevio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afollower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afollower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Afollower_Statics::ClassParams = {
		&Afollower::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Afollower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Afollower_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Afollower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Afollower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afollower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Afollower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Afollower, 1712483823);
	template<> MINECRAFT_API UClass* StaticClass<Afollower>()
	{
		return Afollower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Afollower(Z_Construct_UClass_Afollower, &Afollower::StaticClass, TEXT("/Script/Minecraft"), TEXT("Afollower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afollower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
