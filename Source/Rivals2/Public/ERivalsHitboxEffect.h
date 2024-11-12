#pragma once
#include "CoreMinimal.h"
#include "ERivalsHitboxEffect.generated.h"

UENUM(BlueprintType)
enum class ERivalsHitboxEffect : uint8 {
    None,
    Burn,
    BurnConsume,
    Poison,
    DoublePoison,
    UseStamina,
    ApplyStaminaTornado,
    Mark,
    Wrap,
    ForceWrap,
    TipperStun,
    AutoTipperOnly,
    Count,
};

