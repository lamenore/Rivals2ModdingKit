#pragma once
#include "CoreMinimal.h"
#include "ESnapNetPropertyRelevance.generated.h"

UENUM(BlueprintType)
enum class ESnapNetPropertyRelevance : uint8 {
    Always,
    Never,
    Simulated,
    NotSimulated,
    Spectated,
    NotSpectated,
    SimulatedOrSpectated,
    NeitherSimulatedNorSpectated,
};

