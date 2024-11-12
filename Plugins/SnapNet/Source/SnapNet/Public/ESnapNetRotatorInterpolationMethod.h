#pragma once
#include "CoreMinimal.h"
#include "ESnapNetRotatorInterpolationMethod.generated.h"

UENUM(BlueprintType)
enum class ESnapNetRotatorInterpolationMethod : uint8 {
    PerAxisLinearInterpolation,
    SphericalLinearInterpolation,
};

