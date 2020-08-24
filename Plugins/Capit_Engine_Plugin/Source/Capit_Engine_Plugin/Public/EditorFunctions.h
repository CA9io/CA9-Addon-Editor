// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UnrealEdMisc.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorFunctions.generated.h"

/**
 * 
 */
UCLASS()
class CAPIT_ENGINE_PLUGIN_API UEditorFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "restart Engine", Keywords = "shutdown"), Category = "Capit Functions Editor")
		static void restart_Editor();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Open Folder Dialog Capit", Keywords = "Capit_Engine"), Category = "Capit Functions Editor")
		static bool open_folder(const FString& DialogueTitle, const FString& DefaultPath, FString& OutputPath);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create_Process", Keywords = "Capit_Engine"), Category = "Capit Functions Editor")
		static bool Execute_Shell(FString URL, FString Params);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Package Project", Keywords = "Capit_Engine"), Category = "Capit Functions Editor")
		static bool PackageProject(FString Path, FString Name, FString ProjectDirectory, FString EngineDirectory);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Open Editor Widget", Keywords = "Capit_Engine"), Category = "Capit Functions Editor")
		static void open_editor_widget(UWidgetBlueprint* Blueprint);


};
