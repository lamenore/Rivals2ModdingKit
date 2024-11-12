#pragma once
#include "CoreMinimal.h"
#include "ESnapNetPositionEncodingSource.generated.h"

UENUM(BlueprintType)
enum class ESnapNetPositionEncodingSource : uint8 {
    SimulatedOrSpectatedDefault,
    NeitherSimulatedNorSpectatedDefault,
};

