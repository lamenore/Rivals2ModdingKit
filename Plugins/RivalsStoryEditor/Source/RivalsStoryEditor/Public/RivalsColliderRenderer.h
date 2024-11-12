#pragma once
#include "CoreMinimal.h"
#include "RivalsStoryRenderer.h"
#include "RivalsColliderRenderer.generated.h"

UCLASS(Blueprintable)
class ARivalsColliderRenderer : public ARivalsStoryRenderer {
    GENERATED_BODY()
public:
    ARivalsColliderRenderer(const FObjectInitializer& ObjectInitializer);

};

