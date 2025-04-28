#pragma once
#include "CoreMinimal.h"
#include "EEdgeguardHeight.generated.h"

UENUM(BlueprintType)
enum class EEdgeguardHeight : uint8 {
    Random,
    Low,
    Medium,
    High,
};

