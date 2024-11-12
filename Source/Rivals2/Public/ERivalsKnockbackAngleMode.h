#pragma once
#include "CoreMinimal.h"
#include "ERivalsKnockbackAngleMode.generated.h"

UENUM(BlueprintType)
enum class ERivalsKnockbackAngleMode : uint8 {
    SpecifiedAngle,
    AwayFromHostCenter,
    HostVelocityAngle,
};

