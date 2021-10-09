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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velcam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velcam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camdist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_camdist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waitime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_waitime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velcor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velcor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cordist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cordist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vidas_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_vidas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uyendo_MetaData[];
#endif
		static void NewProp_uyendo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_uyendo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static void NewProp_hit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dondedetecta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dondedetecta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plusangl_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_plusangl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distfromtree_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distfromtree;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_gravity_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_gravity = { "gravity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, gravity), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_velcam_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_velcam = { "velcam", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, velcam), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_velcam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_velcam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_camdist_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_camdist = { "camdist", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, camdist), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_camdist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_camdist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_waitime_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_waitime = { "waitime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, waitime), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_waitime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_waitime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_velcor_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_velcor = { "velcor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, velcor), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_velcor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_velcor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_cordist_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_cordist = { "cordist", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, cordist), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_cordist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_cordist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_vidas_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_vidas = { "vidas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, vidas), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_vidas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_vidas_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_hit_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	void Z_Construct_UClass_Amob_Statics::NewProp_hit_SetBit(void* Obj)
	{
		((Amob*)Obj)->hit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Amob), &Z_Construct_UClass_Amob_Statics::NewProp_hit_SetBit, METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_hit_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amob_Statics::NewProp_distfromtree_MetaData[] = {
		{ "Category", "mob" },
		{ "ModuleRelativePath", "mob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Amob_Statics::NewProp_distfromtree = { "distfromtree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Amob, distfromtree), METADATA_PARAMS(Z_Construct_UClass_Amob_Statics::NewProp_distfromtree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Amob_Statics::NewProp_distfromtree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Amob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_velcam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_camdist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_waitime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_velcor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_cordist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_vidas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_uyendo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_dondedetecta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_plusangl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amob_Statics::NewProp_distfromtree,
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
	IMPLEMENT_CLASS(Amob, 3800868598);
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
