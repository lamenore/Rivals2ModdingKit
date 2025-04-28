#pragma once
#include "CoreMinimal.h"
#include "EStateTreeStateSelectionBehavior.generated.h"

UENUM(BlueprintType)
enum class EStateTreeStateSelectionBehavior : uint8 {
    None,
    TryEnterState,
    TrySelectChildrenInOrder,
    TryFollowTransitions,
};

