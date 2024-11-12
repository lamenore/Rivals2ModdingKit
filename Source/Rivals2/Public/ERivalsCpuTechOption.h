#pragma once
#include "CoreMinimal.h"
#include "ERivalsCpuTechOption.generated.h"

UENUM(BlueprintType)
enum class ERivalsCpuTechOption : uint8 {
    Random,
    None,
    In,
    Away,
    Neutral,
};

