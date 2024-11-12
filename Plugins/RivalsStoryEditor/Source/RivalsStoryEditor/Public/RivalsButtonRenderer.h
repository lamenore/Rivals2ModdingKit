#pragma once
#include "CoreMinimal.h"
#include "RivalsColliderRenderer.h"
#include "RivalsButtonRenderer.generated.h"

UCLASS(Blueprintable)
class ARivalsButtonRenderer : public ARivalsColliderRenderer {
    GENERATED_BODY()
public:
    ARivalsButtonRenderer(const FObjectInitializer& ObjectInitializer);

};

