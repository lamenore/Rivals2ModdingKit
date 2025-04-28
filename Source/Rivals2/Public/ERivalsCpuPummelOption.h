#pragma once
#include "CoreMinimal.h"
#include "ERivalsCpuPummelOption.generated.h"

UENUM(BlueprintType)
enum class ERivalsCpuPummelOption : uint8 {
    Random,
    None,
    Attack,
    Special,
};

