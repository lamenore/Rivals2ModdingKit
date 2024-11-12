#pragma once
#include "CoreMinimal.h"
#include "RivalsColliderRenderer.h"
#include "RivalsSwitchRenderer.generated.h"

UCLASS(Blueprintable)
class ARivalsSwitchRenderer : public ARivalsColliderRenderer {
    GENERATED_BODY()
public:
    ARivalsSwitchRenderer(const FObjectInitializer& ObjectInitializer);

};

