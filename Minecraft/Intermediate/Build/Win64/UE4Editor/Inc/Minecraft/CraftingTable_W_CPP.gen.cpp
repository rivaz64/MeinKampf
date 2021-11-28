// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/CraftingTable_W_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraftingTable_W_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_UCraftingTable_W_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UCraftingTable_W_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void UCraftingTable_W_CPP::StaticRegisterNativesUCraftingTable_W_CPP()
	{
	}
	UClass* Z_Construct_UClass_UCraftingTable_W_CPP_NoRegister()
	{
		return UCraftingTable_W_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UCraftingTable_W_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCraftingTable_W_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftingTable_W_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CraftingTable_W_CPP.h" },
		{ "ModuleRelativePath", "CraftingTable_W_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCraftingTable_W_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCraftingTable_W_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCraftingTable_W_CPP_Statics::ClassParams = {
		&UCraftingTable_W_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCraftingTable_W_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCraftingTable_W_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCraftingTable_W_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCraftingTable_W_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCraftingTable_W_CPP, 2284390376);
	template<> MINECRAFT_API UClass* StaticClass<UCraftingTable_W_CPP>()
	{
		return UCraftingTable_W_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCraftingTable_W_CPP(Z_Construct_UClass_UCraftingTable_W_CPP, &UCraftingTable_W_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("UCraftingTable_W_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCraftingTable_W_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
