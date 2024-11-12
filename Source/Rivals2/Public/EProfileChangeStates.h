#pragma once
#include "CoreMinimal.h"
#include "EProfileChangeStates.generated.h"

UENUM(BlueprintType)
enum class EProfileChangeStates : uint8 {
    Updating,
    Success,
    Error,
};

