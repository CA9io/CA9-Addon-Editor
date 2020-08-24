// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Capit_Engine_Plugin_Editor/Public/BPF_Capit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPF_Capit() {}
// Cross Module References
	CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* Z_Construct_UClass_UBPF_Capit_NoRegister();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* Z_Construct_UClass_UBPF_Capit();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Capit_Engine_Plugin_Editor();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_UBPF_Capit_getHardwarInfo();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_UBPF_Capit_Restart_App();
	CAPIT_ENGINE_PLUGIN_EDITOR_API UFunction* Z_Construct_UFunction_UBPF_Capit_UI_Screenshot();
// End Cross Module References
	void UBPF_Capit::StaticRegisterNativesUBPF_Capit()
	{
		UClass* Class = UBPF_Capit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getHardwarInfo", &UBPF_Capit::execgetHardwarInfo },
			{ "Restart_App", &UBPF_Capit::execRestart_App },
			{ "UI_Screenshot", &UBPF_Capit::execUI_Screenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics
	{
		struct BPF_Capit_eventgetHardwarInfo_Parms
		{
			FString CPUBrand;
			FString CPUChipset;
			FString CPUVendor;
			FString OSVersion;
			FString OSSubversion;
			int32 NumberofCores;
			FString GPUBrand;
			FString GPUDriverInfo;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GPUDriverInfo;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GPUBrand;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberofCores;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OSSubversion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OSVersion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CPUVendor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CPUChipset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CPUBrand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_GPUDriverInfo = { "GPUDriverInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Capit_eventgetHardwarInfo_Parms, GPUDriverInfo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_GPUBrand = { "GPUBrand", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Capit_eventgetHardwarInfo_Parms, GPUBrand), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_NumberofCores = { "NumberofCores", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Capit_eventgetHardwarInfo_Parms, NumberofCores), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_OSSubversion = { "OSSubversion", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Capit_eventgetHardwarInfo_Parms, OSSubversion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_OSVersion = { "OSVersion", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Capit_eventgetHardwarInfo_Parms, OSVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_CPUVendor = { "CPUVendor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Capit_eventgetHardwarInfo_Parms, CPUVendor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_CPUChipset = { "CPUChipset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Capit_eventgetHardwarInfo_Parms, CPUChipset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_CPUBrand = { "CPUBrand", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Capit_eventgetHardwarInfo_Parms, CPUBrand), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_GPUDriverInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_GPUBrand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_NumberofCores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_OSSubversion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_OSVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_CPUVendor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_CPUChipset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::NewProp_CPUBrand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Function Library" },
		{ "DisplayName", "Get Hardware Info" },
		{ "Keywords", "Capit Hardware Info" },
		{ "ModuleRelativePath", "Public/BPF_Capit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPF_Capit, nullptr, "getHardwarInfo", nullptr, nullptr, sizeof(BPF_Capit_eventgetHardwarInfo_Parms), Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPF_Capit_getHardwarInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPF_Capit_getHardwarInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPF_Capit_Restart_App_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPF_Capit_Restart_App_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Function Library" },
		{ "DisplayName", "Restart App" },
		{ "Keywords", "Capit Restart App" },
		{ "ModuleRelativePath", "Public/BPF_Capit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPF_Capit_Restart_App_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPF_Capit, nullptr, "Restart_App", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPF_Capit_Restart_App_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPF_Capit_Restart_App_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPF_Capit_Restart_App()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPF_Capit_Restart_App_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPF_Capit_UI_Screenshot_Statics
	{
		struct BPF_Capit_eventUI_Screenshot_Parms
		{
			FString Filename;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPF_Capit_UI_Screenshot_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPF_Capit_eventUI_Screenshot_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPF_Capit_UI_Screenshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPF_Capit_UI_Screenshot_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPF_Capit_UI_Screenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capit Function Library" },
		{ "DisplayName", "UI Screenshot" },
		{ "Keywords", "Capit Screenshot UI" },
		{ "ModuleRelativePath", "Public/BPF_Capit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPF_Capit_UI_Screenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPF_Capit, nullptr, "UI_Screenshot", nullptr, nullptr, sizeof(BPF_Capit_eventUI_Screenshot_Parms), Z_Construct_UFunction_UBPF_Capit_UI_Screenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPF_Capit_UI_Screenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPF_Capit_UI_Screenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPF_Capit_UI_Screenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPF_Capit_UI_Screenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPF_Capit_UI_Screenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPF_Capit_NoRegister()
	{
		return UBPF_Capit::StaticClass();
	}
	struct Z_Construct_UClass_UBPF_Capit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPF_Capit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Capit_Engine_Plugin_Editor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPF_Capit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPF_Capit_getHardwarInfo, "getHardwarInfo" }, // 3493767773
		{ &Z_Construct_UFunction_UBPF_Capit_Restart_App, "Restart_App" }, // 540997433
		{ &Z_Construct_UFunction_UBPF_Capit_UI_Screenshot, "UI_Screenshot" }, // 923497187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPF_Capit_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BPF_Capit.h" },
		{ "ModuleRelativePath", "Public/BPF_Capit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPF_Capit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPF_Capit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPF_Capit_Statics::ClassParams = {
		&UBPF_Capit::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPF_Capit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPF_Capit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPF_Capit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPF_Capit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPF_Capit, 4030663519);
	template<> CAPIT_ENGINE_PLUGIN_EDITOR_API UClass* StaticClass<UBPF_Capit>()
	{
		return UBPF_Capit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPF_Capit(Z_Construct_UClass_UBPF_Capit, &UBPF_Capit::StaticClass, TEXT("/Script/Capit_Engine_Plugin_Editor"), TEXT("UBPF_Capit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPF_Capit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
