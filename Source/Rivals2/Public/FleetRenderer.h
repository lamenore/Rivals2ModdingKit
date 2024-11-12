#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterRenderer.h"
#include "FleetRenderer.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AFleetRenderer : public ARivalsCharacterRenderer {
    GENERATED_BODY()
public:
    AFleetRenderer(const FObjectInitializer& ObjectInitializer);

};

