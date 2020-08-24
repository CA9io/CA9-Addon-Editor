// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class UDataTable;
struct FClassTranslator;
class UObject;
#ifdef CAPIT_ENGINE_PLUGIN_EDITOR_Master_Object_generated_h
#error "Master_Object.generated.h already included, missing '#pragma once' in Master_Object.h"
#endif
#define CAPIT_ENGINE_PLUGIN_EDITOR_Master_Object_generated_h

#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClassTranslator_Statics; \
	CAPIT_ENGINE_PLUGIN_EDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CAPIT_ENGINE_PLUGIN_EDITOR_API UScriptStruct* StaticStruct<struct FClassTranslator>();

#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_SPARSE_DATA
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execflat_url_decode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_decodedString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::flat_url_decode(Z_Param_String,Z_Param_Out_decodedString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execflat_url_encode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_encodedString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::flat_url_encode(Z_Param_String,Z_Param_Out_encodedString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execget_top_level_directories) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=AMaster_Object::get_top_level_directories(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(exectransformPoligonsRotation) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_PolygonsIN); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=AMaster_Object::transformPoligonsRotation(Z_Param_PolygonsIN,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcalculateObjectTranslation) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_PolygonsIN); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Correction); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Maximum); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Minimum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::calculateObjectTranslation(Z_Param_PolygonsIN,Z_Param_Rotation,Z_Param_Out_Correction,Z_Param_Out_Maximum,Z_Param_Out_Minimum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execadd_class_translation) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Datatable); \
		P_GET_STRUCT(FClassTranslator,Z_Param_TranslatorObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::add_class_translation(Z_Param_Datatable,Z_Param_TranslatorObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execopen_url) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::open_url(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=AMaster_Object::LoadObjectFromAssetPath(Z_Param_ObjectClass,Z_Param_Path,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstart_Program) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ProcessId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullPathOfProgramToRun); \
		P_GET_TARRAY(FString,Z_Param_CommandlineArgs); \
		P_GET_UBOOL(Z_Param_Detach); \
		P_GET_UBOOL(Z_Param_Hidden); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Priority); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OptionalWorkingDirectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::start_Program(Z_Param_Out_ProcessId,Z_Param_FullPathOfProgramToRun,Z_Param_CommandlineArgs,Z_Param_Detach,Z_Param_Hidden,Z_Param_Priority,Z_Param_OptionalWorkingDirectory); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execflat_url_decode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_decodedString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::flat_url_decode(Z_Param_String,Z_Param_Out_decodedString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execflat_url_encode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_encodedString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::flat_url_encode(Z_Param_String,Z_Param_Out_encodedString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execget_top_level_directories) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=AMaster_Object::get_top_level_directories(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(exectransformPoligonsRotation) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_PolygonsIN); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=AMaster_Object::transformPoligonsRotation(Z_Param_PolygonsIN,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcalculateObjectTranslation) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_PolygonsIN); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Correction); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Maximum); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Minimum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::calculateObjectTranslation(Z_Param_PolygonsIN,Z_Param_Rotation,Z_Param_Out_Correction,Z_Param_Out_Maximum,Z_Param_Out_Minimum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execadd_class_translation) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Datatable); \
		P_GET_STRUCT(FClassTranslator,Z_Param_TranslatorObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::add_class_translation(Z_Param_Datatable,Z_Param_TranslatorObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execopen_url) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::open_url(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=AMaster_Object::LoadObjectFromAssetPath(Z_Param_ObjectClass,Z_Param_Path,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstart_Program) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ProcessId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullPathOfProgramToRun); \
		P_GET_TARRAY(FString,Z_Param_CommandlineArgs); \
		P_GET_UBOOL(Z_Param_Detach); \
		P_GET_UBOOL(Z_Param_Hidden); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Priority); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OptionalWorkingDirectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AMaster_Object::start_Program(Z_Param_Out_ProcessId,Z_Param_FullPathOfProgramToRun,Z_Param_CommandlineArgs,Z_Param_Detach,Z_Param_Hidden,Z_Param_Priority,Z_Param_OptionalWorkingDirectory); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaster_Object(); \
	friend struct Z_Construct_UClass_AMaster_Object_Statics; \
public: \
	DECLARE_CLASS(AMaster_Object, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capit_Engine_Plugin_Editor"), NO_API) \
	DECLARE_SERIALIZER(AMaster_Object)


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAMaster_Object(); \
	friend struct Z_Construct_UClass_AMaster_Object_Statics; \
public: \
	DECLARE_CLASS(AMaster_Object, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capit_Engine_Plugin_Editor"), NO_API) \
	DECLARE_SERIALIZER(AMaster_Object)


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMaster_Object(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaster_Object) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaster_Object); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaster_Object); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaster_Object(AMaster_Object&&); \
	NO_API AMaster_Object(const AMaster_Object&); \
public:


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaster_Object(AMaster_Object&&); \
	NO_API AMaster_Object(const AMaster_Object&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaster_Object); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaster_Object); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMaster_Object)


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_33_PROLOG
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_SPARSE_DATA \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_RPC_WRAPPERS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_INCLASS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_SPARSE_DATA \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* StaticClass<class AMaster_Object>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_Master_Object_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
