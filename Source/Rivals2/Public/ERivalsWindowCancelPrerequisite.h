#pragma once
#include "CoreMinimal.h"
#include "ERivalsWindowCancelPrerequisite.generated.h"

UENUM(BlueprintType)
enum class ERivalsWindowCancelPrerequisite : uint8 {
    None,
    HitAnything,
    HitObject,
    HitPlayer,
    HitShield,
    Grounded,
    Aerial,
    JoystickIdle,
    JoystickNotIdle,
    ShieldNotDown,
    StateInt0,
    StateInt1,
    StateInt2,
};

