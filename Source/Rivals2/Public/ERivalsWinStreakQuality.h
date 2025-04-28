#pragma once
#include "CoreMinimal.h"
#include "ERivalsWinStreakQuality.generated.h"

UENUM(BlueprintType)
enum class ERivalsWinStreakQuality : uint8 {
    Starter,
    Base,
    Increasing,
    High,
    Peak,
};

