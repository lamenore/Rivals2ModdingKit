#pragma once
#include "CoreMinimal.h"
#include "ESnapNetFloatEncodingType.generated.h"

UENUM()
enum class ESnapNetFloatEncodingType : int32 {
    FixedRange,
    FloatingPoint,
    SignedRange,
};

