#pragma once
#include "CoreMinimal.h"
#include "EPlayerNetStatQuality.generated.h"

UENUM(BlueprintType)
enum class EPlayerNetStatQuality : uint8 {
    Offline,
    Perfect,
    Great,
    Good,
    Okay,
    Bad,
    Count,
};

