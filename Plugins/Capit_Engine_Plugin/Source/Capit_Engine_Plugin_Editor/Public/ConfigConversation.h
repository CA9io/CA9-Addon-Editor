// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConfigConversation.generated.h"

/**
 * 
 */
UCLASS()
class CAPIT_ENGINE_PLUGIN_EDITOR_API UConfigConversation : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Capit Engine Config", CustomThunk, meta = (CustomStructureParam = "Struct"))
		static bool StructToConfig(FString& ConfigString, const UScriptStruct* Struct);
	static bool Generic_StructToConfig(FString& ConfigString, UScriptStruct* StructDefinition, void* Struct);
	DECLARE_FUNCTION(execStructToConfig) {
		P_GET_PROPERTY_REF(UStrProperty, ConfigString);

		Stack.StepCompiledIn<UStructProperty>(NULL);
		void* InStruct = Stack.MostRecentPropertyAddress;

		P_FINISH;
		bool bSuccess = false;

		UStructProperty* StructProp = Cast<UStructProperty>(Stack.MostRecentProperty);
		if (StructProp && InStruct)
		{
			UScriptStruct* StructType = StructProp->Struct;

			P_NATIVE_BEGIN;
			bSuccess = Generic_StructToConfig(ConfigString, StructType, InStruct);
			P_NATIVE_END;
		}
		*(bool*)RESULT_PARAM = bSuccess;
	}

	UFUNCTION(BlueprintCallable, Category = "Capit Engine Config", CustomThunk, meta = (CustomStructureParam = "OutRow"))
		static bool ConfigToStruct(FString ConfigString, FTableRowBase& OutRow);
	static bool Generic_ConfigToStruct(FString ConfigString, UScriptStruct* TableType, void* OutRowPtr);
	DECLARE_FUNCTION(execConfigToStruct) {
		P_GET_PROPERTY(UStrProperty, ConfigString);

		Stack.StepCompiledIn<UStructProperty>(NULL);
		void* OutRowPtr = Stack.MostRecentPropertyAddress;

		P_FINISH;
		bool bSuccess = false;

		UStructProperty* StructProp = Cast<UStructProperty>(Stack.MostRecentProperty);
		if (StructProp && OutRowPtr)
		{
			UScriptStruct* OutputType = StructProp->Struct;

			P_NATIVE_BEGIN;
			bSuccess = Generic_ConfigToStruct(ConfigString, OutputType, OutRowPtr);
			P_NATIVE_END;
		}
		*(bool*)RESULT_PARAM = bSuccess;
	}
	
};
