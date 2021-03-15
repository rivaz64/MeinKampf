// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/Block_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock_CPP() {}
// Cross Module References
	MINECRAFT_API UEnum* Z_Construct_UEnum_Minecraft_eBLOCK_TYPE();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	MINECRAFT_API UClass* Z_Construct_UClass_ABlock_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_ABlock_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* eBLOCK_TYPE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Minecraft_eBLOCK_TYPE, Z_Construct_UPackage__Script_Minecraft(), TEXT("eBLOCK_TYPE"));
		}
		return Singleton;
	}
	template<> MINECRAFT_API UEnum* StaticEnum<eBLOCK_TYPE>()
	{
		return eBLOCK_TYPE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eBLOCK_TYPE(eBLOCK_TYPE_StaticEnum, TEXT("/Script/Minecraft"), TEXT("eBLOCK_TYPE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Minecraft_eBLOCK_TYPE_Hash() { return 359013791U; }
	UEnum* Z_Construct_UEnum_Minecraft_eBLOCK_TYPE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Minecraft();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eBLOCK_TYPE"), 0, Get_Z_Construct_UEnum_Minecraft_eBLOCK_TYPE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SOLIDS", (int64)SOLIDS },
				{ "LIQUIDS", (int64)LIQUIDS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LIQUIDS.DisplayName", "LIQUID" },
				{ "LIQUIDS.Name", "LIQUIDS" },
				{ "ModuleRelativePath", "Block_CPP.h" },
				{ "SOLIDS.DisplayName", "SOLID" },
				{ "SOLIDS.Name", "SOLIDS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Minecraft,
				nullptr,
				"eBLOCK_TYPE",
				"eBLOCK_TYPE",
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
	void ABlock_CPP::StaticRegisterNativesABlock_CPP()
	{
	}
	UClass* Z_Construct_UClass_ABlock_CPP_NoRegister()
	{
		return ABlock_CPP::StaticClass();
	}
	struct Z_Construct_UClass_ABlock_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eBlockType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eBlockType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasGravity_MetaData[];
#endif
		static void NewProp_HasGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlock_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Block_CPP.h" },
		{ "ModuleRelativePath", "Block_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_CPP_Statics::NewProp_eBlockType_MetaData[] = {
		{ "Category", "BlockInfo" },
		{ "ModuleRelativePath", "Block_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlock_CPP_Statics::NewProp_eBlockType = { "eBlockType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock_CPP, eBlockType), Z_Construct_UEnum_Minecraft_eBLOCK_TYPE, METADATA_PARAMS(Z_Construct_UClass_ABlock_CPP_Statics::NewProp_eBlockType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_CPP_Statics::NewProp_eBlockType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_CPP_Statics::NewProp_HasGravity_MetaData[] = {
		{ "Category", "BlockInfo" },
		{ "ModuleRelativePath", "Block_CPP.h" },
	};
#endif
	void Z_Construct_UClass_ABlock_CPP_Statics::NewProp_HasGravity_SetBit(void* Obj)
	{
		((ABlock_CPP*)Obj)->HasGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlock_CPP_Statics::NewProp_HasGravity = { "HasGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlock_CPP), &Z_Construct_UClass_ABlock_CPP_Statics::NewProp_HasGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlock_CPP_Statics::NewProp_HasGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_CPP_Statics::NewProp_HasGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_CPP_Statics::NewProp_CubeMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Block_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_CPP_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock_CPP, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_CPP_Statics::NewProp_CubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_CPP_Statics::NewProp_CubeMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlock_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_CPP_Statics::NewProp_eBlockType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_CPP_Statics::NewProp_HasGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_CPP_Statics::NewProp_CubeMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlock_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlock_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlock_CPP_Statics::ClassParams = {
		&ABlock_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlock_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlock_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlock_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlock_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlock_CPP, 122213837);
	template<> MINECRAFT_API UClass* StaticClass<ABlock_CPP>()
	{
		return ABlock_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock_CPP(Z_Construct_UClass_ABlock_CPP, &ABlock_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("ABlock_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
