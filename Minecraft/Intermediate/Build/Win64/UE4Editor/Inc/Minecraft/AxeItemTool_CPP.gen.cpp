// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/AxeItemTool_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxeItemTool_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_AAxeItemTool_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AAxeItemTool_CPP();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItemTool_CPP();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void AAxeItemTool_CPP::StaticRegisterNativesAAxeItemTool_CPP()
	{
	}
	UClass* Z_Construct_UClass_AAxeItemTool_CPP_NoRegister()
	{
		return AAxeItemTool_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AAxeItemTool_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAxeItemTool_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseItemTool_CPP,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxeItemTool_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AxeItemTool_CPP.h" },
		{ "ModuleRelativePath", "AxeItemTool_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAxeItemTool_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAxeItemTool_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAxeItemTool_CPP_Statics::ClassParams = {
		&AAxeItemTool_CPP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAxeItemTool_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAxeItemTool_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAxeItemTool_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAxeItemTool_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAxeItemTool_CPP, 919297428);
	template<> MINECRAFT_API UClass* StaticClass<AAxeItemTool_CPP>()
	{
		return AAxeItemTool_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAxeItemTool_CPP(Z_Construct_UClass_AAxeItemTool_CPP, &AAxeItemTool_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("AAxeItemTool_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAxeItemTool_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif