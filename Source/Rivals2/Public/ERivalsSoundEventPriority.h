#pragma once
#include "CoreMinimal.h"
#include "ERivalsSoundEventPriority.generated.h"

UENUM(BlueprintType)
enum class ERivalsSoundEventPriority : uint8 {
    Default,
    OnTimeOnly,
    Guaranteed,
};

