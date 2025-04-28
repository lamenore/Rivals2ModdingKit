#pragma once
#include "CoreMinimal.h"
#include "EStateTreeBreakpointType.generated.h"

UENUM(BlueprintType)
enum class EStateTreeBreakpointType : uint8 {
    Unset,
    OnEnter,
    OnExit,
    OnTransition,
};

