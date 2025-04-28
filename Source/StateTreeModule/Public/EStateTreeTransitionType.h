#pragma once
#include "CoreMinimal.h"
#include "EStateTreeTransitionType.generated.h"

UENUM(BlueprintType)
enum class EStateTreeTransitionType : uint8 {
    None,
    Succeeded,
    Failed,
    GotoState,
    NextState,
    NextSelectableState,
    NotSet,
};

