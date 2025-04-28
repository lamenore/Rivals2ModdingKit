#pragma once
#include "CoreMinimal.h"
#include "EDefenseTutorialStage.generated.h"

UENUM(BlueprintType)
enum class EDefenseTutorialStage : uint8 {
    ShieldIntro,
    ShieldAdvanced,
    Roll,
    AirDodge,
    ParryBurst,
    ParryProjectile,
    None,
};

