// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/Creeper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreeper() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_ACreeper_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_ACreeper();
	MINECRAFT_API UClass* Z_Construct_UClass_AEnemy();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void ACreeper::StaticRegisterNativesACreeper()
	{
	}
	UClass* Z_Construct_UClass_ACreeper_NoRegister()
	{
		return ACreeper::StaticClass();
	}
	struct Z_Construct_UClass_ACreeper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreeper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreeper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Creeper.h" },
		{ "ModuleRelativePath", "Creeper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreeper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreeper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreeper_Statics::ClassParams = {
		&ACreeper::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ACreeper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreeper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreeper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreeper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreeper, 3395874036);
	template<> MINECRAFT_API UClass* StaticClass<ACreeper>()
	{
		return ACreeper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreeper(Z_Construct_UClass_ACreeper, &ACreeper::StaticClass, TEXT("/Script/Minecraft"), TEXT("ACreeper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreeper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
