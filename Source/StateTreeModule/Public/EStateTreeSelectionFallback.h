#pragma once
#include "CoreMinimal.h"
#include "EStateTreeSelectionFallback.generated.h"

UENUM(BlueprintType)
enum class EStateTreeSelectionFallback : uint8 {
    None,
    NextSelectableSibling,
};

