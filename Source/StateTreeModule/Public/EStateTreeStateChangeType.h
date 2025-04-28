#pragma once
#include "CoreMinimal.h"
#include "EStateTreeStateChangeType.generated.h"

UENUM(BlueprintType)
enum class EStateTreeStateChangeType : uint8 {
    None,
    Changed,
    Sustained,
};

