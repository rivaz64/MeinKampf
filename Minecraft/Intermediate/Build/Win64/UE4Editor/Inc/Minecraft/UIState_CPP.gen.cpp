// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/UIState_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIState_CPP() {}
// Cross Module References
	MINECRAFT_API UEnum* Z_Construct_UEnum_Minecraft_eINPUT_TYPE();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	static UEnum* eINPUT_TYPE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Minecraft_eINPUT_TYPE, Z_Construct_UPackage__Script_Minecraft(), TEXT("eINPUT_TYPE"));
		}
		return Singleton;
	}
	template<> MINECRAFT_API UEnum* StaticEnum<eINPUT_TYPE>()
	{
		return eINPUT_TYPE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eINPUT_TYPE(eINPUT_TYPE_StaticEnum, TEXT("/Script/Minecraft"), TEXT("eINPUT_TYPE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Minecraft_eINPUT_TYPE_Hash() { return 1474916061U; }
	UEnum* Z_Construct_UEnum_Minecraft_eINPUT_TYPE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Minecraft();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eINPUT_TYPE"), 0, Get_Z_Construct_UEnum_Minecraft_eINPUT_TYPE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "INPUT_NONE", (int64)INPUT_NONE },
				{ "INPUT_E", (int64)INPUT_E },
				{ "INPUT_ESC", (int64)INPUT_ESC },
				{ "INPUT_OPEN_CRAFTING", (int64)INPUT_OPEN_CRAFTING },
				{ "INPUT_OPEN_OVEM", (int64)INPUT_OPEN_OVEM },
				{ "INPUT_DIE", (int64)INPUT_DIE },
				{ "INPUT_RESPAWN", (int64)INPUT_RESPAWN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "INPUT_DIE.Name", "INPUT_DIE" },
				{ "INPUT_E.Name", "INPUT_E" },
				{ "INPUT_ESC.Name", "INPUT_ESC" },
				{ "INPUT_NONE.Name", "INPUT_NONE" },
				{ "INPUT_OPEN_CRAFTING.Name", "INPUT_OPEN_CRAFTING" },
				{ "INPUT_OPEN_OVEM.Name", "INPUT_OPEN_OVEM" },
				{ "INPUT_RESPAWN.Name", "INPUT_RESPAWN" },
				{ "ModuleRelativePath", "UIState_CPP.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Minecraft,
				nullptr,
				"eINPUT_TYPE",
				"eINPUT_TYPE",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
