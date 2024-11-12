#pragma once
#include "CoreMinimal.h"
#include "ERivalsCpuMode.generated.h"

UENUM(BlueprintType)
enum class ERivalsCpuMode : uint8 {
    Idle,
    Crouch,
    Jump,
    Active,
    Passive,
    Recovering,
    Attacking,
    Shielding,
    InfiniteShield,
    TechableHitstun,
    Hitstun,
    OnLedge,
    KnockedDown,
    Grabbing,
    Grabbed,
};

