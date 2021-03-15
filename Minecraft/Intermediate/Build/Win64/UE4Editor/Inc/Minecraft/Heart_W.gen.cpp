// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/Heart_W.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeart_W() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_UHeart_W_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_UHeart_W();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHeart_W::execUpdateLife)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_life);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLife(Z_Param_life);
		P_NATIVE_END;
	}
	void UHeart_W::StaticRegisterNativesUHeart_W()
	{
		UClass* Class = UHeart_W::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateLife", &UHeart_W::execUpdateLife },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeart_W_UpdateLife_Statics
	{
		struct Heart_W_eventUpdateLife_Parms
		{
			int32 life;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_life;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHeart_W_UpdateLife_Statics::NewProp_life = { "life", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Heart_W_eventUpdateLife_Parms, life), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeart_W_UpdateLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeart_W_UpdateLife_Statics::NewProp_life,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeart_W_UpdateLife_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Heart_W.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeart_W_UpdateLife_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeart_W, nullptr, "UpdateLife", nullptr, nullptr, sizeof(Heart_W_eventUpdateLife_Parms), Z_Construct_UFunction_UHeart_W_UpdateLife_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeart_W_UpdateLife_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeart_W_UpdateLife_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeart_W_UpdateLife_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeart_W_UpdateLife()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeart_W_UpdateLife_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeart_W_NoRegister()
	{
		return UHeart_W::StaticClass();
	}
	struct Z_Construct_UClass_UHeart_W_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heart_left_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Heart_left;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heart_right_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Heart_right;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeart_W_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeart_W_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeart_W_UpdateLife, "UpdateLife" }, // 4248062973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeart_W_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Heart_W.h" },
		{ "ModuleRelativePath", "Heart_W.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeart_W_Statics::NewProp_Heart_left_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Heart_W" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Heart_W.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeart_W_Statics::NewProp_Heart_left = { "Heart_left", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeart_W, Heart_left), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeart_W_Statics::NewProp_Heart_left_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeart_W_Statics::NewProp_Heart_left_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeart_W_Statics::NewProp_Heart_right_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Heart_W" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Heart_W.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeart_W_Statics::NewProp_Heart_right = { "Heart_right", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeart_W, Heart_right), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeart_W_Statics::NewProp_Heart_right_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeart_W_Statics::NewProp_Heart_right_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeart_W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeart_W_Statics::NewProp_Heart_left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeart_W_Statics::NewProp_Heart_right,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeart_W_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeart_W>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeart_W_Statics::ClassParams = {
		&UHeart_W::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHeart_W_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeart_W_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeart_W_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeart_W_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeart_W()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeart_W_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeart_W, 3487366785);
	template<> MINECRAFT_API UClass* StaticClass<UHeart_W>()
	{
		return UHeart_W::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeart_W(Z_Construct_UClass_UHeart_W, &UHeart_W::StaticClass, TEXT("/Script/Minecraft"), TEXT("UHeart_W"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeart_W);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
