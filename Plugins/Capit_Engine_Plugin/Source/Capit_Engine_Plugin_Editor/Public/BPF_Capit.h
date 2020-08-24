// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPF_Capit.generated.h"

/**
 * 
 */
UCLASS()
class CAPIT_ENGINE_PLUGIN_EDITOR_API UBPF_Capit : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Hardware Info", Keywords = "Capit Hardware Info"), Category = "Capit Function Library")
		static void getHardwarInfo(FString& CPUBrand, FString& CPUChipset, FString& CPUVendor, FString& OSVersion, FString& OSSubversion, int32& NumberofCores, FString& GPUBrand, FString& GPUDriverInfo);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Restart App", Keywords = "Capit Restart App"), Category = "Capit Function Library")
		static void Restart_App();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "UI Screenshot", Keywords = "Capit Screenshot UI"), Category = "Capit Function Library")
		static void UI_Screenshot(FString Filename);

};
