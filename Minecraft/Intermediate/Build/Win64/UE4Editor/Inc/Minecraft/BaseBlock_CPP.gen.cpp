// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/BaseBlock_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBlock_CPP() {}
// Cross Module References
	MINECRAFT_API UEnum* Z_Construct_UEnum_Minecraft_eBLOCK_TYPES();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseBlock_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseBlock_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItemBlock_CPP_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static UEnum* eBLOCK_TYPES_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Minecraft_eBLOCK_TYPES, Z_Construct_UPackage__Script_Minecraft(), TEXT("eBLOCK_TYPES"));
		}
		return Singleton;
	}
	template<> MINECRAFT_API UEnum* StaticEnum<eBLOCK_TYPES>()
	{
		return eBLOCK_TYPES_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eBLOCK_TYPES(eBLOCK_TYPES_StaticEnum, TEXT("/Script/Minecraft"), TEXT("eBLOCK_TYPES"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Minecraft_eBLOCK_TYPES_Hash() { return 1195331100U; }
	UEnum* Z_Construct_UEnum_Minecraft_eBLOCK_TYPES()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Minecraft();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eBLOCK_TYPES"), 0, Get_Z_Construct_UEnum_Minecraft_eBLOCK_TYPES_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SOLID", (int64)SOLID },
				{ "LIQUID", (int64)LIQUID },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LIQUID.DisplayName", "LIQUID" },
				{ "LIQUID.Name", "LIQUID" },
				{ "ModuleRelativePath", "BaseBlock_CPP.h" },
				{ "SOLID.DisplayName", "SOLID" },
				{ "SOLID.Name", "SOLID" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Minecraft,
				nullptr,
				"eBLOCK_TYPES",
				"eBLOCK_TYPES",
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
	void ABaseBlock_CPP::StaticRegisterNativesABaseBlock_CPP()
	{
	}
	UClass* Z_Construct_UClass_ABaseBlock_CPP_NoRegister()
	{
		return ABaseBlock_CPP::StaticClass();
	}
	struct Z_Construct_UClass_ABaseBlock_CPP_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropItemBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DropItemBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpCubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpCubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownCubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownCubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftCubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftCubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightCubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightCubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontCubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontCubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackCubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackCubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameCubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrameCubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsideMenuClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InsideMenuClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsideMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InsideMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAlive_MetaData[];
#endif
		static void NewProp_isAlive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAlive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenWidget_MetaData[];
#endif
		static void NewProp_OpenWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OpenWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseBlock_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseBlock_CPP.h" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_eBlockType_MetaData[] = {
		{ "Category", "BlockInfo" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_eBlockType = { "eBlockType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, eBlockType), Z_Construct_UEnum_Minecraft_eBLOCK_TYPES, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_eBlockType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_eBlockType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_HasGravity_MetaData[] = {
		{ "Category", "BlockInfo" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	void Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_HasGravity_SetBit(void* Obj)
	{
		((ABaseBlock_CPP*)Obj)->HasGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_HasGravity = { "HasGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseBlock_CPP), &Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_HasGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_HasGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_HasGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DropItemBlock_MetaData[] = {
		{ "Category", "BlockInfo" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DropItemBlock = { "DropItemBlock", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, DropItemBlock), Z_Construct_UClass_ABaseItemBlock_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DropItemBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DropItemBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BoxCollider_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BoxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BoxCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_UpCubeMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_UpCubeMesh = { "UpCubeMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, UpCubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_UpCubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_UpCubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DownCubeMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DownCubeMesh = { "DownCubeMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, DownCubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DownCubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DownCubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_LeftCubeMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_LeftCubeMesh = { "LeftCubeMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, LeftCubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_LeftCubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_LeftCubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_RightCubeMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_RightCubeMesh = { "RightCubeMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, RightCubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_RightCubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_RightCubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrontCubeMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrontCubeMesh = { "FrontCubeMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, FrontCubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrontCubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrontCubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BackCubeMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BackCubeMesh = { "BackCubeMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, BackCubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BackCubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BackCubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrameCubeMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrameCubeMesh = { "FrameCubeMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, FrameCubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrameCubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrameCubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_UpMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_UpMaterial = { "UpMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, UpMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_UpMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_UpMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DownMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DownMaterial = { "DownMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, DownMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DownMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DownMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_LeftMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_LeftMaterial = { "LeftMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, LeftMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_LeftMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_LeftMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_RightMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_RightMaterial = { "RightMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, RightMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_RightMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_RightMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrontMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrontMaterial = { "FrontMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, FrontMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrontMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrontMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BackMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BackMaterial = { "BackMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, BackMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BackMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BackMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_InsideMenuClass_MetaData[] = {
		{ "Category", "BlockInfo" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_InsideMenuClass = { "InsideMenuClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, InsideMenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_InsideMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_InsideMenuClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_InsideMenu_MetaData[] = {
		{ "Category", "BlockInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_InsideMenu = { "InsideMenu", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBlock_CPP, InsideMenu), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_InsideMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_InsideMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_isAlive_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	void Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_isAlive_SetBit(void* Obj)
	{
		((ABaseBlock_CPP*)Obj)->isAlive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_isAlive = { "isAlive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseBlock_CPP), &Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_isAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_isAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_isAlive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_OpenWidget_MetaData[] = {
		{ "Category", "BaseBlock_CPP" },
		{ "ModuleRelativePath", "BaseBlock_CPP.h" },
	};
#endif
	void Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_OpenWidget_SetBit(void* Obj)
	{
		((ABaseBlock_CPP*)Obj)->OpenWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_OpenWidget = { "OpenWidget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseBlock_CPP), &Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_OpenWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_OpenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_OpenWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseBlock_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_eBlockType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_HasGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DropItemBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BoxCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_UpCubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DownCubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_LeftCubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_RightCubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrontCubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BackCubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrameCubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_UpMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_DownMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_LeftMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_RightMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_FrontMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_BackMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_InsideMenuClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_InsideMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_isAlive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_CPP_Statics::NewProp_OpenWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseBlock_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseBlock_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseBlock_CPP_Statics::ClassParams = {
		&ABaseBlock_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseBlock_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseBlock_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseBlock_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseBlock_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseBlock_CPP, 1878814727);
	template<> MINECRAFT_API UClass* StaticClass<ABaseBlock_CPP>()
	{
		return ABaseBlock_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseBlock_CPP(Z_Construct_UClass_ABaseBlock_CPP, &ABaseBlock_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("ABaseBlock_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseBlock_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
