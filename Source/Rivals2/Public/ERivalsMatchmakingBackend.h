#pragma once
#include "CoreMinimal.h"
#include "ERivalsMatchmakingBackend.generated.h"

UENUM(BlueprintType)
enum class ERivalsMatchmakingBackend : uint8 {
    PlayFab,
    Edgegap,
    Count,
};

