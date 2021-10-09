// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/B_Dirt_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeB_Dirt_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_AB_Dirt_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AB_Dirt_CPP();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseBlock_CPP();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void AB_Dirt_CPP::StaticRegisterNativesAB_Dirt_CPP()
	{
	}
	UClass* Z_Construct_UClass_AB_Dirt_CPP_NoRegister()
	{
		return AB_Dirt_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AB_Dirt_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AB_Dirt_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseBlock_CPP,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AB_Dirt_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "B_Dirt_CPP.h" },
		{ "ModuleRelativePath", "B_Dirt_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AB_Dirt_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AB_Dirt_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AB_Dirt_CPP_Statics::ClassParams = {
		&AB_Dirt_CPP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AB_Dirt_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AB_Dirt_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AB_Dirt_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AB_Dirt_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AB_Dirt_CPP, 3362150825);
	template<> MINECRAFT_API UClass* StaticClass<AB_Dirt_CPP>()
	{
		return AB_Dirt_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AB_Dirt_CPP(Z_Construct_UClass_AB_Dirt_CPP, &AB_Dirt_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("AB_Dirt_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AB_Dirt_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
