#pragma once
#include "CoreMinimal.h"
#include "EExpressiveTextAlignmentOffsetType.generated.h"

UENUM(BlueprintType)
enum class EExpressiveTextAlignmentOffsetType : uint8 {
    PercentageOfParentSize,
    Pixels,
};

