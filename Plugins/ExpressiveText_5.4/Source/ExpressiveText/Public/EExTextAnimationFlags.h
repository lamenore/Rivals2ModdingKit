#pragma once
#include "CoreMinimal.h"
#include "EExTextAnimationFlags.generated.h"

UENUM(BlueprintType)
enum class EExTextAnimationFlags : uint8 {
    None=0,
    PositionIsPercentageOfSize = 1,
};

