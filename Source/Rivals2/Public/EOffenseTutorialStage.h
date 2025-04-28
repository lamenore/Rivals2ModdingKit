#pragma once
#include "CoreMinimal.h"
#include "EOffenseTutorialStage.generated.h"

UENUM(BlueprintType)
enum class EOffenseTutorialStage : uint8 {
    Jab,
    DashAttack,
    ForwardTilt,
    UpTilt,
    DownTilt,
    ForwardStrong,
    UpStrong,
    DownStrong,
    NeutralAir,
    ForwardAir,
    BackAir,
    UpAir,
    DownAir,
    NeutralSpecial,
    ForwardSpecial,
    UpSpecial,
    DownSpecial,
    None,
};

