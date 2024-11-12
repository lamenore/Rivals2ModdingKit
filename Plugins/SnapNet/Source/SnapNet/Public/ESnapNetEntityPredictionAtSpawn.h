#pragma once
#include "CoreMinimal.h"
#include "ESnapNetEntityPredictionAtSpawn.generated.h"

UENUM(BlueprintType)
enum class ESnapNetEntityPredictionAtSpawn : uint8 {
    Default,
    None,
    Owner,
    All,
};

