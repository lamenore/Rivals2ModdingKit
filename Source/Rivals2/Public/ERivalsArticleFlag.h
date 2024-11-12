#pragma once
#include "CoreMinimal.h"
#include "ERivalsArticleFlag.generated.h"

UENUM(BlueprintType)
enum class ERivalsArticleFlag : uint8 {
    Active,
    CanFallThrough,
    DeactivationQueued,
    DestroyAfterHitpause,
    DisableECB,
    DisableHitboxes,
    HasHitObject,
    HasHitPlayer,
    HasHitShield,
    Invisible,
    PlatformActive,
    WasParried,
    Count,
};

