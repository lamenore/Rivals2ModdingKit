#pragma once
#include "CoreMinimal.h"
#include "ERivalsProjectileInteraction.generated.h"

UENUM(BlueprintType)
enum class ERivalsProjectileInteraction : uint8 {
    Default,
    IgnoreProjectiles,
    CanOnlyHitProjectiles,
};

