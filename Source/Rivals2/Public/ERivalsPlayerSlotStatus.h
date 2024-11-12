#pragma once
#include "CoreMinimal.h"
#include "ERivalsPlayerSlotStatus.generated.h"

UENUM(BlueprintType)
enum class ERivalsPlayerSlotStatus : uint8 {
    Empty,
    Human,
    Bot,
};

