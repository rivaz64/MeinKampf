// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/terreno.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeterreno() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_Aterreno_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_Aterreno();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_Ablockspawner_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_Agenerator_NoRegister();
// End Cross Module References
	void Aterreno::StaticRegisterNativesAterreno()
	{
	}
	UClass* Z_Construct_UClass_Aterreno_NoRegister()
	{
		return Aterreno::StaticClass();
	}
	struct Z_Construct_UClass_Aterreno_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunksize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_chunksize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassOfPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassOfPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassOfMob_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassOfMob;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_generador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generador;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aterreno_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aterreno_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "terreno.h" },
		{ "ModuleRelativePath", "terreno.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aterreno_Statics::NewProp_chunksize_MetaData[] = {
		{ "Category", "terreno" },
		{ "ModuleRelativePath", "terreno.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Aterreno_Statics::NewProp_chunksize = { "chunksize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aterreno, chunksize), METADATA_PARAMS(Z_Construct_UClass_Aterreno_Statics::NewProp_chunksize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aterreno_Statics::NewProp_chunksize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aterreno_Statics::NewProp_ClassOfPlayer_MetaData[] = {
		{ "Category", "terreno" },
		{ "ModuleRelativePath", "terreno.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Aterreno_Statics::NewProp_ClassOfPlayer = { "ClassOfPlayer", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aterreno, ClassOfPlayer), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Aterreno_Statics::NewProp_ClassOfPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aterreno_Statics::NewProp_ClassOfPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aterreno_Statics::NewProp_ClassOfMob_MetaData[] = {
		{ "Category", "terreno" },
		{ "ModuleRelativePath", "terreno.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Aterreno_Statics::NewProp_ClassOfMob = { "ClassOfMob", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aterreno, ClassOfMob), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Aterreno_Statics::NewProp_ClassOfMob_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aterreno_Statics::NewProp_ClassOfMob_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aterreno_Statics::NewProp_spawner_MetaData[] = {
		{ "Category", "terreno" },
		{ "ModuleRelativePath", "terreno.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aterreno_Statics::NewProp_spawner = { "spawner", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aterreno, spawner), Z_Construct_UClass_Ablockspawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aterreno_Statics::NewProp_spawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aterreno_Statics::NewProp_spawner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aterreno_Statics::NewProp_generador_MetaData[] = {
		{ "Category", "terreno" },
		{ "ModuleRelativePath", "terreno.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aterreno_Statics::NewProp_generador = { "generador", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aterreno, generador), Z_Construct_UClass_Agenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aterreno_Statics::NewProp_generador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aterreno_Statics::NewProp_generador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aterreno_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aterreno_Statics::NewProp_chunksize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aterreno_Statics::NewProp_ClassOfPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aterreno_Statics::NewProp_ClassOfMob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aterreno_Statics::NewProp_spawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aterreno_Statics::NewProp_generador,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aterreno_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aterreno>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aterreno_Statics::ClassParams = {
		&Aterreno::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Aterreno_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Aterreno_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aterreno_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aterreno_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aterreno()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aterreno_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aterreno, 2378623629);
	template<> MINECRAFT_API UClass* StaticClass<Aterreno>()
	{
		return Aterreno::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aterreno(Z_Construct_UClass_Aterreno, &Aterreno::StaticClass, TEXT("/Script/Minecraft"), TEXT("Aterreno"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aterreno);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
