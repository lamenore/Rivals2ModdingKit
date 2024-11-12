#pragma once
#include "CoreMinimal.h"
#include "ERivalsVelocityType.generated.h"

UENUM(BlueprintType)
enum class ERivalsVelocityType : uint8 {
    None,
    SetVelocity,
    AddVelocity,
    ConstVelocity,
    ConstAddVelocity,
    MultiplyVelocity,
    ChangeAngle,
};

