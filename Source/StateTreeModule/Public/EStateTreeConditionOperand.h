#pragma once
#include "CoreMinimal.h"
#include "EStateTreeConditionOperand.generated.h"

UENUM(BlueprintType)
enum class EStateTreeConditionOperand : uint8 {
    Copy,
    And,
    Or,
};

