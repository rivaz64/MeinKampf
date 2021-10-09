// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/ItemDroped_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDroped_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_AItemDroped_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AItemDroped_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AItemDroped_CPP::StaticRegisterNativesAItemDroped_CPP()
	{
	}
	UClass* Z_Construct_UClass_AItemDroped_CPP_NoRegister()
	{
		return AItemDroped_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AItemDroped_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectiorCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectiorCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeTillCollected_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeTillCollected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemDroped_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemDroped_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemDroped_CPP.h" },
		{ "ModuleRelativePath", "ItemDroped_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "ItemDroped_CPP" },
		{ "ModuleRelativePath", "ItemDroped_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemDroped_CPP, Item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "ItemDroped_CPP" },
		{ "ModuleRelativePath", "ItemDroped_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemDroped_CPP, Count), nullptr, METADATA_PARAMS(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_ItemCollider_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemDroped_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_ItemCollider = { "ItemCollider", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemDroped_CPP, ItemCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_ItemCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_ItemCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_CollectiorCollider_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemDroped_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_CollectiorCollider = { "CollectiorCollider", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemDroped_CPP, CollectiorCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_CollectiorCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_CollectiorCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "Category", "ItemDroped_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemDroped_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemDroped_CPP, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_ItemMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_TimeTillCollected_MetaData[] = {
		{ "Category", "ItemDroped_CPP" },
		{ "ModuleRelativePath", "ItemDroped_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_TimeTillCollected = { "TimeTillCollected", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemDroped_CPP, TimeTillCollected), METADATA_PARAMS(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_TimeTillCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_TimeTillCollected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemDroped_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_ItemCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_CollectiorCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_ItemMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemDroped_CPP_Statics::NewProp_TimeTillCollected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemDroped_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemDroped_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemDroped_CPP_Statics::ClassParams = {
		&AItemDroped_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AItemDroped_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemDroped_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemDroped_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemDroped_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemDroped_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemDroped_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemDroped_CPP, 852859643);
	template<> MINECRAFT_API UClass* StaticClass<AItemDroped_CPP>()
	{
		return AItemDroped_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemDroped_CPP(Z_Construct_UClass_AItemDroped_CPP, &AItemDroped_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("AItemDroped_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemDroped_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
