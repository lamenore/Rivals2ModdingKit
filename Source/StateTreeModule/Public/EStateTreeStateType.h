#pragma once
#include "CoreMinimal.h"
#include "EStateTreeStateType.generated.h"

UENUM(BlueprintType)
enum class EStateTreeStateType : uint8 {
    State,
    Group,
    Linked,
    LinkedAsset,
    Subtree,
};

