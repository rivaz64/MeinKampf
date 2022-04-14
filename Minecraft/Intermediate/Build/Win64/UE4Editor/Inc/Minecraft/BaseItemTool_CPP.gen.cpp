// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/BaseItemTool_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseItemTool_CPP() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItemTool_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItemTool_CPP();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	MINECRAFT_API UEnum* Z_Construct_UEnum_Minecraft_eMATERIAL_TYPE();
// End Cross Module References
	DEFINE_FUNCTION(ABaseItemTool_CPP::execsetMaterialType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_materialType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setMaterialType(eMATERIAL_TYPE(Z_Param_materialType));
		P_NATIVE_END;
	}
	void ABaseItemTool_CPP::StaticRegisterNativesABaseItemTool_CPP()
	{
		UClass* Class = ABaseItemTool_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "setMaterialType", &ABaseItemTool_CPP::execsetMaterialType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType_Statics
	{
		struct BaseItemTool_CPP_eventsetMaterialType_Parms
		{
			TEnumAsByte<eMATERIAL_TYPE> materialType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_materialType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType_Statics::NewProp_materialType = { "materialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItemTool_CPP_eventsetMaterialType_Parms, materialType), Z_Construct_UEnum_Minecraft_eMATERIAL_TYPE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType_Statics::NewProp_materialType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseItemTool_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseItemTool_CPP, nullptr, "setMaterialType", nullptr, nullptr, sizeof(BaseItemTool_CPP_eventsetMaterialType_Parms), Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseItemTool_CPP_NoRegister()
	{
		return ABaseItemTool_CPP::StaticClass();
	}
	struct Z_Construct_UClass_ABaseItemTool_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseItemTool_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseItem_CPP,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseItemTool_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseItemTool_CPP_setMaterialType, "setMaterialType" }, // 3953808743
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItemTool_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseItemTool_CPP.h" },
		{ "ModuleRelativePath", "BaseItemTool_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseItemTool_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseItemTool_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseItemTool_CPP_Statics::ClassParams = {
		&ABaseItemTool_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseItemTool_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItemTool_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseItemTool_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseItemTool_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseItemTool_CPP, 1196747009);
	template<> MINECRAFT_API UClass* StaticClass<ABaseItemTool_CPP>()
	{
		return ABaseItemTool_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseItemTool_CPP(Z_Construct_UClass_ABaseItemTool_CPP, &ABaseItemTool_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("ABaseItemTool_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseItemTool_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
