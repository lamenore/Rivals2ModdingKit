#pragma once
#include "CoreMinimal.h"
#include "EStateTreeBindableStructSource.generated.h"

UENUM(BlueprintType)
enum class EStateTreeBindableStructSource : uint8 {
    Context,
    Parameter,
    Evaluator,
    GlobalTask,
    State,
    Task,
    Condition,
};

