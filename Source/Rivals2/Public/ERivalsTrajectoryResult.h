#pragma once
#include "CoreMinimal.h"
#include "ERivalsTrajectoryResult.generated.h"

UENUM(BlueprintType)
enum class ERivalsTrajectoryResult : uint8 {
    Tumble,
    Death,
    HitGround,
};

