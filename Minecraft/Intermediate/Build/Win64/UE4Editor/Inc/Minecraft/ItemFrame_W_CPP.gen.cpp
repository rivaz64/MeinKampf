// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/ItemFrame_W_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFrame_W_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_UItemFrame_W_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UItemFrame_W_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UItemFrame_W_CPP::execUpdateItemsR)
	{
		P_GET_OBJECT(UClass,Z_Param__itemType);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out__oCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateItemsR(Z_Param__itemType,Z_Param__count,Z_Param_Out__oCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemFrame_W_CPP::execUpdateItems)
	{
		P_GET_OBJECT(UClass,Z_Param__itemType);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateItems(Z_Param__itemType,Z_Param__count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemFrame_W_CPP::execSubstractItem)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_sub);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubstractItem(Z_Param_sub);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemFrame_W_CPP::execAddItemR)
	{
		P_GET_OBJECT(UClass,Z_Param__item);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out__oCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItemR(Z_Param__item,Z_Param__count,Z_Param_Out__oCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemFrame_W_CPP::execAddItem)
	{
		P_GET_OBJECT(UClass,Z_Param__item);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param__item,Z_Param__count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemFrame_W_CPP::execGetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemFrame_W_CPP::execGetItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ABaseItem_CPP> *)Z_Param__Result=P_THIS->GetItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemFrame_W_CPP::execSetSelected)
	{
		P_GET_UBOOL(Z_Param_selected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelected(Z_Param_selected);
		P_NATIVE_END;
	}
	void UItemFrame_W_CPP::StaticRegisterNativesUItemFrame_W_CPP()
	{
		UClass* Class = UItemFrame_W_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UItemFrame_W_CPP::execAddItem },
			{ "AddItemR", &UItemFrame_W_CPP::execAddItemR },
			{ "GetCount", &UItemFrame_W_CPP::execGetCount },
			{ "GetItem", &UItemFrame_W_CPP::execGetItem },
			{ "SetSelected", &UItemFrame_W_CPP::execSetSelected },
			{ "SubstractItem", &UItemFrame_W_CPP::execSubstractItem },
			{ "UpdateItems", &UItemFrame_W_CPP::execUpdateItems },
			{ "UpdateItemsR", &UItemFrame_W_CPP::execUpdateItemsR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics
	{
		struct ItemFrame_W_CPP_eventAddItem_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventAddItem_Parms, _item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventAddItem_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemFrame_W_CPP_eventAddItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemFrame_W_CPP_eventAddItem_Parms), &Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::NewProp__item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFrame_W_CPP, nullptr, "AddItem", nullptr, nullptr, sizeof(ItemFrame_W_CPP_eventAddItem_Parms), Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemFrame_W_CPP_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemFrame_W_CPP_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics
	{
		struct ItemFrame_W_CPP_eventAddItemR_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventAddItemR_Parms, _item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventAddItemR_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::NewProp__oCount = { "_oCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventAddItemR_Parms, _oCount), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemFrame_W_CPP_eventAddItemR_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemFrame_W_CPP_eventAddItemR_Parms), &Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::NewProp__item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::NewProp__oCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFrame_W_CPP, nullptr, "AddItemR", nullptr, nullptr, sizeof(ItemFrame_W_CPP_eventAddItemR_Parms), Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemFrame_W_CPP_GetCount_Statics
	{
		struct ItemFrame_W_CPP_eventGetCount_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventGetCount_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFrame_W_CPP_GetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFrame_W_CPP_GetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFrame_W_CPP_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFrame_W_CPP, nullptr, "GetCount", nullptr, nullptr, sizeof(ItemFrame_W_CPP_eventGetCount_Parms), Z_Construct_UFunction_UItemFrame_W_CPP_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_GetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemFrame_W_CPP_GetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_GetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemFrame_W_CPP_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemFrame_W_CPP_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemFrame_W_CPP_GetItem_Statics
	{
		struct ItemFrame_W_CPP_eventGetItem_Parms
		{
			TSubclassOf<ABaseItem_CPP>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFrame_W_CPP_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_GetItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFrame_W_CPP_GetItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFrame_W_CPP_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFrame_W_CPP, nullptr, "GetItem", nullptr, nullptr, sizeof(ItemFrame_W_CPP_eventGetItem_Parms), Z_Construct_UFunction_UItemFrame_W_CPP_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_GetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemFrame_W_CPP_GetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemFrame_W_CPP_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemFrame_W_CPP_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics
	{
		struct ItemFrame_W_CPP_eventSetSelected_Parms
		{
			bool selected;
		};
		static void NewProp_selected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_selected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::NewProp_selected_SetBit(void* Obj)
	{
		((ItemFrame_W_CPP_eventSetSelected_Parms*)Obj)->selected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::NewProp_selected = { "selected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemFrame_W_CPP_eventSetSelected_Parms), &Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::NewProp_selected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::NewProp_selected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFrame_W_CPP, nullptr, "SetSelected", nullptr, nullptr, sizeof(ItemFrame_W_CPP_eventSetSelected_Parms), Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem_Statics
	{
		struct ItemFrame_W_CPP_eventSubstractItem_Parms
		{
			uint8 sub;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sub;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem_Statics::NewProp_sub = { "sub", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventSubstractItem_Parms, sub), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem_Statics::NewProp_sub,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFrame_W_CPP, nullptr, "SubstractItem", nullptr, nullptr, sizeof(ItemFrame_W_CPP_eventSubstractItem_Parms), Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics
	{
		struct ItemFrame_W_CPP_eventUpdateItems_Parms
		{
			TSubclassOf<ABaseItem_CPP>  _itemType;
			uint8 _count;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::NewProp__itemType = { "_itemType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventUpdateItems_Parms, _itemType), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventUpdateItems_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemFrame_W_CPP_eventUpdateItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemFrame_W_CPP_eventUpdateItems_Parms), &Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::NewProp__itemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFrame_W_CPP, nullptr, "UpdateItems", nullptr, nullptr, sizeof(ItemFrame_W_CPP_eventUpdateItems_Parms), Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics
	{
		struct ItemFrame_W_CPP_eventUpdateItemsR_Parms
		{
			TSubclassOf<ABaseItem_CPP>  _itemType;
			uint8 _count;
			uint8 _oCount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__itemType;
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::NewProp__itemType = { "_itemType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventUpdateItemsR_Parms, _itemType), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventUpdateItemsR_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::NewProp__oCount = { "_oCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFrame_W_CPP_eventUpdateItemsR_Parms, _oCount), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemFrame_W_CPP_eventUpdateItemsR_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemFrame_W_CPP_eventUpdateItemsR_Parms), &Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::NewProp__itemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::NewProp__oCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFrame_W_CPP, nullptr, "UpdateItemsR", nullptr, nullptr, sizeof(ItemFrame_W_CPP_eventUpdateItemsR_Parms), Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemFrame_W_CPP_NoRegister()
	{
		return UItemFrame_W_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UItemFrame_W_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Frame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrameSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Imagen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Imagen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_number_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Count_number;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurablityBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DurablityBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemFrame_W_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemFrame_W_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFrame_W_CPP_AddItem, "AddItem" }, // 1837510726
		{ &Z_Construct_UFunction_UItemFrame_W_CPP_AddItemR, "AddItemR" }, // 3964641678
		{ &Z_Construct_UFunction_UItemFrame_W_CPP_GetCount, "GetCount" }, // 2839685050
		{ &Z_Construct_UFunction_UItemFrame_W_CPP_GetItem, "GetItem" }, // 3286424515
		{ &Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected, "SetSelected" }, // 2094817745
		{ &Z_Construct_UFunction_UItemFrame_W_CPP_SubstractItem, "SubstractItem" }, // 3766551580
		{ &Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItems, "UpdateItems" }, // 1074096522
		{ &Z_Construct_UFunction_UItemFrame_W_CPP_UpdateItemsR, "UpdateItemsR" }, // 2443719345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFrame_W_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ItemFrame_W_CPP.h" },
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Frame_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemFrame_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemFrame_W_CPP, Frame), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Frame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_FrameSelected_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemFrame_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_FrameSelected = { "FrameSelected", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemFrame_W_CPP, FrameSelected), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_FrameSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_FrameSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Imagen_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemFrame_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Imagen = { "Imagen", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemFrame_W_CPP, Imagen), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Imagen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Imagen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Count_number_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemFrame_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Count_number = { "Count_number", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemFrame_W_CPP, Count_number), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Count_number_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Count_number_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_DurablityBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemFrame_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_DurablityBar = { "DurablityBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemFrame_W_CPP, DurablityBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_DurablityBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_DurablityBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "ItemFrame_W_CPP" },
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemFrame_W_CPP, Item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "ItemFrame_W_CPP" },
		{ "ModuleRelativePath", "ItemFrame_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemFrame_W_CPP, Count), nullptr, METADATA_PARAMS(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFrame_W_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_FrameSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Imagen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Count_number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_DurablityBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Count,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemFrame_W_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFrame_W_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemFrame_W_CPP_Statics::ClassParams = {
		&UItemFrame_W_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemFrame_W_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemFrame_W_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemFrame_W_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemFrame_W_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemFrame_W_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemFrame_W_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemFrame_W_CPP, 3947537443);
	template<> MINECRAFT_API UClass* StaticClass<UItemFrame_W_CPP>()
	{
		return UItemFrame_W_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemFrame_W_CPP(Z_Construct_UClass_UItemFrame_W_CPP, &UItemFrame_W_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("UItemFrame_W_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFrame_W_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
