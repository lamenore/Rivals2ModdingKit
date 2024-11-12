#pragma once
#include "CoreMinimal.h"
#include "ERivalsCpuDiMode.generated.h"

UENUM(BlueprintType)
enum class ERivalsCpuDiMode : uint8 {
    None,
    Random,
    In,
    Away,
    Down,
    Up,
};

