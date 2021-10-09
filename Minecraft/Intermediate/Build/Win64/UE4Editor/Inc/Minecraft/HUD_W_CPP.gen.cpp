// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/HUD_W_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD_W_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_UHUD_W_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UHUD_W_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UHungerBar_W_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_ULifeBar_W_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UItemBar_W_CPP_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHUD_W_CPP::execUpdateItems)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_slot_num);
		P_GET_OBJECT(UClass,Z_Param__itemType);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateItems(Z_Param_slot_num,Z_Param__itemType,Z_Param__count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHUD_W_CPP::execSubstractItem)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_sub);
		P_GET_PROPERTY(FByteProperty,Z_Param_slot_num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubstractItem(Z_Param_sub,Z_Param_slot_num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHUD_W_CPP::execAddItem)
	{
		P_GET_OBJECT(UClass,Z_Param_item);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param_item,Z_Param__count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHUD_W_CPP::execGetCount)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_slot_num);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetCount(Z_Param_slot_num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHUD_W_CPP::execGetItem)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_slot_num);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ABaseItem_CPP> *)Z_Param__Result=P_THIS->GetItem(Z_Param_slot_num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHUD_W_CPP::execSetSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_itemSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelected(Z_Param_itemSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHUD_W_CPP::execUpdateLife)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_life);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxLife);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLife(Z_Param_life,Z_Param_maxLife);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHUD_W_CPP::execUpdateHunger)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_saturation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHunger(Z_Param_saturation);
		P_NATIVE_END;
	}
	void UHUD_W_CPP::StaticRegisterNativesUHUD_W_CPP()
	{
		UClass* Class = UHUD_W_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UHUD_W_CPP::execAddItem },
			{ "GetCount", &UHUD_W_CPP::execGetCount },
			{ "GetItem", &UHUD_W_CPP::execGetItem },
			{ "SetSelected", &UHUD_W_CPP::execSetSelected },
			{ "SubstractItem", &UHUD_W_CPP::execSubstractItem },
			{ "UpdateHunger", &UHUD_W_CPP::execUpdateHunger },
			{ "UpdateItems", &UHUD_W_CPP::execUpdateItems },
			{ "UpdateLife", &UHUD_W_CPP::execUpdateLife },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics
	{
		struct HUD_W_CPP_eventAddItem_Parms
		{
			TSubclassOf<ABaseItem_CPP>  item;
			uint8 _count;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__count;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventAddItem_Parms, item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventAddItem_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HUD_W_CPP_eventAddItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_W_CPP_eventAddItem_Parms), &Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_W_CPP, nullptr, "AddItem", nullptr, nullptr, sizeof(HUD_W_CPP_eventAddItem_Parms), Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_W_CPP_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_W_CPP_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics
	{
		struct HUD_W_CPP_eventGetCount_Parms
		{
			uint8 slot_num;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_num;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::NewProp_slot_num = { "slot_num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventGetCount_Parms, slot_num), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventGetCount_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::NewProp_slot_num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_W_CPP, nullptr, "GetCount", nullptr, nullptr, sizeof(HUD_W_CPP_eventGetCount_Parms), Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_W_CPP_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_W_CPP_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics
	{
		struct HUD_W_CPP_eventGetItem_Parms
		{
			uint8 slot_num;
			TSubclassOf<ABaseItem_CPP>  ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_num;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::NewProp_slot_num = { "slot_num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventGetItem_Parms, slot_num), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::NewProp_slot_num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_W_CPP, nullptr, "GetItem", nullptr, nullptr, sizeof(HUD_W_CPP_eventGetItem_Parms), Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_W_CPP_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_W_CPP_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUD_W_CPP_SetSelected_Statics
	{
		struct HUD_W_CPP_eventSetSelected_Parms
		{
			int32 itemSelected;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_itemSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHUD_W_CPP_SetSelected_Statics::NewProp_itemSelected = { "itemSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventSetSelected_Parms, itemSelected), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUD_W_CPP_SetSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_SetSelected_Statics::NewProp_itemSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_W_CPP_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_W_CPP_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_W_CPP, nullptr, "SetSelected", nullptr, nullptr, sizeof(HUD_W_CPP_eventSetSelected_Parms), Z_Construct_UFunction_UHUD_W_CPP_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_SetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_W_CPP_SetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_SetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_W_CPP_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_W_CPP_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics
	{
		struct HUD_W_CPP_eventSubstractItem_Parms
		{
			uint8 sub;
			uint8 slot_num;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sub;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::NewProp_sub = { "sub", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventSubstractItem_Parms, sub), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::NewProp_slot_num = { "slot_num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventSubstractItem_Parms, slot_num), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::NewProp_sub,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::NewProp_slot_num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_W_CPP, nullptr, "SubstractItem", nullptr, nullptr, sizeof(HUD_W_CPP_eventSubstractItem_Parms), Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_W_CPP_SubstractItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_W_CPP_SubstractItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger_Statics
	{
		struct HUD_W_CPP_eventUpdateHunger_Parms
		{
			int32 saturation;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_saturation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger_Statics::NewProp_saturation = { "saturation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventUpdateHunger_Parms, saturation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger_Statics::NewProp_saturation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_W_CPP, nullptr, "UpdateHunger", nullptr, nullptr, sizeof(HUD_W_CPP_eventUpdateHunger_Parms), Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics
	{
		struct HUD_W_CPP_eventUpdateItems_Parms
		{
			uint8 slot_num;
			TSubclassOf<ABaseItem_CPP>  _itemType;
			uint8 _count;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_num;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__itemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__count;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::NewProp_slot_num = { "slot_num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventUpdateItems_Parms, slot_num), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::NewProp__itemType = { "_itemType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventUpdateItems_Parms, _itemType), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventUpdateItems_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HUD_W_CPP_eventUpdateItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HUD_W_CPP_eventUpdateItems_Parms), &Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::NewProp_slot_num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::NewProp__itemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_W_CPP, nullptr, "UpdateItems", nullptr, nullptr, sizeof(HUD_W_CPP_eventUpdateItems_Parms), Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_W_CPP_UpdateItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_W_CPP_UpdateItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics
	{
		struct HUD_W_CPP_eventUpdateLife_Parms
		{
			int32 life;
			int32 maxLife;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_life;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxLife;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::NewProp_life = { "life", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventUpdateLife_Parms, life), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::NewProp_maxLife = { "maxLife", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_W_CPP_eventUpdateLife_Parms, maxLife), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::NewProp_life,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::NewProp_maxLife,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_W_CPP, nullptr, "UpdateLife", nullptr, nullptr, sizeof(HUD_W_CPP_eventUpdateLife_Parms), Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_W_CPP_UpdateLife()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_W_CPP_UpdateLife_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHUD_W_CPP_NoRegister()
	{
		return UHUD_W_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UHUD_W_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HungerBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HungerBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHUD_W_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHUD_W_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHUD_W_CPP_AddItem, "AddItem" }, // 3194135003
		{ &Z_Construct_UFunction_UHUD_W_CPP_GetCount, "GetCount" }, // 2983446939
		{ &Z_Construct_UFunction_UHUD_W_CPP_GetItem, "GetItem" }, // 3482090611
		{ &Z_Construct_UFunction_UHUD_W_CPP_SetSelected, "SetSelected" }, // 497020550
		{ &Z_Construct_UFunction_UHUD_W_CPP_SubstractItem, "SubstractItem" }, // 384995971
		{ &Z_Construct_UFunction_UHUD_W_CPP_UpdateHunger, "UpdateHunger" }, // 2230710603
		{ &Z_Construct_UFunction_UHUD_W_CPP_UpdateItems, "UpdateItems" }, // 1940384591
		{ &Z_Construct_UFunction_UHUD_W_CPP_UpdateLife, "UpdateLife" }, // 4004498324
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_W_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD_W_CPP.h" },
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_HungerBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HUD_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_HungerBar = { "HungerBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_W_CPP, HungerBar), Z_Construct_UClass_UHungerBar_W_CPP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_HungerBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_HungerBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_LifeBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HUD_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_LifeBar = { "LifeBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_W_CPP, LifeBar), Z_Construct_UClass_ULifeBar_W_CPP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_LifeBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_LifeBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_ItemBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HUD_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_ItemBar = { "ItemBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_W_CPP, ItemBar), Z_Construct_UClass_UItemBar_W_CPP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_ItemBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_ItemBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHUD_W_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_HungerBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_LifeBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_W_CPP_Statics::NewProp_ItemBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHUD_W_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUD_W_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHUD_W_CPP_Statics::ClassParams = {
		&UHUD_W_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHUD_W_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_W_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHUD_W_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_W_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHUD_W_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHUD_W_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHUD_W_CPP, 1968905271);
	template<> MINECRAFT_API UClass* StaticClass<UHUD_W_CPP>()
	{
		return UHUD_W_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHUD_W_CPP(Z_Construct_UClass_UHUD_W_CPP, &UHUD_W_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("UHUD_W_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHUD_W_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
