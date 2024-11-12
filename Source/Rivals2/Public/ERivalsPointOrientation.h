#pragma once
#include "CoreMinimal.h"
#include "ERivalsPointOrientation.generated.h"

UENUM(BlueprintType)
enum class ERivalsPointOrientation : uint8 {
    Colinear,
    Clockwise,
    Counterclockwise,
};

