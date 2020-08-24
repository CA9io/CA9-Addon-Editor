// All rights reserved. Holder of the rights is the TM9657 GmbH

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "FunctionPin.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FExecDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVariableDelegate);
/**
 * 
 */
UENUM(BlueprintType)
enum EPinType
{
	VE_InputExec	UMETA(Displayname = "Input"),
	VE_OutputExec	UMETA(Displayname = "Output"),
	VE_DebugPin		UMETA(DisplayName = "DEBUG")
};

USTRUCT(BlueprintType)
struct FCapitVariable : public FTableRowBase
{
	GENERATED_BODY()

	UScriptStruct* StructType;
	void* StructContent;
};

USTRUCT(BlueprintType)
struct FConnectTranslator : public FTableRowBase
{
	GENERATED_BODY()
		
		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Capit Functions")
		int ActorUID;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Capit Functions")
		FString Objectname;
	
	FConnectTranslator() {};

	FConnectTranslator(int ActorUIDIn, FString ObjectnameIn) {
		Objectname = ObjectnameIn;
		ActorUID = ActorUIDIn;
	}
		
};

UCLASS()
class CAPIT_ENGINE_PLUGIN_EDITOR_API UFunctionPin : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFunctionPin(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(Category = "Capit Function", CustomThunk, meta = (CustomStructureParam = "Struct"))
	static bool SetVariable(UFunctionPin* FunctionPin, const UScriptStruct* Struct);
	static bool Generic_SetVariable(UFunctionPin* FunctionPin, UScriptStruct* StructDefinition, void* Struct);
	DECLARE_FUNCTION(execSetVariable) {
		P_GET_OBJECT(UFunctionPin, FunctionPin);
		Stack.StepCompiledIn<UStructProperty>(NULL);
		void* InStruct = Stack.MostRecentPropertyAddress;

		P_FINISH;
		bool bSuccess = false;

		UStructProperty* StructProp = Cast<UStructProperty>(Stack.MostRecentProperty);
		if (StructProp && InStruct)
		{
			UScriptStruct* StructType = StructProp->Struct;

			P_NATIVE_BEGIN;
			bSuccess = Generic_SetVariable(FunctionPin, StructType, InStruct);
			P_NATIVE_END;
		}
		*(bool*)RESULT_PARAM = bSuccess;
	}

	UFUNCTION(BlueprintCallable, Category = "Capit Function", CustomThunk, meta = (CustomStructureParam = "OutRow"))
	static bool GetVariable(UFunctionPin* FunctionPin, FTableRowBase& OutRow);
	static bool Generic_GetVariable(UFunctionPin* FunctionPin, UScriptStruct* TableType, void* OutRowPtr);
	DECLARE_FUNCTION(execGetVariable) {
		P_GET_OBJECT(UFunctionPin, FunctionPin);
		Stack.StepCompiledIn<UStructProperty>(NULL);
		void* OutRowPtr = Stack.MostRecentPropertyAddress;
		
		P_FINISH;
		bool bSuccess = false;

		UStructProperty* StructProp = Cast<UStructProperty>(Stack.MostRecentProperty);
		if (StructProp && OutRowPtr)
		{
			UScriptStruct* OutputType = StructProp->Struct;

			P_NATIVE_BEGIN;
			bSuccess = Generic_GetVariable(FunctionPin, OutputType, OutRowPtr);
			P_NATIVE_END;
		}
		*(bool*)RESULT_PARAM = bSuccess;
	}

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Pins", Keywords = "Capit Functions Pin"), Category = "Capit Functions")
		bool getConnected(TArray<UFunctionPin*>& Pins);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Construct", Keywords = "Capit Functions Pin"), Category = "Capit Functions")
		void construct();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Pin", Keywords = "Capit Functions Pin"), Category = "Capit Functions")
		bool addConnected(UFunctionPin* NewPin, FString& Error);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Finished Node", Keywords = "Capit Function Functions Finished"), Category = "Capit Functions")
		bool PropagateExec();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (DisplayName = "Execution call received", Keywords = "Execution"), Category = "Capit Functions")
		void ExecIn();

	UFUNCTION(BlueprintCallable, Category = "Capit Function", CustomThunk, meta = (CustomStructureParam = "Struct"))
	static bool PropagateVar(UFunctionPin* FunctionPin, const UScriptStruct* Struct);
	static bool Generic_PropagateVar(UFunctionPin* FunctionPin, UScriptStruct* StructDefinition, void* Struct);
	DECLARE_FUNCTION(execPropagateVar) {
		P_GET_OBJECT(UFunctionPin, FunctionPin);
		Stack.StepCompiledIn<UStructProperty>(NULL);
		void* InStruct = Stack.MostRecentPropertyAddress;

		P_FINISH;
		bool bSuccess = false;

		UStructProperty* StructProp = Cast<UStructProperty>(Stack.MostRecentProperty);
		if (StructProp && InStruct)
		{
			UScriptStruct* StructType = StructProp->Struct;

			P_NATIVE_BEGIN;
			bSuccess = Generic_PropagateVar(FunctionPin, StructType, InStruct);
			P_NATIVE_END;
		}
		*(bool*)RESULT_PARAM = bSuccess;
	}

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (DisplayName = "Variable Changed", Keywords = "Variable Function Capit"), Category = "Capit Functions")
		void VarIn();

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Docking Cords", Keywords = "Capit Functions Pin"), Category = "Capit Functions")
		void getDockingCords(FVector& Cord, FVector& Tangent, float Distance);

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadWrite, Category = "Capit Functions")
		TArray<UFunctionPin*> Connected;

	UPROPERTY(EditAnywhere, Savegame, BlueprintReadWrite, Category = "Capit Functions")
		TArray<FConnectTranslator> ConnectedTranslator;

	UPROPERTY(EditAnywhere, Savegame, BlueprintReadWrite, Category = "Capit Functions")
		FString Objectname;
	
	UPROPERTY(EditAnywhere, Savegame, BlueprintReadWrite, Category = "Capit Functions")
		TEnumAsByte<EPinType> Type;

	UPROPERTY(EditAnywhere, Savegame, BlueprintReadWrite, Category = "Capit Functions")
		FString VariableType = "Exec";

	UPROPERTY(EditAnywhere, Savegame, BlueprintReadWrite, Category = "Capit Functions")
		FString Description = "Pin Description";

	UPROPERTY(EditAnywhere, Savegame, BlueprintReadWrite, Category = "Capit Functions")
		FLinearColor Color = FLinearColor(1,1,1,1);

	UPROPERTY(EditAnywhere, Savegame, Category = "Capit Functions")
		FCapitVariable Variable;

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Capit Functions")
		bool bCurrentlyExecuting = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Capit Functions")
		AActor* ComponentOwner;

	UPROPERTY(BlueprintAssignable, Category = "Capit Functions")
		FExecDelegate OnExecStarted;

	UPROPERTY(BlueprintAssignable, Category = "Capit Functions")
		FVariableDelegate OnVariableChanged;

	protected:
		// Called when the game starts
		virtual void BeginPlay() override;
};