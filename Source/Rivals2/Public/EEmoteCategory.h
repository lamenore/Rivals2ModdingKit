#pragma once
#include "CoreMinimal.h"
#include "EEmoteCategory.generated.h"

UENUM(BlueprintType)
enum class EEmoteCategory : uint8 {
    Uncategorized,
    Default,
    Character,
    Creatures,
    Seasonal,
};

