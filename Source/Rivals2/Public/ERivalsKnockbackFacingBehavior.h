#pragma once
#include "CoreMinimal.h"
#include "ERivalsKnockbackFacingBehavior.generated.h"

UENUM(BlueprintType)
enum class ERivalsKnockbackFacingBehavior : uint8 {
    Default,
    PreserveFacing,
    FaceAwayFromKnockback,
};

