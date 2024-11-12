#pragma once
#include "CoreMinimal.h"
#include "ERivalsMatchType.generated.h"

UENUM(BlueprintType)
enum class ERivalsMatchType : uint8 {
    Stock,
    Time,
    Story,
    Target,
};

