#pragma once
#include "CoreMinimal.h"
#include "RivalsVfxRenderer.h"
#include "ParrySuccessVfxRenderer.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AParrySuccessVfxRenderer : public ARivalsVfxRenderer {
    GENERATED_BODY()
public:
    AParrySuccessVfxRenderer(const FObjectInitializer& ObjectInitializer);

};

