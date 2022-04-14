// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/DropManager_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropManager_CPP() {}
// Cross Module References
	MINECRAFT_API UEnum* Z_Construct_UEnum_Minecraft_eSPAWN_ITEM_TYPE();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	MINECRAFT_API UClass* Z_Construct_UClass_ADropManager_CPP_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_ADropManager_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINECRAFT_API UClass* Z_Construct_UClass_ABaseItem_CPP_NoRegister();
// End Cross Module References
	static UEnum* eSPAWN_ITEM_TYPE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Minecraft_eSPAWN_ITEM_TYPE, Z_Construct_UPackage__Script_Minecraft(), TEXT("eSPAWN_ITEM_TYPE"));
		}
		return Singleton;
	}
	template<> MINECRAFT_API UEnum* StaticEnum<eSPAWN_ITEM_TYPE>()
	{
		return eSPAWN_ITEM_TYPE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eSPAWN_ITEM_TYPE(eSPAWN_ITEM_TYPE_StaticEnum, TEXT("/Script/Minecraft"), TEXT("eSPAWN_ITEM_TYPE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Minecraft_eSPAWN_ITEM_TYPE_Hash() { return 3804229447U; }
	UEnum* Z_Construct_UEnum_Minecraft_eSPAWN_ITEM_TYPE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Minecraft();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eSPAWN_ITEM_TYPE"), 0, Get_Z_Construct_UEnum_Minecraft_eSPAWN_ITEM_TYPE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SPAWN_NONE", (int64)SPAWN_NONE },
				{ "SPAWN_BLOCK", (int64)SPAWN_BLOCK },
				{ "SPAWN_TOOL", (int64)SPAWN_TOOL },
				{ "SPAWN_MISC", (int64)SPAWN_MISC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "DropManager_CPP.h" },
				{ "SPAWN_BLOCK.Name", "SPAWN_BLOCK" },
				{ "SPAWN_MISC.Name", "SPAWN_MISC" },
				{ "SPAWN_NONE.Name", "SPAWN_NONE" },
				{ "SPAWN_TOOL.Name", "SPAWN_TOOL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Minecraft,
				nullptr,
				"eSPAWN_ITEM_TYPE",
				"eSPAWN_ITEM_TYPE",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ADropManager_CPP::execSpawnItemFromClass)
	{
		P_GET_STRUCT(FVector,Z_Param_pos);
		P_GET_OBJECT(UClass,Z_Param_item);
		P_GET_PROPERTY(FByteProperty,Z_Param_count);
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeTillCollect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnItemFromClass(Z_Param_pos,Z_Param_item,Z_Param_count,Z_Param_timeTillCollect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADropManager_CPP::execSpawnItemFromType)
	{
		P_GET_STRUCT(FVector,Z_Param_pos);
		P_GET_PROPERTY(FByteProperty,Z_Param_type);
		P_GET_PROPERTY(FIntProperty,Z_Param_subType);
		P_GET_PROPERTY(FByteProperty,Z_Param_count);
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeTillCollect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnItemFromType(Z_Param_pos,eSPAWN_ITEM_TYPE(Z_Param_type),Z_Param_subType,Z_Param_count,Z_Param_timeTillCollect);
		P_NATIVE_END;
	}
	void ADropManager_CPP::StaticRegisterNativesADropManager_CPP()
	{
		UClass* Class = ADropManager_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnItemFromClass", &ADropManager_CPP::execSpawnItemFromClass },
			{ "SpawnItemFromType", &ADropManager_CPP::execSpawnItemFromType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics
	{
		struct DropManager_CPP_eventSpawnItemFromClass_Parms
		{
			FVector pos;
			TSubclassOf<ABaseItem_CPP>  item;
			uint8 count;
			float timeTillCollect;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_count;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeTillCollect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropManager_CPP_eventSpawnItemFromClass_Parms, pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropManager_CPP_eventSpawnItemFromClass_Parms, item), Z_Construct_UClass_ABaseItem_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropManager_CPP_eventSpawnItemFromClass_Parms, count), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::NewProp_timeTillCollect = { "timeTillCollect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropManager_CPP_eventSpawnItemFromClass_Parms, timeTillCollect), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::NewProp_pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::NewProp_timeTillCollect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DropManager_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADropManager_CPP, nullptr, "SpawnItemFromClass", nullptr, nullptr, sizeof(DropManager_CPP_eventSpawnItemFromClass_Parms), Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics
	{
		struct DropManager_CPP_eventSpawnItemFromType_Parms
		{
			FVector pos;
			TEnumAsByte<eSPAWN_ITEM_TYPE> type;
			int32 subType;
			uint8 count;
			float timeTillCollect;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_subType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_count;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeTillCollect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropManager_CPP_eventSpawnItemFromType_Parms, pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropManager_CPP_eventSpawnItemFromType_Parms, type), Z_Construct_UEnum_Minecraft_eSPAWN_ITEM_TYPE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::NewProp_subType = { "subType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropManager_CPP_eventSpawnItemFromType_Parms, subType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropManager_CPP_eventSpawnItemFromType_Parms, count), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::NewProp_timeTillCollect = { "timeTillCollect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DropManager_CPP_eventSpawnItemFromType_Parms, timeTillCollect), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::NewProp_pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::NewProp_subType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::NewProp_timeTillCollect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DropManager_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADropManager_CPP, nullptr, "SpawnItemFromType", nullptr, nullptr, sizeof(DropManager_CPP_eventSpawnItemFromType_Parms), Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADropManager_CPP_NoRegister()
	{
		return ADropManager_CPP::StaticClass();
	}
	struct Z_Construct_UClass_ADropManager_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADropManager_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADropManager_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromClass, "SpawnItemFromClass" }, // 740395570
		{ &Z_Construct_UFunction_ADropManager_CPP_SpawnItemFromType, "SpawnItemFromType" }, // 185344333
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropManager_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DropManager_CPP.h" },
		{ "ModuleRelativePath", "DropManager_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADropManager_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADropManager_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADropManager_CPP_Statics::ClassParams = {
		&ADropManager_CPP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADropManager_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADropManager_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADropManager_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADropManager_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADropManager_CPP, 3999734059);
	template<> MINECRAFT_API UClass* StaticClass<ADropManager_CPP>()
	{
		return ADropManager_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADropManager_CPP(Z_Construct_UClass_ADropManager_CPP, &ADropManager_CPP::StaticClass, TEXT("/Script/Minecraft"), TEXT("ADropManager_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADropManager_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
