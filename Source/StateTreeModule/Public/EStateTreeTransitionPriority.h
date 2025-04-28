#pragma once
#include "CoreMinimal.h"
#include "EStateTreeTransitionPriority.generated.h"

UENUM(BlueprintType)
enum class EStateTreeTransitionPriority : uint8 {
    None,
    Normal,
    Medium,
    High,
    Critical,
};

