// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/moob.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemoob() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_Amoob_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_Amoob();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void Amoob::StaticRegisterNativesAmoob()
	{
	}
	UClass* Z_Construct_UClass_Amoob_NoRegister()
	{
		return Amoob::StaticClass();
	}
	struct Z_Construct_UClass_Amoob_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Amoob_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amoob_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "moob.h" },
		{ "ModuleRelativePath", "moob.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Amoob_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Amoob>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Amoob_Statics::ClassParams = {
		&Amoob::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Amoob_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Amoob_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Amoob()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Amoob_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Amoob, 181733652);
	template<> MINECRAFT_API UClass* StaticClass<Amoob>()
	{
		return Amoob::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Amoob(Z_Construct_UClass_Amoob, &Amoob::StaticClass, TEXT("/Script/Minecraft"), TEXT("Amoob"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Amoob);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
