#pragma once
#include "CoreMinimal.h"
#include "ERivalsArcadeModeStageType.generated.h"

UENUM(BlueprintType)
enum class ERivalsArcadeModeStageType : uint8 {
    Versus,
    HordeVersus,
    AbyssBoss,
    BreakTheTargets,
    Count,
};

