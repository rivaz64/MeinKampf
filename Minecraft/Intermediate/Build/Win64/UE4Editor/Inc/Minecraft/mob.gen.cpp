// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/mob.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemob() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_Amob_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_Amob();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void Amob::StaticRegisterNativesAmob()
	{
	}
	UClass* Z_Construct_UClass_Amob_NoRegister()
	{
		return Amob::StaticClass();
	}
	struct Z_Construct_UClass_Amob_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velcam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velcam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velcor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velcor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_altu_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_altu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_durcor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_durcor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_durcam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_durcam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_durcomer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_durcomer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uyendo_MetaData[];
#endif
		static void NewProp_uyendo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_uyendo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_atakado_MetaData[];
#endif
		static void NewProp_atakado_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_atakado;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dondedetecta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dondedetecta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plusangl_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_plusangl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Amob_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "mob.h" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_velcam_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_velcam = { "velcam", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, velcam), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_velcam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_velcam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_velcor_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_velcor = { "velcor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, velcor), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_velcor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_velcor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_angle_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, angle), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_altu_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_altu = { "altu", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, altu), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_altu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_altu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_durcor_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_durcor = { "durcor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, durcor), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_durcor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_durcor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_durcam_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_durcam = { "durcam", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, durcam), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_durcam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_durcam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_durcomer_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_durcomer = { "durcomer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, durcomer), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_durcomer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_durcomer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_uyendo_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	void Z_Construct_UClass_Amob_Statics::NewProp_uyendo_SetBit(void* Obj)
	{
		((Amob*)Obj)->uyendo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_uyendo = { "uyendo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Amob), &Z_Construct_UClass_Amob_Statics::NewProp_uyendo_SetBit, METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_uyendo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_uyendo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_atakado_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	void Z_Construct_UClass_Amob_Statics::NewProp_atakado_SetBit(void* Obj)
	{
		((Amob*)Obj)->atakado = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_atakado = { "atakado", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Amob), &Z_Construct_UClass_Amob_Statics::NewProp_atakado_SetBit, METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_atakado_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_atakado_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_dondedetecta_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_dondedetecta = { "dondedetecta", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, dondedetecta), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_dondedetecta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_dondedetecta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_plusangl_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_plusangl = { "plusangl", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, plusangl), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_plusangl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_plusangl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Amob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_velcam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_velcor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_altu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_durcor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_durcam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_durcomer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_uyendo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_atakado,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_dondedetecta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_plusangl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Amob_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Amob>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Amob_Statics::ClassParams = {
		&Amob::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Amob_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Amob()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Amob_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Amob, 3050357858);
	template<> MINECRAFT_API UClass* StaticClass<Amob>()
	{
		return Amob::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Amob(Z_Construct_UClass_Amob, &Amob::StaticClass, TEXT("/Script/Minecraft"), TEXT("Amob"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Amob);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
