#pragma once
#include "CoreMinimal.h"
#include "EHitboxInitialInterpolationMode.generated.h"

UENUM(BlueprintType)
enum class EHitboxInitialInterpolationMode : uint8 {
    None,
    Auto,
    Manual,
    ManualPermanent,
};

