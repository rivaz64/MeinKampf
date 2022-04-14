// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/CraftingTable_W_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraftingTable_W_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_UCraftingTable_W_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UCraftingTable_W_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AMinecraftCharacter_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UItemFrame_W_CPP_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCraftingTable_W_CPP::execUpdateSlotItemC)
	{
		P_GET_OBJECT(UClass,Z_Param__item);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_GET_PROPERTY(FByteProperty,Z_Param__index);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out__oCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateSlotItemC(Z_Param__item,Z_Param__count,Z_Param__index,Z_Param_Out__oCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCraftingTable_W_CPP::execSubstractSlotItemC)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_GET_PROPERTY(FByteProperty,Z_Param__index);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out__oCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SubstractSlotItemC(Z_Param__count,Z_Param__index,Z_Param_Out__oCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCraftingTable_W_CPP::execAddSlotItemC)
	{
		P_GET_OBJECT(UClass,Z_Param__item);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_GET_PROPERTY(FByteProperty,Z_Param__index);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out__oCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSlotItemC(Z_Param__item,Z_Param__count,Z_Param__index,Z_Param_Out__oCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCraftingTable_W_CPP::execSubstractItemC)
	{
		P_GET_OBJECT(UClass,Z_Param__item);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out__oCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SubstractItemC(Z_Param__item,Z_Param__count,Z_Param_Out__oCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCraftingTable_W_CPP::execAddItemC)
	{
		P_GET_OBJECT(UClass,Z_Param__item);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out__oCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItemC(Z_Param__item,Z_Param__count,Z_Param_Out__oCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCraftingTable_W_CPP::execUpdateItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCraftingTable_W_CPP::execSetOwnerPlayer)
	{
		P_GET_OBJECT(AMinecraftCharacter,Z_Param__player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwnerPlayer(Z_Param__player);
		P_NATIVE_END;
	}
	void UCraftingTable_W_CPP::StaticRegisterNativesUCraftingTable_W_CPP()
	{
		UClass* Class = UCraftingTable_W_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemC", &UCraftingTable_W_CPP::execAddItemC },
			{ "AddSlotItemC", &UCraftingTable_W_CPP::execAddSlotItemC },
			{ "SetOwnerPlayer", &UCraftingTable_W_CPP::execSetOwnerPlayer },
			{ "SubstractItemC", &UCraftingTable_W_CPP::execSubstractItemC },
			{ "SubstractSlotItemC", &UCraftingTable_W_CPP::execSubstractSlotItemC },
			{ "UpdateItems", &UCraftingTable_W_CPP::execUpdateItems },
			{ "UpdateSlotItemC", &UCraftingTable_W_CPP::execUpdateSlotItemC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics
	{
		struct CraftingTable_W_CPP_eventAddItemC_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventAddItemC_Parms, _item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventAddItemC_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::NewProp__oCount = { "_oCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventAddItemC_Parms, _oCount), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CraftingTable_W_CPP_eventAddItemC_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CraftingTable_W_CPP_eventAddItemC_Parms), &Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::NewProp__item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::NewProp__oCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CraftingTable_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftingTable_W_CPP, nullptr, "AddItemC", nullptr, nullptr, sizeof(CraftingTable_W_CPP_eventAddItemC_Parms), Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics
	{
		struct CraftingTable_W_CPP_eventAddSlotItemC_Parms
		{
			TSubclassOf<ABaseItem_CPP>  _item;
			uint8 _count;
			uint8 _index;
			uint8 _oCount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__item;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__count;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__oCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventAddSlotItemC_Parms, _item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventAddSlotItemC_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventAddSlotItemC_Parms, _index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp__oCount = { "_oCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventAddSlotItemC_Parms, _oCount), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CraftingTable_W_CPP_eventAddSlotItemC_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CraftingTable_W_CPP_eventAddSlotItemC_Parms), &Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp__item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp__index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp__oCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CraftingTable_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftingTable_W_CPP, nullptr, "AddSlotItemC", nullptr, nullptr, sizeof(CraftingTable_W_CPP_eventAddSlotItemC_Parms), Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer_Statics
	{
		struct CraftingTable_W_CPP_eventSetOwnerPlayer_Parms
		{
			AMinecraftCharacter* _player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer_Statics::NewProp__player = { "_player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventSetOwnerPlayer_Parms, _player), Z_Construct_UClass_AMinecraftCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer_Statics::NewProp__player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CraftingTable_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftingTable_W_CPP, nullptr, "SetOwnerPlayer", nullptr, nullptr, sizeof(CraftingTable_W_CPP_eventSetOwnerPlayer_Parms), Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics
	{
		struct CraftingTable_W_CPP_eventSubstractItemC_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventSubstractItemC_Parms, _item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventSubstractItemC_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::NewProp__oCount = { "_oCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventSubstractItemC_Parms, _oCount), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CraftingTable_W_CPP_eventSubstractItemC_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CraftingTable_W_CPP_eventSubstractItemC_Parms), &Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::NewProp__item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::NewProp__oCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CraftingTable_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftingTable_W_CPP, nullptr, "SubstractItemC", nullptr, nullptr, sizeof(CraftingTable_W_CPP_eventSubstractItemC_Parms), Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics
	{
		struct CraftingTable_W_CPP_eventSubstractSlotItemC_Parms
		{
			uint8 _count;
			uint8 _index;
			uint8 _oCount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__count;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__oCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventSubstractSlotItemC_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventSubstractSlotItemC_Parms, _index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::NewProp__oCount = { "_oCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventSubstractSlotItemC_Parms, _oCount), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CraftingTable_W_CPP_eventSubstractSlotItemC_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CraftingTable_W_CPP_eventSubstractSlotItemC_Parms), &Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::NewProp__index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::NewProp__oCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CraftingTable_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftingTable_W_CPP, nullptr, "SubstractSlotItemC", nullptr, nullptr, sizeof(CraftingTable_W_CPP_eventSubstractSlotItemC_Parms), Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CraftingTable_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftingTable_W_CPP, nullptr, "UpdateItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics
	{
		struct CraftingTable_W_CPP_eventUpdateSlotItemC_Parms
		{
			TSubclassOf<ABaseItem_CPP>  _item;
			uint8 _count;
			uint8 _index;
			uint8 _oCount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__item;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__count;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__oCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventUpdateSlotItemC_Parms, _item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventUpdateSlotItemC_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventUpdateSlotItemC_Parms, _index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp__oCount = { "_oCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_W_CPP_eventUpdateSlotItemC_Parms, _oCount), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CraftingTable_W_CPP_eventUpdateSlotItemC_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CraftingTable_W_CPP_eventUpdateSlotItemC_Parms), &Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp__item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp__index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp__oCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CraftingTable_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftingTable_W_CPP, nullptr, "UpdateSlotItemC", nullptr, nullptr, sizeof(CraftingTable_W_CPP_eventUpdateSlotItemC_Parms), Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCraftingTable_W_CPP_NoRegister()
	{
		return UCraftingTable_W_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UCraftingTable_W_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Slots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCraftingTable_W_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCraftingTable_W_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCraftingTable_W_CPP_AddItemC, "AddItemC" }, // 3566585299
		{ &Z_Construct_UFunction_UCraftingTable_W_CPP_AddSlotItemC, "AddSlotItemC" }, // 1725489096
		{ &Z_Construct_UFunction_UCraftingTable_W_CPP_SetOwnerPlayer, "SetOwnerPlayer" }, // 3242931392
		{ &Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractItemC, "SubstractItemC" }, // 3688920804
		{ &Z_Construct_UFunction_UCraftingTable_W_CPP_SubstractSlotItemC, "SubstractSlotItemC" }, // 1821996448
		{ &Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateItems, "UpdateItems" }, // 1138059770
		{ &Z_Construct_UFunction_UCraftingTable_W_CPP_UpdateSlotItemC, "UpdateSlotItemC" }, // 3304698728
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftingTable_W_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CraftingTable_W_CPP.h" },
		{ "ModuleRelativePath", "CraftingTable_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemFrame_W_CPP_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Slots_MetaData[] = {
		{ "Category", "CraftingTable_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CraftingTable_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x001000800000000c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCraftingTable_W_CPP, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Slots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "CraftingTable_W_CPP" },
		{ "ModuleRelativePath", "CraftingTable_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCraftingTable_W_CPP, Player), Z_Construct_UClass_AMinecraftCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCraftingTable_W_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Slots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Slots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftingTable_W_CPP_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCraftingTable_W_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCraftingTable_W_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCraftingTable_W_CPP_Statics::ClassParams = {
		&UCraftingTable_W_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCraftingTable_W_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCraftingTable_W_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCraftingTable_W_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCraftingTable_W_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCraftingTable_W_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCraftingTable_W_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCraftingTable_W_CPP, 3849765433);
	template<> MINECRAFT_API UClass* StaticClass<UCraftingTable_W_CPP>()
	{
		return UCraftingTable_W_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCraftingTable_W_CPP(Z_Construct_UClass_UCraftingTable_W_CPP, &UCraftingTable_W_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("UCraftingTable_W_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCraftingTable_W_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
