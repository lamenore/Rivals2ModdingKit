#pragma once
#include "CoreMinimal.h"
#include "ERivalsOrbyState.generated.h"

UENUM()
enum class ERivalsOrbyState : int32 {
    None,
    Hitstun,
    Moving,
    Talk,
    Idle,
    Charging,
    Cooldown,
    Laser,
    Burst,
    FastBurst,
    Projectile,
};

