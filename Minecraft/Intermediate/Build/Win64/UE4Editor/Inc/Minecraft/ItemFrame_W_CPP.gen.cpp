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
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
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
			{ "SetSelected", &UItemFrame_W_CPP::execSetSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemFrame_W_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemFrame_W_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFrame_W_CPP_SetSelected, "SetSelected" }, // 2094817745
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFrame_W_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFrame_W_CPP_Statics::NewProp_FrameSelected,
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
	IMPLEMENT_CLASS(UItemFrame_W_CPP, 1525246956);
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
