#pragma once
#include "CoreMinimal.h"
#include "ERivalsArcadeModeDifficultySetting.generated.h"

UENUM(BlueprintType)
enum class ERivalsArcadeModeDifficultySetting : uint8 {
    Easy,
    Medium,
    Hard,
    ERivalsArcadeModeDifficultySetting_MIN = Easy,
    ERivalsArcadeModeDifficultySetting_MAX = Hard UMETA(Hidden),
};

