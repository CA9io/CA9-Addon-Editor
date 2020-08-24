// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


//#include "UnrealEdMisc.h"


#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Master_Object.generated.h"


USTRUCT(BlueprintType)
struct FClassTranslator : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TSoftClassPtr<UObject> Class;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString	ClassName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString	Description;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString	Author;
};

UCLASS()
class CAPIT_ENGINE_PLUGIN_EDITOR_API AMaster_Object : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMaster_Object();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "start Program", Keywords = "shutdown"), Category = "Capit Functions Editor")
		static void start_Program(int32& ProcessId, FString FullPathOfProgramToRun, TArray<FString> CommandlineArgs, bool Detach, bool Hidden, int32 Priority, FString OptionalWorkingDirectory);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load Object from AssetPath", Keywords = "Load Object from AssetPath"), Category = "Capit Functions Editor")
		static UObject* LoadObjectFromAssetPath(TSubclassOf<UObject> ObjectClass, FName Path, bool& IsValid);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Open URL external", Keywords = "Load Object from AssetPath"), Category = "Capit Functions Editor")
		static void open_url(FString URL);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add_ClassTranslationObject", Keywords = "Load Object from AssetPath"), Category = "Capit Functions Editor")
		static void add_class_translation(UDataTable* Datatable, FClassTranslator TranslatorObject);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Calculate Object Translation", Keywords = "Load Object from AssetPath"), Category = "Capit Functions Editor")
		static void calculateObjectTranslation(TArray<FVector> PolygonsIN, FRotator Rotation, FVector& Correction, FVector& Maximum, FVector& Minimum);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Calc Poligon Rotation", Keywords = "Load Object from AssetPath"), Category = "Capit Functions Editor")
		static TArray<FVector> transformPoligonsRotation(TArray<FVector> PolygonsIN, FRotator Rotation);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Top Level Directories", Keywords = "Load Object from AssetPath"), Category = "Capit Functions Editor")
		static TArray<FString> get_top_level_directories(FString Path);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Flat URL Encode", Keywords = "Load Object from AssetPath"), Category = "Capit Functions Editor")
		static void flat_url_encode(FString String, FString &encodedString);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Flat URL Decode", Keywords = "Load Object from AssetPath"), Category = "Capit Functions Editor")
		static void flat_url_decode(FString String, FString& decodedString);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
