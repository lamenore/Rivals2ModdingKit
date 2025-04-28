#pragma once
#include "CoreMinimal.h"
#include "EStateTreeBlueprintPropertyCategory.generated.h"

UENUM(BlueprintType)
enum class EStateTreeBlueprintPropertyCategory : uint8 {
    NotSet,
    Input,
    Parameter,
    Output,
    ContextObject,
};

