#pragma once
#include "CoreMinimal.h"
#include "ERivalsRightStickSetting.generated.h"

UENUM(BlueprintType)
enum class ERivalsRightStickSetting : uint8 {
    Strong,
    Attack,
    Special,
    Adaptive,
    Reverse,
    Count,
};

