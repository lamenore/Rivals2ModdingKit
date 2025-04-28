#pragma once
#include "CoreMinimal.h"
#include "EStateTreeTransitionTrigger.generated.h"

UENUM(BlueprintType)
enum class EStateTreeTransitionTrigger : uint8 {
    None,
    OnStateCompleted = 3,
    OnStateSucceeded = 1,
    OnStateFailed,
    OnTick = 4,
    OnEvent = 8,
    MAX,
};

