#pragma once
#include "CoreMinimal.h"
#include "ERivalsConnectionLeniency.generated.h"

UENUM(BlueprintType)
enum class ERivalsConnectionLeniency : uint8 {
    Limited,
    Recommended,
    Expanded,
    VeryExpanded,
    Worldwide,
    Custom,
    Override,
};

