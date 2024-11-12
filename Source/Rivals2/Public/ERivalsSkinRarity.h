#pragma once
#include "CoreMinimal.h"
#include "ERivalsSkinRarity.generated.h"

UENUM(BlueprintType)
enum class ERivalsSkinRarity : uint8 {
    Default,
    Common,
    Rare,
    Epic,
    Legendary,
    Hidden,
    RivalsSkinRarity_MAX UMETA(Hidden),
};

