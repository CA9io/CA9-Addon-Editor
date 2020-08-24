// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UUploadClass;
#ifdef CAPIT_LOGON_UploadClass_generated_h
#error "UploadClass.generated.h already included, missing '#pragma once' in UploadClass.h"
#endif
#define CAPIT_LOGON_UploadClass_generated_h

#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_15_DELEGATE \
struct _Script_Capit_Logon_eventUploadFileDelegate_Parms \
{ \
	int32 HttpResponseCode; \
	int32 ContentLength; \
}; \
static inline void FUploadFileDelegate_DelegateWrapper(const FMulticastScriptDelegate& UploadFileDelegate, int32 HttpResponseCode, int32 ContentLength) \
{ \
	_Script_Capit_Logon_eventUploadFileDelegate_Parms Parms; \
	Parms.HttpResponseCode=HttpResponseCode; \
	Parms.ContentLength=ContentLength; \
	UploadFileDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_SPARSE_DATA
#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUploadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Body); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUploadClass**)Z_Param__Result=UUploadClass::UploadFile(Z_Param_URL,Z_Param_File,Z_Param_Out_Body); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUploadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Body); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUploadClass**)Z_Param__Result=UUploadClass::UploadFile(Z_Param_URL,Z_Param_File,Z_Param_Out_Body); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUploadClass(); \
	friend struct Z_Construct_UClass_UUploadClass_Statics; \
public: \
	DECLARE_CLASS(UUploadClass, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Capit_Logon"), NO_API) \
	DECLARE_SERIALIZER(UUploadClass)


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUploadClass(); \
	friend struct Z_Construct_UClass_UUploadClass_Statics; \
public: \
	DECLARE_CLASS(UUploadClass, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Capit_Logon"), NO_API) \
	DECLARE_SERIALIZER(UUploadClass)


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUploadClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUploadClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUploadClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUploadClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUploadClass(UUploadClass&&); \
	NO_API UUploadClass(const UUploadClass&); \
public:


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUploadClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUploadClass(UUploadClass&&); \
	NO_API UUploadClass(const UUploadClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUploadClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUploadClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUploadClass)


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_17_PROLOG
#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_SPARSE_DATA \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_RPC_WRAPPERS \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_INCLASS \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_SPARSE_DATA \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UploadClass."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPIT_LOGON_API UClass* StaticClass<class UUploadClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_UploadClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
