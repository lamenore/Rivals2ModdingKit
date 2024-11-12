#pragma once
#include "CoreMinimal.h"
#include "ESnapNetRotatorEncodingSource.generated.h"

UENUM(BlueprintType)
enum class ESnapNetRotatorEncodingSource : uint8 {
    Custom,
    SimulatedOrSpectatedDefault,
    NeitherSimulatedNorSpectatedDefault,
};

