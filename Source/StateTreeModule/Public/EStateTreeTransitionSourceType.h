#pragma once
#include "CoreMinimal.h"
#include "EStateTreeTransitionSourceType.generated.h"

UENUM(BlueprintType)
enum class EStateTreeTransitionSourceType : uint8 {
    Unset,
    Asset,
    ExternalRequest,
    Internal,
};

