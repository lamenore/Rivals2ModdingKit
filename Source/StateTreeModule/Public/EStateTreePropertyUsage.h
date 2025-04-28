#pragma once
#include "CoreMinimal.h"
#include "EStateTreePropertyUsage.generated.h"

UENUM(BlueprintType)
enum class EStateTreePropertyUsage : uint8 {
    Invalid,
    Context,
    Input,
    Parameter,
    Output,
};

