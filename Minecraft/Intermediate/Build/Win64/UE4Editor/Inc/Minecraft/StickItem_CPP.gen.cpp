// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/StickItem_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStickItem_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_AStickItem_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AStickItem_CPP();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItemMsc_CPP();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void AStickItem_CPP::StaticRegisterNativesAStickItem_CPP()
	{
	}
	UClass* Z_Construct_UClass_AStickItem_CPP_NoRegister()
	{
		return AStickItem_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AStickItem_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStickItem_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseItemMsc_CPP,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickItem_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StickItem_CPP.h" },
		{ "ModuleRelativePath", "StickItem_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStickItem_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStickItem_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStickItem_CPP_Statics::ClassParams = {
		&AStickItem_CPP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStickItem_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStickItem_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStickItem_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStickItem_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStickItem_CPP, 2640895886);
	template<> MINECRAFT_API UClass* StaticClass<AStickItem_CPP>()
	{
		return AStickItem_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStickItem_CPP(Z_Construct_UClass_AStickItem_CPP, &AStickItem_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("AStickItem_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStickItem_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
