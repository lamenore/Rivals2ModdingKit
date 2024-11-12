#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterRenderer.h"
#include "OrcaneRenderer.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AOrcaneRenderer : public ARivalsCharacterRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BellyFillVisualAlpha;
    
    AOrcaneRenderer(const FObjectInitializer& ObjectInitializer);

};

