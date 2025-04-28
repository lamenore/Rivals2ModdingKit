#pragma once
#include "CoreMinimal.h"
#include "ERivalsHurtboxState.generated.h"

UENUM(BlueprintType)
enum class ERivalsHurtboxState : uint8 {
    Vulnerable,
    Invulnerable,
    Intangible,
    Ungrabbable,
    Unhitgrabbable,
    Shielding,
    Parrying,
    ProjectileParrying,
    ProjectileIntangible,
    OnlyHittableByProjectileKiller,
    Countering,
    Default,
    Inactive,
};

