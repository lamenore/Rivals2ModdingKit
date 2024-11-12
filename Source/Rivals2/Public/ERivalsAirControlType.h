#pragma once
#include "CoreMinimal.h"
#include "ERivalsAirControlType.generated.h"

UENUM(BlueprintType)
enum class ERivalsAirControlType : uint8 {
    Default,
    CanDrift,
    NoDrift,
};

