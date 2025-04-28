#pragma once
#include "CoreMinimal.h"
#include "ERivalsCpuThrowOption.generated.h"

UENUM(BlueprintType)
enum class ERivalsCpuThrowOption : uint8 {
    Random,
    None,
    Up,
    Down,
    Back,
    Forward,
};

