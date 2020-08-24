// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Capit_Engine_Plugin/Public/EditorFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorFunctions() {}
// Cross Module References
	CAPIT_ENGINE_PLUGIN_API UClass* Z_Construct_UClass_UEditorFunctions_NoRegister();
	CAPIT_ENGINE_PLUGIN_API UClass* Z_Construct_UClass_UEditorFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Capit_Engine_Plugin();
	CAPIT_ENGINE_PLUGIN_API UFunction* Z_Construct_UFunction_UEditorFunctions_Execute_Shell();
	CAPIT_ENGINE_PLUGIN_API UFunction* Z_Construct_UFunction_UEditorFunctions_open_editor_widget();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister();
	CAPIT_ENGINE_PLUGIN_API UFunction* Z_Construct_UFunction_UEditorFunctions_open_folder();
	CAPIT_ENGINE_PLUGIN_API UFunction* Z_Construct_UFunction_UEditorFunctions_PackageProject();
	CAPIT_ENGINE_PLUGIN_API UFunction* Z_Construct_UFunction_UEditorFunctions_restart_Editor();
// End Cross Module References
	void UEditorFunctions::StaticRegisterNativesUEditorFunctions()
	{
		UClass* Class = UEditorFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute_Shell", &UEditorFunctions::execExecute_Shell },
			{ "open_editor_widget", &UEditorFunctions::execopen_editor_widget },
			{ "open_folder", &UEditorFunctions::execopen_folder },
			{ "PackageProject", &UEditorFunctions::execPackageProject },
			{ "restart_Editor", &UEditorFunctions::execrestart_Editor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics
	{
		struct EditorFunctions_eventExecute_Shell_Parms
		{
			FString URL;
			FString Params;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorFunctions_eventExecute_Shell_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorFunctions_eventExecute_Shell_Parms), &Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorFunctions_eventExecute_Shell_Parms, Params), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorFunctions_eventExecute_Shell_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Create_Process" },
		{ "Keywords", "Capit_Engine" },
		{ "ModuleRelativePath", "Public/EditorFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorFunctions, nullptr, "Execute_Shell", nullptr, nullptr, sizeof(EditorFunctions_eventExecute_Shell_Parms), Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorFunctions_Execute_Shell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorFunctions_Execute_Shell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorFunctions_open_editor_widget_Statics
	{
		struct EditorFunctions_eventopen_editor_widget_Parms
		{
			UWidgetBlueprint* Blueprint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorFunctions_open_editor_widget_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorFunctions_eventopen_editor_widget_Parms, Blueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorFunctions_open_editor_widget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_open_editor_widget_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorFunctions_open_editor_widget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Open Editor Widget" },
		{ "Keywords", "Capit_Engine" },
		{ "ModuleRelativePath", "Public/EditorFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorFunctions_open_editor_widget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorFunctions, nullptr, "open_editor_widget", nullptr, nullptr, sizeof(EditorFunctions_eventopen_editor_widget_Parms), Z_Construct_UFunction_UEditorFunctions_open_editor_widget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorFunctions_open_editor_widget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorFunctions_open_editor_widget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorFunctions_open_editor_widget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorFunctions_open_editor_widget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorFunctions_open_editor_widget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorFunctions_open_folder_Statics
	{
		struct EditorFunctions_eventopen_folder_Parms
		{
			FString DialogueTitle;
			FString DefaultPath;
			FString OutputPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorFunctions_eventopen_folder_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorFunctions_eventopen_folder_Parms), &Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_OutputPath = { "OutputPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorFunctions_eventopen_folder_Parms, OutputPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorFunctions_eventopen_folder_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_DefaultPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_DefaultPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_DialogueTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_DialogueTitle = { "DialogueTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorFunctions_eventopen_folder_Parms, DialogueTitle), METADATA_PARAMS(Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_DialogueTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_DialogueTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_OutputPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_DefaultPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::NewProp_DialogueTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Open Folder Dialog Capit" },
		{ "Keywords", "Capit_Engine" },
		{ "ModuleRelativePath", "Public/EditorFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorFunctions, nullptr, "open_folder", nullptr, nullptr, sizeof(EditorFunctions_eventopen_folder_Parms), Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorFunctions_open_folder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorFunctions_open_folder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics
	{
		struct EditorFunctions_eventPackageProject_Parms
		{
			FString Path;
			FString Name;
			FString ProjectDirectory;
			FString EngineDirectory;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EngineDirectory;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectDirectory;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorFunctions_eventPackageProject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorFunctions_eventPackageProject_Parms), &Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_EngineDirectory = { "EngineDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorFunctions_eventPackageProject_Parms, EngineDirectory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_ProjectDirectory = { "ProjectDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorFunctions_eventPackageProject_Parms, ProjectDirectory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorFunctions_eventPackageProject_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorFunctions_eventPackageProject_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_EngineDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_ProjectDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "Package Project" },
		{ "Keywords", "Capit_Engine" },
		{ "ModuleRelativePath", "Public/EditorFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorFunctions, nullptr, "PackageProject", nullptr, nullptr, sizeof(EditorFunctions_eventPackageProject_Parms), Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorFunctions_PackageProject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorFunctions_PackageProject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorFunctions_restart_Editor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorFunctions_restart_Editor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Functions Editor" },
		{ "DisplayName", "restart Engine" },
		{ "Keywords", "shutdown" },
		{ "ModuleRelativePath", "Public/EditorFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorFunctions_restart_Editor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorFunctions, nullptr, "restart_Editor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorFunctions_restart_Editor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorFunctions_restart_Editor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorFunctions_restart_Editor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorFunctions_restart_Editor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorFunctions_NoRegister()
	{
		return UEditorFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UEditorFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Capit_Engine_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorFunctions_Execute_Shell, "Execute_Shell" }, // 4205828727
		{ &Z_Construct_UFunction_UEditorFunctions_open_editor_widget, "open_editor_widget" }, // 2673173172
		{ &Z_Construct_UFunction_UEditorFunctions_open_folder, "open_folder" }, // 139669505
		{ &Z_Construct_UFunction_UEditorFunctions_PackageProject, "PackageProject" }, // 869223956
		{ &Z_Construct_UFunction_UEditorFunctions_restart_Editor, "restart_Editor" }, // 3987536505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EditorFunctions.h" },
		{ "ModuleRelativePath", "Public/EditorFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorFunctions_Statics::ClassParams = {
		&UEditorFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorFunctions, 1919307042);
	template<> CAPIT_ENGINE_PLUGIN_API UClass* StaticClass<UEditorFunctions>()
	{
		return UEditorFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorFunctions(Z_Construct_UClass_UEditorFunctions, &UEditorFunctions::StaticClass, TEXT("/Script/Capit_Engine_Plugin"), TEXT("UEditorFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
