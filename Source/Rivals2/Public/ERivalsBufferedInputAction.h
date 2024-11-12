#pragma once
#include "CoreMinimal.h"
#include "ERivalsBufferedInputAction.generated.h"

UENUM(BlueprintType)
enum class ERivalsBufferedInputAction : uint8 {
    Left,
    Right,
    Down,
    Up,
    LeftHard,
    RightHard,
    DownHard,
    UpHard,
    RightStickLeft,
    RightStickRight,
    RightStickDown,
    RightStickUp,
    Attack,
    Grab,
    Jump,
    FullHop,
    ShortHop,
    Parry,
    Shield,
    Shield2,
    Shield3,
    Shield4,
    Special,
    Strong,
    Taunt1,
    Taunt2,
    Taunt3,
    Taunt4,
    Walk,
    Count,
};

