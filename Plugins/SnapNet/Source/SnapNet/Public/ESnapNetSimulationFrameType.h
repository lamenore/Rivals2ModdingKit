#pragma once
#include "CoreMinimal.h"
#include "ESnapNetSimulationFrameType.generated.h"

UENUM(BlueprintType)
enum class ESnapNetSimulationFrameType : uint8 {
    None,
    Authoritative,
    Partial,
    Prediction,
    Reconciliation,
};

