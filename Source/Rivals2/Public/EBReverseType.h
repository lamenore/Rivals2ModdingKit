#pragma once
#include "CoreMinimal.h"
#include "EBReverseType.generated.h"

UENUM(BlueprintType)
enum class EBReverseType : uint8 {
    None,
    ReverseMomentum,
    ReverseFacing,
};

