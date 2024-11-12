#pragma once
#include "CoreMinimal.h"
#include "EGreenScreenType.generated.h"

UENUM(BlueprintType)
enum class EGreenScreenType : uint8 {
    Off,
    Green,
    Magenta,
    Blue,
    Black,
    White,
    Count,
};

