// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/ShearsItemTool_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShearsItemTool_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_AShearsItemTool_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AShearsItemTool_CPP();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItemTool_CPP();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void AShearsItemTool_CPP::StaticRegisterNativesAShearsItemTool_CPP()
	{
	}
	UClass* Z_Construct_UClass_AShearsItemTool_CPP_NoRegister()
	{
		return AShearsItemTool_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AShearsItemTool_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShearsItemTool_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseItemTool_CPP,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShearsItemTool_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ShearsItemTool_CPP.h" },
		{ "ModuleRelativePath", "ShearsItemTool_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShearsItemTool_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShearsItemTool_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShearsItemTool_CPP_Statics::ClassParams = {
		&AShearsItemTool_CPP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShearsItemTool_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShearsItemTool_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShearsItemTool_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShearsItemTool_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShearsItemTool_CPP, 1980462375);
	template<> MINECRAFT_API UClass* StaticClass<AShearsItemTool_CPP>()
	{
		return AShearsItemTool_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShearsItemTool_CPP(Z_Construct_UClass_AShearsItemTool_CPP, &AShearsItemTool_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("AShearsItemTool_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShearsItemTool_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif