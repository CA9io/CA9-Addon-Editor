// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Capit_Logon/Public/UploadClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUploadClass() {}
// Cross Module References
	CAPIT_LOGON_API UFunction* Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Capit_Logon();
	CAPIT_LOGON_API UClass* Z_Construct_UClass_UUploadClass_NoRegister();
	CAPIT_LOGON_API UClass* Z_Construct_UClass_UUploadClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	CAPIT_LOGON_API UFunction* Z_Construct_UFunction_UUploadClass_UploadFile();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics
	{
		struct _Script_Capit_Logon_eventUploadFileDelegate_Parms
		{
			int32 HttpResponseCode;
			int32 ContentLength;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContentLength;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HttpResponseCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Capit_Logon_eventUploadFileDelegate_Parms, ContentLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::NewProp_HttpResponseCode = { "HttpResponseCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Capit_Logon_eventUploadFileDelegate_Parms, HttpResponseCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::NewProp_ContentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::NewProp_HttpResponseCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/UploadClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Capit_Logon, nullptr, "UploadFileDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Capit_Logon_eventUploadFileDelegate_Parms), Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UUploadClass::StaticRegisterNativesUUploadClass()
	{
		UClass* Class = UUploadClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UploadFile", &UUploadClass::execUploadFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUploadClass_UploadFile_Statics
	{
		struct UploadClass_eventUploadFile_Parms
		{
			FString URL;
			FString File;
			TMap<FString,FString> Body;
			UUploadClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Body_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Body_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UploadClass_eventUploadFile_Parms, ReturnValue), Z_Construct_UClass_UUploadClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UploadClass_eventUploadFile_Parms, Body), METADATA_PARAMS(Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_Body_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_Body_Key_KeyProp = { "Body_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_Body_ValueProp = { "Body", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UploadClass_eventUploadFile_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UploadClass_eventUploadFile_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUploadClass_UploadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_Body_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_Body_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadClass_UploadFile_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUploadClass_UploadFile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Capit" },
		{ "ModuleRelativePath", "Public/UploadClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUploadClass_UploadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUploadClass, nullptr, "UploadFile", nullptr, nullptr, sizeof(UploadClass_eventUploadFile_Parms), Z_Construct_UFunction_UUploadClass_UploadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUploadClass_UploadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUploadClass_UploadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUploadClass_UploadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUploadClass_UploadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUploadClass_UploadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUploadClass_NoRegister()
	{
		return UUploadClass::StaticClass();
	}
	struct Z_Construct_UClass_UUploadClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUploadClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Capit_Logon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUploadClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUploadClass_UploadFile, "UploadFile" }, // 2416091997
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUploadClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UploadClass.h" },
		{ "ModuleRelativePath", "Public/UploadClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUploadClass_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/UploadClass.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUploadClass_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUploadClass, OnFail), Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUploadClass_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUploadClass_Statics::NewProp_OnFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUploadClass_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/UploadClass.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUploadClass_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUploadClass, OnSuccess), Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUploadClass_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUploadClass_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUploadClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUploadClass_Statics::NewProp_OnFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUploadClass_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUploadClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUploadClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUploadClass_Statics::ClassParams = {
		&UUploadClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUploadClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUploadClass_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUploadClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUploadClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUploadClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUploadClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUploadClass, 1368953127);
	template<> CAPIT_LOGON_API UClass* StaticClass<UUploadClass>()
	{
		return UUploadClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUploadClass(Z_Construct_UClass_UUploadClass, &UUploadClass::StaticClass, TEXT("/Script/Capit_Logon"), TEXT("UUploadClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUploadClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
