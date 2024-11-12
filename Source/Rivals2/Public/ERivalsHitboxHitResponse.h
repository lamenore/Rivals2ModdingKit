#pragma once
#include "CoreMinimal.h"
#include "ERivalsHitboxHitResponse.generated.h"

UENUM(BlueprintType)
enum class ERivalsHitboxHitResponse : uint8 {
    Hit,
    Grab,
    HitGrab,
    Detect,
    DetectAll,
    KillProjectiles,
};

