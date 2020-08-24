// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Capit_Engine_Plugin_Editor/Public/Master_Savegame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaster_Savegame() {}
// Cross Module References
	CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* Z_Construct_UClass_UMaster_Savegame_NoRegister();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* Z_Construct_UClass_UMaster_Savegame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Capit_Engine_Plugin_Editor();
// End Cross Module References
	void UMaster_Savegame::StaticRegisterNativesUMaster_Savegame()
	{
	}
	UClass* Z_Construct_UClass_UMaster_Savegame_NoRegister()
	{
		return UMaster_Savegame::StaticClass();
	}
	struct Z_Construct_UClass_UMaster_Savegame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaster_Savegame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Capit_Engine_Plugin_Editor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaster_Savegame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Master_Savegame.h" },
		{ "ModuleRelativePath", "Public/Master_Savegame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaster_Savegame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaster_Savegame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaster_Savegame_Statics::ClassParams = {
		&UMaster_Savegame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaster_Savegame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaster_Savegame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaster_Savegame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaster_Savegame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaster_Savegame, 1983733336);
	template<> CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* StaticClass<UMaster_Savegame>()
	{
		return UMaster_Savegame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaster_Savegame(Z_Construct_UClass_UMaster_Savegame, &UMaster_Savegame::StaticClass, TEXT("/Script/Capit_Engine_Plugin_Editor"), TEXT("UMaster_Savegame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaster_Savegame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
