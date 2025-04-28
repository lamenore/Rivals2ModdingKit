#pragma once
#include "CoreMinimal.h"
#include "ERivalsMatchmakingMode.generated.h"

UENUM(BlueprintType)
enum class ERivalsMatchmakingMode : uint8 {
    Dev,
    Default,
    Alt,
    Beta,
};

