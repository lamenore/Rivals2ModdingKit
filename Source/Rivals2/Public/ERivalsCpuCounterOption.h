#pragma once
#include "CoreMinimal.h"
#include "ERivalsCpuCounterOption.generated.h"

UENUM(BlueprintType)
enum class ERivalsCpuCounterOption : uint8 {
    None,
    Spotdodge,
    Airdodge,
    Shield,
    Grab,
    UpSpecial,
    DownSpecial,
    ForwardSpecial,
    NeutralSpecial,
    UpStrong,
    DownStrong,
    ForwardStrong,
    RollAway,
    RollIn,
    NeutralAir,
    ForwardAir,
    BackAir,
    DownAir,
    UpAir,
    Jab,
    ForwardTilt,
    DownTilt,
    UpTilt,
    ShortHop,
    FullHop,
    Jump,
};

