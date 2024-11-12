#pragma once
#include "CoreMinimal.h"
#include "ESnapNetInterpolation.generated.h"

UENUM(BlueprintType)
enum class ESnapNetInterpolation : uint8 {
    InterpolateToValue,
    SnapToValue,
};

