// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/ItemBar_W_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBar_W_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_UItemBar_W_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UItemBar_W_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UItemBar_W_CPP::execUpdateItems)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__index);
		P_GET_OBJECT(UClass,Z_Param__itemType);
		P_GET_PROPERTY(FByteProperty,Z_Param__count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateItems(Z_Param__index,Z_Param__itemType,Z_Param__count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemBar_W_CPP::execSetSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_itemSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelected(Z_Param_itemSelected);
		P_NATIVE_END;
	}
	void UItemBar_W_CPP::StaticRegisterNativesUItemBar_W_CPP()
	{
		UClass* Class = UItemBar_W_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSelected", &UItemBar_W_CPP::execSetSelected },
			{ "UpdateItems", &UItemBar_W_CPP::execUpdateItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemBar_W_CPP_SetSelected_Statics
	{
		struct ItemBar_W_CPP_eventSetSelected_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UItemBar_W_CPP_SetSelected_Statics::NewProp_itemSelected = { "itemSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBar_W_CPP_eventSetSelected_Parms, itemSelected), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBar_W_CPP_SetSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBar_W_CPP_SetSelected_Statics::NewProp_itemSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBar_W_CPP_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBar_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBar_W_CPP_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBar_W_CPP, nullptr, "SetSelected", nullptr, nullptr, sizeof(ItemBar_W_CPP_eventSetSelected_Parms), Z_Construct_UFunction_UItemBar_W_CPP_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBar_W_CPP_SetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemBar_W_CPP_SetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBar_W_CPP_SetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemBar_W_CPP_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemBar_W_CPP_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics
	{
		struct ItemBar_W_CPP_eventUpdateItems_Parms
		{
			uint8 _index;
			TSubclassOf<ABaseItem_CPP>  _itemType;
			uint8 _count;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__index;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBar_W_CPP_eventUpdateItems_Parms, _index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::NewProp__itemType = { "_itemType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBar_W_CPP_eventUpdateItems_Parms, _itemType), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::NewProp__count = { "_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBar_W_CPP_eventUpdateItems_Parms, _count), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemBar_W_CPP_eventUpdateItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemBar_W_CPP_eventUpdateItems_Parms), &Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::NewProp__index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::NewProp__itemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::NewProp__count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBar_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBar_W_CPP, nullptr, "UpdateItems", nullptr, nullptr, sizeof(ItemBar_W_CPP_eventUpdateItems_Parms), Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemBar_W_CPP_NoRegister()
	{
		return UItemBar_W_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UItemBar_W_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemBar_W_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemBar_W_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemBar_W_CPP_SetSelected, "SetSelected" }, // 2689340859
		{ &Z_Construct_UFunction_UItemBar_W_CPP_UpdateItems, "UpdateItems" }, // 2723604361
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBar_W_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ItemBar_W_CPP.h" },
		{ "ModuleRelativePath", "ItemBar_W_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBar_W_CPP_Statics::NewProp_Bar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemBar_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBar_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemBar_W_CPP_Statics::NewProp_Bar = { "Bar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemBar_W_CPP, Bar), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemBar_W_CPP_Statics::NewProp_Bar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemBar_W_CPP_Statics::NewProp_Bar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemBar_W_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBar_W_CPP_Statics::NewProp_Bar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemBar_W_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemBar_W_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemBar_W_CPP_Statics::ClassParams = {
		&UItemBar_W_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemBar_W_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemBar_W_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemBar_W_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemBar_W_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemBar_W_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemBar_W_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemBar_W_CPP, 1326129806);
	template<> MINECRAFT_API UClass* StaticClass<UItemBar_W_CPP>()
	{
		return UItemBar_W_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemBar_W_CPP(Z_Construct_UClass_UItemBar_W_CPP, &UItemBar_W_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("UItemBar_W_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemBar_W_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
