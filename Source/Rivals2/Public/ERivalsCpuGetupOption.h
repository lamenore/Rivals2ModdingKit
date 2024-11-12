#pragma once
#include "CoreMinimal.h"
#include "ERivalsCpuGetupOption.generated.h"

UENUM(BlueprintType)
enum class ERivalsCpuGetupOption : uint8 {
    Random,
    None,
    RollIn,
    RollAway,
    Stand,
    Attack,
    Special,
};

