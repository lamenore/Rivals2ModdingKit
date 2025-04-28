#pragma once
#include "CoreMinimal.h"
#include "ERivalsCpuDiMode.generated.h"

UENUM(BlueprintType)
enum class ERivalsCpuDiMode : uint8 {
    Random,
    None,
    In,
    Away,
    Down,
    Up,
};

