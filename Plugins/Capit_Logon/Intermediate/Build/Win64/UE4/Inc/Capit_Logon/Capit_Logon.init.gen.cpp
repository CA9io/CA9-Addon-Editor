// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapit_Logon_init() {}
	CAPIT_LOGON_API UFunction* Z_Construct_UDelegateFunction_Capit_Logon_DownloadFileDelegate__DelegateSignature();
	CAPIT_LOGON_API UFunction* Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Capit_Logon()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Capit_Logon_DownloadFileDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Capit_Logon_UploadFileDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Capit_Logon",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x54C5A649,
				0x0900A2E3,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
