// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/Chicken_W_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChicken_W_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_UChicken_W_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UChicken_W_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UChicken_W_CPP::execUpdateHunger)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_saturation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHunger(Z_Param_saturation);
		P_NATIVE_END;
	}
	void UChicken_W_CPP::StaticRegisterNativesUChicken_W_CPP()
	{
		UClass* Class = UChicken_W_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHunger", &UChicken_W_CPP::execUpdateHunger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger_Statics
	{
		struct Chicken_W_CPP_eventUpdateHunger_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger_Statics::NewProp_saturation = { "saturation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Chicken_W_CPP_eventUpdateHunger_Parms, saturation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger_Statics::NewProp_saturation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Chicken_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChicken_W_CPP, nullptr, "UpdateHunger", nullptr, nullptr, sizeof(Chicken_W_CPP_eventUpdateHunger_Parms), Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChicken_W_CPP_NoRegister()
	{
		return UChicken_W_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UChicken_W_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chicken_Full_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chicken_Full;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chicken_Halfed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chicken_Halfed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChicken_W_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChicken_W_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChicken_W_CPP_UpdateHunger, "UpdateHunger" }, // 324048037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChicken_W_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Chicken_W_CPP.h" },
		{ "ModuleRelativePath", "Chicken_W_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChicken_W_CPP_Statics::NewProp_Chicken_Full_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Chicken_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Chicken_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChicken_W_CPP_Statics::NewProp_Chicken_Full = { "Chicken_Full", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChicken_W_CPP, Chicken_Full), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChicken_W_CPP_Statics::NewProp_Chicken_Full_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChicken_W_CPP_Statics::NewProp_Chicken_Full_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChicken_W_CPP_Statics::NewProp_Chicken_Halfed_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Chicken_W_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Chicken_W_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChicken_W_CPP_Statics::NewProp_Chicken_Halfed = { "Chicken_Halfed", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChicken_W_CPP, Chicken_Halfed), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChicken_W_CPP_Statics::NewProp_Chicken_Halfed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChicken_W_CPP_Statics::NewProp_Chicken_Halfed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChicken_W_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChicken_W_CPP_Statics::NewProp_Chicken_Full,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChicken_W_CPP_Statics::NewProp_Chicken_Halfed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChicken_W_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChicken_W_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChicken_W_CPP_Statics::ClassParams = {
		&UChicken_W_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChicken_W_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChicken_W_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChicken_W_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChicken_W_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChicken_W_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChicken_W_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChicken_W_CPP, 2801760428);
	template<> MINECRAFT_API UClass* StaticClass<UChicken_W_CPP>()
	{
		return UChicken_W_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChicken_W_CPP(Z_Construct_UClass_UChicken_W_CPP, &UChicken_W_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("UChicken_W_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChicken_W_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
