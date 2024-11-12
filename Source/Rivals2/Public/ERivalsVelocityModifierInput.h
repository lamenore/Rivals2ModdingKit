#pragma once
#include "CoreMinimal.h"
#include "ERivalsVelocityModifierInput.generated.h"

UENUM(BlueprintType)
enum class ERivalsVelocityModifierInput : uint8 {
    Forward,
    Backward,
    Up,
    Down,
    StraightForward,
    StraightBackward,
    StraightUp,
    StraightDown,
    AnalogForward,
    AnalogBackward,
    AnalogHorizontal,
    AnalogUp,
    AnalogDown,
    AnalogVertical,
    UseJoystickDirection,
    UseAnalogJoystickDirection,
    ChargeValue,
    Aerial,
    Random,
    RandomUniform,
};

