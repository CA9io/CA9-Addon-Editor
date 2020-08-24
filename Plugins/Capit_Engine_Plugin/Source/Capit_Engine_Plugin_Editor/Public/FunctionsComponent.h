// All rights reserved. Holder of the rights is the TM9657 GmbH

#pragma once

#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "FunctionsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CAPIT_ENGINE_PLUGIN_EDITOR_API UFunctionsComponent : public UMeshComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFunctionsComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
