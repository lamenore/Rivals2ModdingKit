#pragma once
#include "CoreMinimal.h"
#include "ESnapNetRenderInterpolationMethod.generated.h"

UENUM(BlueprintType)
enum class ESnapNetRenderInterpolationMethod : uint8 {
    PartialTick,
    PreviousTicks,
};

