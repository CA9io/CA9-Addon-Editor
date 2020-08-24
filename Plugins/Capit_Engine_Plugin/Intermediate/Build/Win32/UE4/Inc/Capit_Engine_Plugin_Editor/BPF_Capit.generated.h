// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAPIT_ENGINE_PLUGIN_EDITOR_BPF_Capit_generated_h
#error "BPF_Capit.generated.h already included, missing '#pragma once' in BPF_Capit.h"
#endif
#define CAPIT_ENGINE_PLUGIN_EDITOR_BPF_Capit_generated_h

#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_SPARSE_DATA
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUI_Screenshot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBPF_Capit::UI_Screenshot(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestart_App) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBPF_Capit::Restart_App(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHardwarInfo) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_CPUBrand); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_CPUChipset); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_CPUVendor); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OSVersion); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OSSubversion); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumberofCores); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GPUBrand); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GPUDriverInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBPF_Capit::getHardwarInfo(Z_Param_Out_CPUBrand,Z_Param_Out_CPUChipset,Z_Param_Out_CPUVendor,Z_Param_Out_OSVersion,Z_Param_Out_OSSubversion,Z_Param_Out_NumberofCores,Z_Param_Out_GPUBrand,Z_Param_Out_GPUDriverInfo); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUI_Screenshot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBPF_Capit::UI_Screenshot(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestart_App) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBPF_Capit::Restart_App(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHardwarInfo) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_CPUBrand); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_CPUChipset); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_CPUVendor); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OSVersion); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OSSubversion); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumberofCores); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GPUBrand); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GPUDriverInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBPF_Capit::getHardwarInfo(Z_Param_Out_CPUBrand,Z_Param_Out_CPUChipset,Z_Param_Out_CPUVendor,Z_Param_Out_OSVersion,Z_Param_Out_OSSubversion,Z_Param_Out_NumberofCores,Z_Param_Out_GPUBrand,Z_Param_Out_GPUDriverInfo); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPF_Capit(); \
	friend struct Z_Construct_UClass_UBPF_Capit_Statics; \
public: \
	DECLARE_CLASS(UBPF_Capit, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Capit_Engine_Plugin_Editor"), NO_API) \
	DECLARE_SERIALIZER(UBPF_Capit)


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBPF_Capit(); \
	friend struct Z_Construct_UClass_UBPF_Capit_Statics; \
public: \
	DECLARE_CLASS(UBPF_Capit, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Capit_Engine_Plugin_Editor"), NO_API) \
	DECLARE_SERIALIZER(UBPF_Capit)


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPF_Capit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPF_Capit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPF_Capit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPF_Capit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPF_Capit(UBPF_Capit&&); \
	NO_API UBPF_Capit(const UBPF_Capit&); \
public:


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPF_Capit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPF_Capit(UBPF_Capit&&); \
	NO_API UBPF_Capit(const UBPF_Capit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPF_Capit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPF_Capit); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPF_Capit)


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_12_PROLOG
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_SPARSE_DATA \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_RPC_WRAPPERS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_INCLASS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_SPARSE_DATA \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* StaticClass<class UBPF_Capit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_BPF_Capit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
