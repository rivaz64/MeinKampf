// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/BaseItem_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseItem_CPP() {}
// Cross Module References
	MINECRAFT_API UEnum* Z_Construct_UEnum_Minecraft_eTOOL_TYPE();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	MINECRAFT_API UEnum* Z_Construct_UEnum_Minecraft_eITEM_TYPE();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* eTOOL_TYPE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Minecraft_eTOOL_TYPE, Z_Construct_UPackage__Script_Minecraft(), TEXT("eTOOL_TYPE"));
		}
		return Singleton;
	}
	template<> MINECRAFT_API UEnum* StaticEnum<eTOOL_TYPE>()
	{
		return eTOOL_TYPE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eTOOL_TYPE(eTOOL_TYPE_StaticEnum, TEXT("/Script/Minecraft"), TEXT("eTOOL_TYPE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Minecraft_eTOOL_TYPE_Hash() { return 2879864876U; }
	UEnum* Z_Construct_UEnum_Minecraft_eTOOL_TYPE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Minecraft();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eTOOL_TYPE"), 0, Get_Z_Construct_UEnum_Minecraft_eTOOL_TYPE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NULL_TOOL_TYPE", (int64)NULL_TOOL_TYPE },
				{ "SWORD", (int64)SWORD },
				{ "AXE", (int64)AXE },
				{ "PICKAXE", (int64)PICKAXE },
				{ "SHOVEL", (int64)SHOVEL },
				{ "HOE", (int64)HOE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AXE.DisplayName", "AXE" },
				{ "AXE.Name", "AXE" },
				{ "HOE.DisplayName", "HOE" },
				{ "HOE.Name", "HOE" },
				{ "ModuleRelativePath", "BaseItem_CPP.h" },
				{ "NULL_TOOL_TYPE.DisplayName", "NULL_TOOL_TYPE" },
				{ "NULL_TOOL_TYPE.Name", "NULL_TOOL_TYPE" },
				{ "PICKAXE.DisplayName", "PICKAXE" },
				{ "PICKAXE.Name", "PICKAXE" },
				{ "SHOVEL.DisplayName", "SHOVEL" },
				{ "SHOVEL.Name", "SHOVEL" },
				{ "SWORD.DisplayName", "SWORD" },
				{ "SWORD.Name", "SWORD" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Minecraft,
				nullptr,
				"eTOOL_TYPE",
				"eTOOL_TYPE",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* eITEM_TYPE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Minecraft_eITEM_TYPE, Z_Construct_UPackage__Script_Minecraft(), TEXT("eITEM_TYPE"));
		}
		return Singleton;
	}
	template<> MINECRAFT_API UEnum* StaticEnum<eITEM_TYPE>()
	{
		return eITEM_TYPE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eITEM_TYPE(eITEM_TYPE_StaticEnum, TEXT("/Script/Minecraft"), TEXT("eITEM_TYPE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Minecraft_eITEM_TYPE_Hash() { return 4003407623U; }
	UEnum* Z_Construct_UEnum_Minecraft_eITEM_TYPE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Minecraft();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eITEM_TYPE"), 0, Get_Z_Construct_UEnum_Minecraft_eITEM_TYPE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NULL_ITEM_TYPE", (int64)NULL_ITEM_TYPE },
				{ "TOOL", (int64)TOOL },
				{ "EQUIPMENT", (int64)EQUIPMENT },
				{ "BLOCK", (int64)BLOCK },
				{ "FOOD", (int64)FOOD },
				{ "MISC", (int64)MISC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BLOCK.DisplayName", "BLOCK" },
				{ "BLOCK.Name", "BLOCK" },
				{ "EQUIPMENT.DisplayName", "EQUIPMENT" },
				{ "EQUIPMENT.Name", "EQUIPMENT" },
				{ "FOOD.DisplayName", "FOOD" },
				{ "FOOD.Name", "FOOD" },
				{ "MISC.DisplayName", "MISC" },
				{ "MISC.Name", "MISC" },
				{ "ModuleRelativePath", "BaseItem_CPP.h" },
				{ "NULL_ITEM_TYPE.DisplayName", "NULL_ITEM_TYPE" },
				{ "NULL_ITEM_TYPE.Name", "NULL_ITEM_TYPE" },
				{ "TOOL.DisplayName", "TOOL" },
				{ "TOOL.Name", "TOOL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Minecraft,
				nullptr,
				"eITEM_TYPE",
				"eITEM_TYPE",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ABaseItem_CPP::StaticRegisterNativesABaseItem_CPP()
	{
	}
	UClass* Z_Construct_UClass_ABaseItem_CPP_NoRegister()
	{
		return ABaseItem_CPP::StaticClass();
	}
	struct Z_Construct_UClass_ABaseItem_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseItem_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseItem_CPP.h" },
		{ "ModuleRelativePath", "BaseItem_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_eItemType_MetaData[] = {
		{ "Category", "ItemInfo" },
		{ "ModuleRelativePath", "BaseItem_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_eItemType = { "eItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItem_CPP, eItemType), Z_Construct_UEnum_Minecraft_eITEM_TYPE, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_eItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_eItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_ItemCollider_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseItem_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_ItemCollider = { "ItemCollider", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItem_CPP, ItemCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_ItemCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_ItemCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseItem_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItem_CPP, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_ItemMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseItem_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_eItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_ItemCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_CPP_Statics::NewProp_ItemMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseItem_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseItem_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseItem_CPP_Statics::ClassParams = {
		&ABaseItem_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseItem_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseItem_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseItem_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseItem_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseItem_CPP, 2689685307);
	template<> MINECRAFT_API UClass* StaticClass<ABaseItem_CPP>()
	{
		return ABaseItem_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseItem_CPP(Z_Construct_UClass_ABaseItem_CPP, &ABaseItem_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("ABaseItem_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseItem_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
