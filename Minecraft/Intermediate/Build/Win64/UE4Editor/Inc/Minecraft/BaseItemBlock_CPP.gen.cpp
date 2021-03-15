// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/BaseItemBlock_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseItemBlock_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItemBlock_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItemBlock_CPP();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseBlock_CPP_NoRegister();
// End Cross Module References
	void ABaseItemBlock_CPP::StaticRegisterNativesABaseItemBlock_CPP()
	{
	}
	UClass* Z_Construct_UClass_ABaseItemBlock_CPP_NoRegister()
	{
		return ABaseItemBlock_CPP::StaticClass();
	}
	struct Z_Construct_UClass_ABaseItemBlock_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlockClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseItemBlock_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseItem_CPP,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItemBlock_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseItemBlock_CPP.h" },
		{ "ModuleRelativePath", "BaseItemBlock_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItemBlock_CPP_Statics::NewProp_BlockClass_MetaData[] = {
		{ "Category", "ItemInfo" },
		{ "ModuleRelativePath", "BaseItemBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseItemBlock_CPP_Statics::NewProp_BlockClass = { "BlockClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItemBlock_CPP, BlockClass), Z_Construct_UClass_ABaseBlock_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseItemBlock_CPP_Statics::NewProp_BlockClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItemBlock_CPP_Statics::NewProp_BlockClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseItemBlock_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItemBlock_CPP_Statics::NewProp_BlockClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseItemBlock_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseItemBlock_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseItemBlock_CPP_Statics::ClassParams = {
		&ABaseItemBlock_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseItemBlock_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItemBlock_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseItemBlock_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItemBlock_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseItemBlock_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseItemBlock_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseItemBlock_CPP, 4217860036);
	template<> MINECRAFT_API UClass* StaticClass<ABaseItemBlock_CPP>()
	{
		return ABaseItemBlock_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseItemBlock_CPP(Z_Construct_UClass_ABaseItemBlock_CPP, &ABaseItemBlock_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("ABaseItemBlock_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseItemBlock_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
