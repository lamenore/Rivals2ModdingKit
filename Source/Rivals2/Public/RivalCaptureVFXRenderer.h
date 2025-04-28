#pragma once
#include "CoreMinimal.h"
#include "RivalCaptureVFX.h"
#include "RivalCaptureVFXRenderer.generated.h"

class ARivalsVfxRenderer;

USTRUCT(BlueprintType)
struct FRivalCaptureVFXRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsVfxRenderer* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalCaptureVFX VFX;
    
    RIVALS2_API FRivalCaptureVFXRenderer();
};

