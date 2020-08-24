// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidgetBlueprint;
#ifdef CAPIT_ENGINE_PLUGIN_EditorFunctions_generated_h
#error "EditorFunctions.generated.h already included, missing '#pragma once' in EditorFunctions.h"
#endif
#define CAPIT_ENGINE_PLUGIN_EditorFunctions_generated_h

#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_SPARSE_DATA
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execopen_editor_widget) \
	{ \
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorFunctions::open_editor_widget(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPackageProject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ProjectDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EngineDirectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorFunctions::PackageProject(Z_Param_Path,Z_Param_Name,Z_Param_ProjectDirectory,Z_Param_EngineDirectory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecute_Shell) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Params); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorFunctions::Execute_Shell(Z_Param_URL,Z_Param_Params); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execopen_folder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogueTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutputPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorFunctions::open_folder(Z_Param_DialogueTitle,Z_Param_DefaultPath,Z_Param_Out_OutputPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execrestart_Editor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorFunctions::restart_Editor(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execopen_editor_widget) \
	{ \
		P_GET_OBJECT(UWidgetBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorFunctions::open_editor_widget(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPackageProject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ProjectDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EngineDirectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorFunctions::PackageProject(Z_Param_Path,Z_Param_Name,Z_Param_ProjectDirectory,Z_Param_EngineDirectory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecute_Shell) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Params); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorFunctions::Execute_Shell(Z_Param_URL,Z_Param_Params); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execopen_folder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogueTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutputPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEditorFunctions::open_folder(Z_Param_DialogueTitle,Z_Param_DefaultPath,Z_Param_Out_OutputPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execrestart_Editor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorFunctions::restart_Editor(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorFunctions(); \
	friend struct Z_Construct_UClass_UEditorFunctions_Statics; \
public: \
	DECLARE_CLASS(UEditorFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Capit_Engine_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UEditorFunctions)


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUEditorFunctions(); \
	friend struct Z_Construct_UClass_UEditorFunctions_Statics; \
public: \
	DECLARE_CLASS(UEditorFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Capit_Engine_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UEditorFunctions)


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorFunctions(UEditorFunctions&&); \
	NO_API UEditorFunctions(const UEditorFunctions&); \
public:


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorFunctions(UEditorFunctions&&); \
	NO_API UEditorFunctions(const UEditorFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorFunctions)


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_14_PROLOG
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_SPARSE_DATA \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_RPC_WRAPPERS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_INCLASS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_SPARSE_DATA \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPIT_ENGINE_PLUGIN_API UClass* StaticClass<class UEditorFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Public_EditorFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
