#pragma once
#include "CoreMinimal.h"
#include "ESnapNetEntityPredictionMode.generated.h"

UENUM(BlueprintType)
enum class ESnapNetEntityPredictionMode : uint8 {
    Invalid = 0,
    None = 1,
    Owner,
    All,
};

