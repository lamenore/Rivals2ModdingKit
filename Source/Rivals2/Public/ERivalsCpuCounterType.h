#pragma once
#include "CoreMinimal.h"
#include "ERivalsCpuCounterType.generated.h"

UENUM(BlueprintType)
enum class ERivalsCpuCounterType : uint8 {
    None,
    Ground,
    Shield,
    Air,
};

