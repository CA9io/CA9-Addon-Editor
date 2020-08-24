// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UFunctionPin;
struct FTableRowBase;
class UScriptStruct;
#ifdef CAPIT_ENGINE_PLUGIN_EDITOR_FunctionPin_generated_h
#error "FunctionPin.generated.h already included, missing '#pragma once' in FunctionPin.h"
#endif
#define CAPIT_ENGINE_PLUGIN_EDITOR_FunctionPin_generated_h

#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConnectTranslator_Statics; \
	CAPIT_ENGINE_PLUGIN_EDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CAPIT_ENGINE_PLUGIN_EDITOR_API UScriptStruct* StaticStruct<struct FConnectTranslator>();

#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCapitVariable_Statics; \
	CAPIT_ENGINE_PLUGIN_EDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CAPIT_ENGINE_PLUGIN_EDITOR_API UScriptStruct* StaticStruct<struct FCapitVariable>();

#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_14_DELEGATE \
static inline void FVariableDelegate_DelegateWrapper(const FMulticastScriptDelegate& VariableDelegate) \
{ \
	VariableDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_13_DELEGATE \
static inline void FExecDelegate_DelegateWrapper(const FMulticastScriptDelegate& ExecDelegate) \
{ \
	ExecDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_SPARSE_DATA
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_RPC_WRAPPERS \
	virtual void VarIn_Implementation(); \
	virtual void ExecIn_Implementation(); \
 \
	DECLARE_FUNCTION(execgetDockingCords) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Cord); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Tangent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->getDockingCords(Z_Param_Out_Cord,Z_Param_Out_Tangent,Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVarIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VarIn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecIn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPropagateExec) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PropagateExec(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execaddConnected) \
	{ \
		P_GET_OBJECT(UFunctionPin,Z_Param_NewPin); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Error); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->addConnected(Z_Param_NewPin,Z_Param_Out_Error); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetConnected) \
	{ \
		P_GET_TARRAY_REF(UFunctionPin*,Z_Param_Out_Pins); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->getConnected(Z_Param_Out_Pins); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void VarIn_Implementation(); \
	virtual void ExecIn_Implementation(); \
 \
	DECLARE_FUNCTION(execgetDockingCords) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Cord); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Tangent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->getDockingCords(Z_Param_Out_Cord,Z_Param_Out_Tangent,Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVarIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VarIn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecIn_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPropagateExec) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PropagateExec(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execaddConnected) \
	{ \
		P_GET_OBJECT(UFunctionPin,Z_Param_NewPin); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Error); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->addConnected(Z_Param_NewPin,Z_Param_Out_Error); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetConnected) \
	{ \
		P_GET_TARRAY_REF(UFunctionPin*,Z_Param_Out_Pins); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->getConnected(Z_Param_Out_Pins); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_EVENT_PARMS
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_CALLBACK_WRAPPERS
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFunctionPin(); \
	friend struct Z_Construct_UClass_UFunctionPin_Statics; \
public: \
	DECLARE_CLASS(UFunctionPin, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capit_Engine_Plugin_Editor"), NO_API) \
	DECLARE_SERIALIZER(UFunctionPin) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUFunctionPin(); \
	friend struct Z_Construct_UClass_UFunctionPin_Statics; \
public: \
	DECLARE_CLASS(UFunctionPin, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capit_Engine_Plugin_Editor"), NO_API) \
	DECLARE_SERIALIZER(UFunctionPin) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFunctionPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionPin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFunctionPin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionPin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFunctionPin(UFunctionPin&&); \
	NO_API UFunctionPin(const UFunctionPin&); \
public:


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFunctionPin(UFunctionPin&&); \
	NO_API UFunctionPin(const UFunctionPin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFunctionPin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionPin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionPin)


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_55_PROLOG \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_EVENT_PARMS


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_SPARSE_DATA \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_RPC_WRAPPERS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_CALLBACK_WRAPPERS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_INCLASS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_SPARSE_DATA \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_CALLBACK_WRAPPERS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* StaticClass<class UFunctionPin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Capit_Engine_Plugin_Source_Capit_Engine_Plugin_Editor_Public_FunctionPin_h


#define FOREACH_ENUM_EPINTYPE(op) \
	op(VE_InputExec) \
	op(VE_OutputExec) \
	op(VE_DebugPin) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
