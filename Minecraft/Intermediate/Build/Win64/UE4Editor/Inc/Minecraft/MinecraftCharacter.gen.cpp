// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/MinecraftCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinecraftCharacter() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_AMinecraftCharacter_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AMinecraftCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AChunkRenderer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MINECRAFT_API UClass* Z_Construct_UClass_AMinecraftProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UHUD_W_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UInventory_W_CPP_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMinecraftCharacter::execAddItemR)
	{
		P_GET_OBJECT(UClass,Z_Param__item);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out__oCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItemR(Z_Param__item,Z_Param__count,Z_Param_Out__oCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinecraftCharacter::execAddItem)
	{
		P_GET_OBJECT(UClass,Z_Param__item);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param__item,Z_Param__count);
		P_NATIVE_END;
	}
	void AMinecraftCharacter::StaticRegisterNativesAMinecraftCharacter()
	{
		UClass* Class = AMinecraftCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &AMinecraftCharacter::execAddItem },
			{ "AddItemR", &AMinecraftCharacter::execAddItemR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics
	{
		struct MinecraftCharacter_eventAddItem_Parms
		{
			TSubclassOf<ABaseItem_CPP>  _item;
			uint8 _count;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__item;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__count;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinecraftCharacter_eventAddItem_Parms, _item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinecraftCharacter_eventAddItem_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MinecraftCharacter_eventAddItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MinecraftCharacter_eventAddItem_Parms), &Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::NewProp__item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinecraftCharacter, nullptr, "AddItem", nullptr, nullptr, sizeof(MinecraftCharacter_eventAddItem_Parms), Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinecraftCharacter_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinecraftCharacter_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics
	{
		struct MinecraftCharacter_eventAddItemR_Parms
		{
			TSubclassOf<ABaseItem_CPP>  _item;
			uint8 _count;
			uint8 _oCount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__item;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__count;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__oCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinecraftCharacter_eventAddItemR_Parms, _item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinecraftCharacter_eventAddItemR_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::NewProp__oCount = { "_oCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinecraftCharacter_eventAddItemR_Parms, _oCount), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MinecraftCharacter_eventAddItemR_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MinecraftCharacter_eventAddItemR_Parms), &Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::NewProp__item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::NewProp__oCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinecraftCharacter, nullptr, "AddItemR", nullptr, nullptr, sizeof(MinecraftCharacter_eventAddItemR_Parms), Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinecraftCharacter_AddItemR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinecraftCharacter_AddItemR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMinecraftCharacter_NoRegister()
	{
		return AMinecraftCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMinecraftCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_world_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_world;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HandedItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDSlotActive_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HUDSlotActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedItem_MetaData[];
#endif
		static void NewProp_UsedItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsedItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinecraftCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMinecraftCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinecraftCharacter_AddItem, "AddItem" }, // 299042243
		{ &Z_Construct_UFunction_AMinecraftCharacter_AddItemR, "AddItemR" }, // 2363187643
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MinecraftCharacter.h" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: 1st person view (seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FP_Gun = { "FP_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FP_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FP_MuzzleLocation = { "FP_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_VR_Gun = { "VR_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_VR_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on VR gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_VR_MuzzleLocation = { "VR_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MinecraftCharacter" },
		{ "Comment", "/** Motion controller (right hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_R_MotionController = { "R_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_R_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MinecraftCharacter" },
		{ "Comment", "/** Motion controller (left hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Motion controller (left hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_L_MotionController = { "L_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_L_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_m_world_MetaData[] = {
		{ "Category", "MinecraftCharacter" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_m_world = { "m_world", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, m_world), Z_Construct_UClass_AChunkRenderer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_m_world_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_m_world_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Projectile class to spawn */" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, ProjectileClass), Z_Construct_UClass_AMinecraftProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Whether to use motion controller location for aiming. */" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AMinecraftCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_bUsingMotionControllers = { "bUsingMotionControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMinecraftCharacter), &Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HandedItem_MetaData[] = {
		{ "Category", "MinecraftCharacter" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HandedItem = { "HandedItem", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, HandedItem), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HandedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HandedItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "Category", "MinecraftCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, HUDWidget), Z_Construct_UClass_UHUD_W_CPP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_InventoryWidget_MetaData[] = {
		{ "Category", "MinecraftCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_InventoryWidget = { "InventoryWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, InventoryWidget), Z_Construct_UClass_UInventory_W_CPP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_InventoryWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_InventoryWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HUDSlotActive_MetaData[] = {
		{ "Category", "MinecraftCharacter" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HUDSlotActive = { "HUDSlotActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinecraftCharacter, HUDSlotActive), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HUDSlotActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HUDSlotActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_UsedItem_MetaData[] = {
		{ "Category", "MinecraftCharacter" },
		{ "ModuleRelativePath", "MinecraftCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_UsedItem_SetBit(void* Obj)
	{
		((AMinecraftCharacter*)Obj)->UsedItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_UsedItem = { "UsedItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMinecraftCharacter), &Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_UsedItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_UsedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_UsedItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinecraftCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_VR_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_R_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_L_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_m_world,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_bUsingMotionControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HandedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_InventoryWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_HUDSlotActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinecraftCharacter_Statics::NewProp_UsedItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinecraftCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinecraftCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinecraftCharacter_Statics::ClassParams = {
		&AMinecraftCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMinecraftCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMinecraftCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinecraftCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinecraftCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinecraftCharacter, 1896647393);
	template<> MINECRAFT_API UClass* StaticClass<AMinecraftCharacter>()
	{
		return AMinecraftCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinecraftCharacter(Z_Construct_UClass_AMinecraftCharacter, &AMinecraftCharacter::StaticClass, TEXT("/Script/Minecraft"), TEXT("AMinecraftCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinecraftCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
