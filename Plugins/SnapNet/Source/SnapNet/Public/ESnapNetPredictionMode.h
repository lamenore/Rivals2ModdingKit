#pragma once
#include "CoreMinimal.h"
#include "ESnapNetPredictionMode.generated.h"

UENUM(BlueprintType)
enum class ESnapNetPredictionMode : uint8 {
    EntireSimulation,
    LocalPlayersOnly,
    Upgraded,
};

