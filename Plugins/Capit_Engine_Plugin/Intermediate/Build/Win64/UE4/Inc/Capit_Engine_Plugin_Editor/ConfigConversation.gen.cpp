// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Capit_Engine_Plugin_Editor/Public/ConfigConversation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfigConversation() {}
// Cross Module References
	CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* Z_Construct_UClass_UConfigConversation_NoRegister();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* Z_Construct_UClass_UConfigConversation();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Capit_Engine_Plugin_Editor();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_UConfigConversation_ConfigToStruct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_UConfigConversation_StructToConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
// End Cross Module References
	void UConfigConversation::StaticRegisterNativesUConfigConversation()
	{
		UClass* Class = UConfigConversation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfigToStruct", &UConfigConversation::execConfigToStruct },
			{ "StructToConfig", &UConfigConversation::execStructToConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics
	{
		struct ConfigConversation_eventConfigToStruct_Parms
		{
			FString ConfigString;
			FTableRowBase OutRow;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfigConversation_eventConfigToStruct_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfigConversation_eventConfigToStruct_Parms), &Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfigConversation_eventConfigToStruct_Parms, OutRow), Z_Construct_UScriptStruct_FTableRowBase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::NewProp_ConfigString = { "ConfigString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfigConversation_eventConfigToStruct_Parms, ConfigString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::NewProp_ConfigString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Engine Config" },
		{ "CustomStructureParam", "OutRow" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/ConfigConversation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfigConversation, nullptr, "ConfigToStruct", nullptr, nullptr, sizeof(ConfigConversation_eventConfigToStruct_Parms), Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfigConversation_ConfigToStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfigConversation_ConfigToStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics
	{
		struct ConfigConversation_eventStructToConfig_Parms
		{
			FString ConfigString;
			const UScriptStruct* Struct;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Struct;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfigConversation_eventStructToConfig_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfigConversation_eventStructToConfig_Parms), &Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfigConversation_eventStructToConfig_Parms, Struct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::NewProp_Struct_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::NewProp_ConfigString = { "ConfigString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfigConversation_eventStructToConfig_Parms, ConfigString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::NewProp_Struct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::NewProp_ConfigString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Engine Config" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/ConfigConversation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfigConversation, nullptr, "StructToConfig", nullptr, nullptr, sizeof(ConfigConversation_eventStructToConfig_Parms), Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfigConversation_StructToConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfigConversation_StructToConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConfigConversation_NoRegister()
	{
		return UConfigConversation::StaticClass();
	}
	struct Z_Construct_UClass_UConfigConversation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConfigConversation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Capit_Engine_Plugin_Editor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConfigConversation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConfigConversation_ConfigToStruct, "ConfigToStruct" }, // 2151921481
		{ &Z_Construct_UFunction_UConfigConversation_StructToConfig, "StructToConfig" }, // 4259260663
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfigConversation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ConfigConversation.h" },
		{ "ModuleRelativePath", "Public/ConfigConversation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConfigConversation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfigConversation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConfigConversation_Statics::ClassParams = {
		&UConfigConversation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConfigConversation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConfigConversation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConfigConversation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConfigConversation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConfigConversation, 2281550164);
	template<> CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* StaticClass<UConfigConversation>()
	{
		return UConfigConversation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConfigConversation(Z_Construct_UClass_UConfigConversation, &UConfigConversation::StaticClass, TEXT("/Script/Capit_Engine_Plugin_Editor"), TEXT("UConfigConversation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConfigConversation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
