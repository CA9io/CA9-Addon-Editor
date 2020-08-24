// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Capit_Engine_Plugin_Editor/Public/Master_Object.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaster_Object() {}
// Cross Module References
	CAPIT_ENGINE_PLUGIN_EDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FClassTranslator();
	UPackage* Z_Construct_UPackage__Script_Capit_Engine_Plugin_Editor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* Z_Construct_UClass_AMaster_Object_NoRegister();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* Z_Construct_UClass_AMaster_Object();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_AMaster_Object_add_class_translation();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_AMaster_Object_flat_url_decode();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_AMaster_Object_flat_url_encode();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_AMaster_Object_get_top_level_directories();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_AMaster_Object_open_url();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_AMaster_Object_start_Program();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation();
// End Cross Module References
class UScriptStruct* FClassTranslator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CAPIT_ENGINE_PLUGIN_EDITOR_API uint32 Get_Z_Construct_UScriptStruct_FClassTranslator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassTranslator, Z_Construct_UPackage__Script_Capit_Engine_Plugin_Editor(), TEXT("ClassTranslator"), sizeof(FClassTranslator), Get_Z_Construct_UScriptStruct_FClassTranslator_Hash());
	}
	return Singleton;
}
template<> CAPIT_ENGINE_PLUGIN_EDITOR_API UScriptStruct* StaticStruct<FClassTranslator>()
{
	return FClassTranslator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClassTranslator(FClassTranslator::StaticStruct, TEXT("/Script/Capit_Engine_Plugin_Editor"), TEXT("ClassTranslator"), false, nullptr, nullptr);
static struct FScriptStruct_Capit_Engine_Plugin_Editor_StaticRegisterNativesFClassTranslator
{
	FScriptStruct_Capit_Engine_Plugin_Editor_StaticRegisterNativesFClassTranslator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClassTranslator")),new UScriptStruct::TCppStructOps<FClassTranslator>);
	}
} ScriptStruct_Capit_Engine_Plugin_Editor_StaticRegisterNativesFClassTranslator;
	struct Z_Construct_UScriptStruct_FClassTranslator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassTranslator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassTranslator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassTranslator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "Datatable_Struct" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassTranslator, Author), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Author_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Author_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Datatable_Struct" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassTranslator, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "Datatable_Struct" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassTranslator, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Datatable_Struct" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassTranslator, Class), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassTranslator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Author,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassTranslator_Statics::NewProp_Class,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassTranslator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Capit_Engine_Plugin_Editor,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ClassTranslator",
		sizeof(FClassTranslator),
		alignof(FClassTranslator),
		Z_Construct_UScriptStruct_FClassTranslator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassTranslator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassTranslator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassTranslator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassTranslator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClassTranslator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Capit_Engine_Plugin_Editor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClassTranslator"), sizeof(FClassTranslator), Get_Z_Construct_UScriptStruct_FClassTranslator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClassTranslator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClassTranslator_Hash() { return 309993440U; }
	void AMaster_Object::StaticRegisterNativesAMaster_Object()
	{
		UClass* Class = AMaster_Object::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "add_class_translation", &AMaster_Object::execadd_class_translation },
			{ "calculateObjectTranslation", &AMaster_Object::execcalculateObjectTranslation },
			{ "flat_url_decode", &AMaster_Object::execflat_url_decode },
			{ "flat_url_encode", &AMaster_Object::execflat_url_encode },
			{ "get_top_level_directories", &AMaster_Object::execget_top_level_directories },
			{ "LoadObjectFromAssetPath", &AMaster_Object::execLoadObjectFromAssetPath },
			{ "open_url", &AMaster_Object::execopen_url },
			{ "start_Program", &AMaster_Object::execstart_Program },
			{ "transformPoligonsRotation", &AMaster_Object::exectransformPoligonsRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics
	{
		struct Master_Object_eventadd_class_translation_Parms
		{
			UDataTable* Datatable;
			FClassTranslator TranslatorObject;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslatorObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Datatable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::NewProp_TranslatorObject = { "TranslatorObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventadd_class_translation_Parms, TranslatorObject), Z_Construct_UScriptStruct_FClassTranslator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::NewProp_Datatable = { "Datatable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventadd_class_translation_Parms, Datatable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::NewProp_TranslatorObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::NewProp_Datatable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Add_ClassTranslationObject" },
		{ "Keywords", "Load Object from AssetPath" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaster_Object, nullptr, "add_class_translation", nullptr, nullptr, sizeof(Master_Object_eventadd_class_translation_Parms), Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaster_Object_add_class_translation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaster_Object_add_class_translation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics
	{
		struct Master_Object_eventcalculateObjectTranslation_Parms
		{
			TArray<FVector> PolygonsIN;
			FRotator Rotation;
			FVector Correction;
			FVector Maximum;
			FVector Minimum;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Minimum;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Maximum;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Correction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonsIN;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonsIN_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventcalculateObjectTranslation_Parms, Minimum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventcalculateObjectTranslation_Parms, Maximum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_Correction = { "Correction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventcalculateObjectTranslation_Parms, Correction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventcalculateObjectTranslation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_PolygonsIN = { "PolygonsIN", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventcalculateObjectTranslation_Parms, PolygonsIN), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_PolygonsIN_Inner = { "PolygonsIN", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_Minimum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_Maximum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_Correction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_PolygonsIN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::NewProp_PolygonsIN_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Calculate Object Translation" },
		{ "Keywords", "Load Object from AssetPath" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaster_Object, nullptr, "calculateObjectTranslation", nullptr, nullptr, sizeof(Master_Object_eventcalculateObjectTranslation_Parms), Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics
	{
		struct Master_Object_eventflat_url_decode_Parms
		{
			FString String;
			FString decodedString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_decodedString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::NewProp_decodedString = { "decodedString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventflat_url_decode_Parms, decodedString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventflat_url_decode_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::NewProp_decodedString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Flat URL Decode" },
		{ "Keywords", "Load Object from AssetPath" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaster_Object, nullptr, "flat_url_decode", nullptr, nullptr, sizeof(Master_Object_eventflat_url_decode_Parms), Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaster_Object_flat_url_decode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaster_Object_flat_url_decode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics
	{
		struct Master_Object_eventflat_url_encode_Parms
		{
			FString String;
			FString encodedString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_encodedString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::NewProp_encodedString = { "encodedString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventflat_url_encode_Parms, encodedString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventflat_url_encode_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::NewProp_encodedString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Flat URL Encode" },
		{ "Keywords", "Load Object from AssetPath" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaster_Object, nullptr, "flat_url_encode", nullptr, nullptr, sizeof(Master_Object_eventflat_url_encode_Parms), Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaster_Object_flat_url_encode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaster_Object_flat_url_encode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics
	{
		struct Master_Object_eventget_top_level_directories_Parms
		{
			FString Path;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventget_top_level_directories_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventget_top_level_directories_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Get Top Level Directories" },
		{ "Keywords", "Load Object from AssetPath" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaster_Object, nullptr, "get_top_level_directories", nullptr, nullptr, sizeof(Master_Object_eventget_top_level_directories_Parms), Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaster_Object_get_top_level_directories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaster_Object_get_top_level_directories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics
	{
		struct Master_Object_eventLoadObjectFromAssetPath_Parms
		{
			TSubclassOf<UObject>  ObjectClass;
			FName Path;
			bool IsValid;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventLoadObjectFromAssetPath_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((Master_Object_eventLoadObjectFromAssetPath_Parms*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Master_Object_eventLoadObjectFromAssetPath_Parms), &Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventLoadObjectFromAssetPath_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventLoadObjectFromAssetPath_Parms, ObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::NewProp_ObjectClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Load Object from AssetPath" },
		{ "Keywords", "Load Object from AssetPath" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaster_Object, nullptr, "LoadObjectFromAssetPath", nullptr, nullptr, sizeof(Master_Object_eventLoadObjectFromAssetPath_Parms), Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaster_Object_open_url_Statics
	{
		struct Master_Object_eventopen_url_Parms
		{
			FString URL;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaster_Object_open_url_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventopen_url_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaster_Object_open_url_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_open_url_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaster_Object_open_url_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Open URL external" },
		{ "Keywords", "Load Object from AssetPath" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaster_Object_open_url_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaster_Object, nullptr, "open_url", nullptr, nullptr, sizeof(Master_Object_eventopen_url_Parms), Z_Construct_UFunction_AMaster_Object_open_url_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_open_url_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaster_Object_open_url_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_open_url_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaster_Object_open_url()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaster_Object_open_url_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaster_Object_start_Program_Statics
	{
		struct Master_Object_eventstart_Program_Parms
		{
			int32 ProcessId;
			FString FullPathOfProgramToRun;
			TArray<FString> CommandlineArgs;
			bool Detach;
			bool Hidden;
			int32 Priority;
			FString OptionalWorkingDirectory;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalWorkingDirectory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static void NewProp_Hidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hidden;
		static void NewProp_Detach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Detach;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CommandlineArgs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandlineArgs_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullPathOfProgramToRun;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcessId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_OptionalWorkingDirectory = { "OptionalWorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventstart_Program_Parms, OptionalWorkingDirectory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventstart_Program_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_Hidden_SetBit(void* Obj)
	{
		((Master_Object_eventstart_Program_Parms*)Obj)->Hidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_Hidden = { "Hidden", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Master_Object_eventstart_Program_Parms), &Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_Hidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_Detach_SetBit(void* Obj)
	{
		((Master_Object_eventstart_Program_Parms*)Obj)->Detach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_Detach = { "Detach", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Master_Object_eventstart_Program_Parms), &Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_Detach_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_CommandlineArgs = { "CommandlineArgs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventstart_Program_Parms, CommandlineArgs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_CommandlineArgs_Inner = { "CommandlineArgs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_FullPathOfProgramToRun = { "FullPathOfProgramToRun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventstart_Program_Parms, FullPathOfProgramToRun), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventstart_Program_Parms, ProcessId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaster_Object_start_Program_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_OptionalWorkingDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_Hidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_Detach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_CommandlineArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_CommandlineArgs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_FullPathOfProgramToRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_start_Program_Statics::NewProp_ProcessId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaster_Object_start_Program_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "start Program" },
		{ "Keywords", "shutdown" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaster_Object_start_Program_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaster_Object, nullptr, "start_Program", nullptr, nullptr, sizeof(Master_Object_eventstart_Program_Parms), Z_Construct_UFunction_AMaster_Object_start_Program_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_start_Program_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaster_Object_start_Program_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_start_Program_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaster_Object_start_Program()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaster_Object_start_Program_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics
	{
		struct Master_Object_eventtransformPoligonsRotation_Parms
		{
			TArray<FVector> PolygonsIN;
			FRotator Rotation;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonsIN;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonsIN_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventtransformPoligonsRotation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventtransformPoligonsRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::NewProp_PolygonsIN = { "PolygonsIN", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Master_Object_eventtransformPoligonsRotation_Parms, PolygonsIN), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::NewProp_PolygonsIN_Inner = { "PolygonsIN", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::NewProp_PolygonsIN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::NewProp_PolygonsIN_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Calc Poligon Rotation" },
		{ "Keywords", "Load Object from AssetPath" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaster_Object, nullptr, "transformPoligonsRotation", nullptr, nullptr, sizeof(Master_Object_eventtransformPoligonsRotation_Parms), Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMaster_Object_NoRegister()
	{
		return AMaster_Object::StaticClass();
	}
	struct Z_Construct_UClass_AMaster_Object_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaster_Object_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Capit_Engine_Plugin_Editor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMaster_Object_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaster_Object_add_class_translation, "add_class_translation" }, // 1318742618
		{ &Z_Construct_UFunction_AMaster_Object_calculateObjectTranslation, "calculateObjectTranslation" }, // 1074458083
		{ &Z_Construct_UFunction_AMaster_Object_flat_url_decode, "flat_url_decode" }, // 474999779
		{ &Z_Construct_UFunction_AMaster_Object_flat_url_encode, "flat_url_encode" }, // 2569173908
		{ &Z_Construct_UFunction_AMaster_Object_get_top_level_directories, "get_top_level_directories" }, // 3566925790
		{ &Z_Construct_UFunction_AMaster_Object_LoadObjectFromAssetPath, "LoadObjectFromAssetPath" }, // 2184945001
		{ &Z_Construct_UFunction_AMaster_Object_open_url, "open_url" }, // 318761744
		{ &Z_Construct_UFunction_AMaster_Object_start_Program, "start_Program" }, // 1899686133
		{ &Z_Construct_UFunction_AMaster_Object_transformPoligonsRotation, "transformPoligonsRotation" }, // 1347345633
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaster_Object_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Master_Object.h" },
		{ "ModuleRelativePath", "Public/Master_Object.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaster_Object_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaster_Object>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaster_Object_Statics::ClassParams = {
		&AMaster_Object::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMaster_Object_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMaster_Object_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaster_Object()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaster_Object_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaster_Object, 1658785166);
	template<> CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* StaticClass<AMaster_Object>()
	{
		return AMaster_Object::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaster_Object(Z_Construct_UClass_AMaster_Object, &AMaster_Object::StaticClass, TEXT("/Script/Capit_Engine_Plugin_Editor"), TEXT("AMaster_Object"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaster_Object);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
