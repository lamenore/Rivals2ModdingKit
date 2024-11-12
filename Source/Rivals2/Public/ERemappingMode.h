#pragma once
#include "CoreMinimal.h"
#include "ERemappingMode.generated.h"

UENUM(BlueprintType)
enum class ERemappingMode : uint8 {
    None,
    Action,
    Axis,
};

