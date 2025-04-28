#pragma once
#include "CoreMinimal.h"
#include "ETutorialSoundType.generated.h"

UENUM(BlueprintType)
enum class ETutorialSoundType : uint8 {
    DialogueWrite,
    OrbyHover,
    OrbyAttack,
    OrbyCharge,
    SpikeExtend,
    BlockCharge,
    Laser,
    Projectile,
    TutorialStart,
    TutorialClear,
    TutorialError,
    Count,
    None,
};

