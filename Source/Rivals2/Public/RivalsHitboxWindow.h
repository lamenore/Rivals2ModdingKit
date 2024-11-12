#pragma once
#include "CoreMinimal.h"
#include "RivalsHitboxWindow.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FRivalsHitboxWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitboxName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LengthInFrames;
    
    FRivalsHitboxWindow();
};

