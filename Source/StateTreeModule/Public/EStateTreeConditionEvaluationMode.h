#pragma once
#include "CoreMinimal.h"
#include "EStateTreeConditionEvaluationMode.generated.h"

UENUM(BlueprintType)
enum class EStateTreeConditionEvaluationMode : uint8 {
    Evaluated,
    ForcedTrue,
    ForcedFalse,
};

