#pragma once
#include "CoreMinimal.h"
#include "ERivalsCpuLedgeOption.generated.h"

UENUM(BlueprintType)
enum class ERivalsCpuLedgeOption : uint8 {
    Random,
    None,
    Roll,
    Getup,
    Attack,
    Special,
    Jump,
};

