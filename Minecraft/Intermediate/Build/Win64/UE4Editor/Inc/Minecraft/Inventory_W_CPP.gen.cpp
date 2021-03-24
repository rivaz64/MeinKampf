// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/Inventory_W_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory_W_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_UInventory_W_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UInventory_W_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UHUD_W_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UItemFrame_W_CPP_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventory_W_CPP::execSetHUD)
	{
		P_GET_OBJECT(UHUD_W_CPP,Z_Param__hud);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHUD(Z_Param__hud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory_W_CPP::execSubstractItem)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_sub);
		P_GET_PROPERTY(FByteProperty,Z_Param_slot_num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubstractItem(Z_Param_sub,Z_Param_slot_num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory_W_CPP::execAddItem)
	{
		P_GET_OBJECT(UClass,Z_Param__item);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param__item,Z_Param__count);
		P_NATIVE_END;
	}
	void UInventory_W_CPP::StaticRegisterNativesUInventory_W_CPP()
	{
		UClass* Class = UInventory_W_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UInventory_W_CPP::execAddItem },
			{ "SetHUD", &UInventory_W_CPP::execSetHUD },
			{ "SubstractItem", &UInventory_W_CPP::execSubstractItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics
	{
		struct Inventory_W_CPP_eventAddItem_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_W_CPP_eventAddItem_Parms, _item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_W_CPP_eventAddItem_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_W_CPP_eventAddItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_W_CPP_eventAddItem_Parms), &Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::NewProp__item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory_W_CPP, nullptr, "AddItem", nullptr, nullptr, sizeof(Inventory_W_CPP_eventAddItem_Parms), Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_W_CPP_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_W_CPP_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics
	{
		struct Inventory_W_CPP_eventSetHUD_Parms
		{
			UHUD_W_CPP* _hud;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hud_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::NewProp__hud_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::NewProp__hud = { "_hud", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_W_CPP_eventSetHUD_Parms, _hud), Z_Construct_UClass_UHUD_W_CPP_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::NewProp__hud_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::NewProp__hud_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::NewProp__hud,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory_W_CPP, nullptr, "SetHUD", nullptr, nullptr, sizeof(Inventory_W_CPP_eventSetHUD_Parms), Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_W_CPP_SetHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_W_CPP_SetHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics
	{
		struct Inventory_W_CPP_eventSubstractItem_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::NewProp_sub = { "sub", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_W_CPP_eventSubstractItem_Parms, sub), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::NewProp_slot_num = { "slot_num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_W_CPP_eventSubstractItem_Parms, slot_num), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::NewProp_sub,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::NewProp_slot_num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory_W_CPP, nullptr, "SubstractItem", nullptr, nullptr, sizeof(Inventory_W_CPP_eventSubstractItem_Parms), Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_W_CPP_SubstractItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_W_CPP_SubstractItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventory_W_CPP_NoRegister()
	{
		return UInventory_W_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_W_CPP_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_W_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventory_W_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_W_CPP_AddItem, "AddItem" }, // 3438095297
		{ &Z_Construct_UFunction_UInventory_W_CPP_SetHUD, "SetHUD" }, // 2712007766
		{ &Z_Construct_UFunction_UInventory_W_CPP_SubstractItem, "SubstractItem" }, // 2518915844
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_W_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Inventory_W_CPP.h" },
		{ "ModuleRelativePath", "Inventory_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemFrame_W_CPP_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_Slots_MetaData[] = {
		{ "Category", "Inventory_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x001000800000000c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory_W_CPP, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_Slots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_HUD_MetaData[] = {
		{ "Category", "Inventory_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory_W_CPP, HUD), Z_Construct_UClass_UHUD_W_CPP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_HUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_HUD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_W_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_Slots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_Slots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_W_CPP_Statics::NewProp_HUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_W_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory_W_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventory_W_CPP_Statics::ClassParams = {
		&UInventory_W_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventory_W_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_W_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventory_W_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_W_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventory_W_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventory_W_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventory_W_CPP, 502848842);
	template<> MINECRAFT_API UClass* StaticClass<UInventory_W_CPP>()
	{
		return UInventory_W_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventory_W_CPP(Z_Construct_UClass_UInventory_W_CPP, &UInventory_W_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("UInventory_W_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory_W_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
