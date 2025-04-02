#pragma once
#include "CoreMinimal.h"
#include "EExpressiveTextWrapMode.generated.h"

UENUM(BlueprintType)
enum class EExpressiveTextWrapMode : uint8 {
    WrapAtPixelCount,
    WrapAtPercentageOfParentSize,
    NoWrap,
};

