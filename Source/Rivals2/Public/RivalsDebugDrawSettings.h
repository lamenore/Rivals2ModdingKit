#pragma once
#include "CoreMinimal.h"
#include "RivalsDebugDrawSettings.generated.h"

USTRUCT(BlueprintType)
struct FRivalsDebugDrawSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDiLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawHitboxes;
    
    RIVALS2_API FRivalsDebugDrawSettings();
};

