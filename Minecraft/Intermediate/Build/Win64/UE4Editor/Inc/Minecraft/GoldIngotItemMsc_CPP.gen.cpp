// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/GoldIngotItemMsc_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoldIngotItemMsc_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_AGoldIngotItemMsc_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AGoldIngotItemMsc_CPP();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItemMsc_CPP();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void AGoldIngotItemMsc_CPP::StaticRegisterNativesAGoldIngotItemMsc_CPP()
	{
	}
	UClass* Z_Construct_UClass_AGoldIngotItemMsc_CPP_NoRegister()
	{
		return AGoldIngotItemMsc_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AGoldIngotItemMsc_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoldIngotItemMsc_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseItemMsc_CPP,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoldIngotItemMsc_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GoldIngotItemMsc_CPP.h" },
		{ "ModuleRelativePath", "GoldIngotItemMsc_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoldIngotItemMsc_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoldIngotItemMsc_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoldIngotItemMsc_CPP_Statics::ClassParams = {
		&AGoldIngotItemMsc_CPP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGoldIngotItemMsc_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoldIngotItemMsc_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoldIngotItemMsc_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoldIngotItemMsc_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoldIngotItemMsc_CPP, 2011521881);
	template<> MINECRAFT_API UClass* StaticClass<AGoldIngotItemMsc_CPP>()
	{
		return AGoldIngotItemMsc_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoldIngotItemMsc_CPP(Z_Construct_UClass_AGoldIngotItemMsc_CPP, &AGoldIngotItemMsc_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("AGoldIngotItemMsc_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoldIngotItemMsc_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif