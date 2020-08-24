// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDownloadClass;
#ifdef CAPIT_LOGON_DownloadClass_generated_h
#error "DownloadClass.generated.h already included, missing '#pragma once' in DownloadClass.h"
#endif
#define CAPIT_LOGON_DownloadClass_generated_h

#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_25_DELEGATE \
struct _Script_Capit_Logon_eventDownloadFileDelegate_Parms \
{ \
	int32 HttpResponseCode; \
	int32 ContentLength; \
	FString SavePath; \
}; \
static inline void FDownloadFileDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadFileDelegate, int32 HttpResponseCode, int32 ContentLength, const FString& SavePath) \
{ \
	_Script_Capit_Logon_eventDownloadFileDelegate_Parms Parms; \
	Parms.HttpResponseCode=HttpResponseCode; \
	Parms.ContentLength=ContentLength; \
	Parms.SavePath=SavePath; \
	DownloadFileDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_SPARSE_DATA
#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDownloadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SavePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Arugments); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Request); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDownloadClass**)Z_Param__Result=UDownloadClass::DownloadFile(Z_Param_URL,Z_Param_SavePath,Z_Param_Arugments,(TEnumAsByte<ERequestHTTP>&)(Z_Param_Out_Request)); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDownloadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SavePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Arugments); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Request); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDownloadClass**)Z_Param__Result=UDownloadClass::DownloadFile(Z_Param_URL,Z_Param_SavePath,Z_Param_Arugments,(TEnumAsByte<ERequestHTTP>&)(Z_Param_Out_Request)); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDownloadClass(); \
	friend struct Z_Construct_UClass_UDownloadClass_Statics; \
public: \
	DECLARE_CLASS(UDownloadClass, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Capit_Logon"), NO_API) \
	DECLARE_SERIALIZER(UDownloadClass)


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUDownloadClass(); \
	friend struct Z_Construct_UClass_UDownloadClass_Statics; \
public: \
	DECLARE_CLASS(UDownloadClass, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Capit_Logon"), NO_API) \
	DECLARE_SERIALIZER(UDownloadClass)


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDownloadClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDownloadClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDownloadClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDownloadClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDownloadClass(UDownloadClass&&); \
	NO_API UDownloadClass(const UDownloadClass&); \
public:


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDownloadClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDownloadClass(UDownloadClass&&); \
	NO_API UDownloadClass(const UDownloadClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDownloadClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDownloadClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDownloadClass)


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_27_PROLOG
#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_SPARSE_DATA \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_RPC_WRAPPERS \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_INCLASS \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_SPARSE_DATA \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DownloadClass."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPIT_LOGON_API UClass* StaticClass<class UDownloadClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Capit_Logon_Source_Capit_Logon_Public_DownloadClass_h


#define FOREACH_ENUM_EREQUESTHTTP(op) \
	op(VE_GET) \
	op(VE_POST) \
	op(VE_Default) \
	op(VE_Put) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
