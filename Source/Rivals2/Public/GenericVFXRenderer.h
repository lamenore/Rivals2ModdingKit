#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GenericVFXRenderer.generated.h"

UCLASS(Abstract, Blueprintable)
class AGenericVFXRenderer : public AActor {
    GENERATED_BODY()
public:
    AGenericVFXRenderer(const FObjectInitializer& ObjectInitializer);

};

