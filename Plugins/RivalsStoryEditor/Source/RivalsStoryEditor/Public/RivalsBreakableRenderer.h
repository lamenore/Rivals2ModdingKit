#pragma once
#include "CoreMinimal.h"
#include "RivalsColliderRenderer.h"
#include "RivalsBreakableRenderer.generated.h"

UCLASS(Blueprintable)
class ARivalsBreakableRenderer : public ARivalsColliderRenderer {
    GENERATED_BODY()
public:
    ARivalsBreakableRenderer(const FObjectInitializer& ObjectInitializer);

};

