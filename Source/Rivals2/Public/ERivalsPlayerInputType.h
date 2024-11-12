#pragma once
#include "CoreMinimal.h"
#include "ERivalsPlayerInputType.generated.h"

UENUM(BlueprintType)
enum class ERivalsPlayerInputType : uint8 {
    Accept,
    AcceptReleased,
    BackPressed,
    BackReleased,
    BackHeld,
    Action3Pressed,
    Action3Released,
    Action4Pressed,
    Action4Released,
    ShoulderLeftPressed,
    ShoulderLeftReleased,
    ShoulderLeftHeld,
    ShoulderRightPressed,
    ShoulderRightReleased,
    ShoulderRightHeld,
    TriggerLeftPressed,
    TriggerLeftReleased,
    TriggerRightPressed,
    TriggerRightReleased,
    Start,
    StartReleased,
    Select,
    SelectReleased,
    LeftStickHorizontal,
    LeftStickVertical,
    RightStickHorizontal,
    RightStickVertical,
    Taunt1,
    Taunt2,
    Taunt3,
    Taunt4,
    UIVertical,
    UIHorizontal,
    Count,
};

