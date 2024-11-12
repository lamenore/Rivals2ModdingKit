#pragma once
#include "CoreMinimal.h"
#include "ERivalsHitpauseMovementType.generated.h"

UENUM(BlueprintType)
enum class ERivalsHitpauseMovementType : uint8 {
    None,
    Normal,
    ExtraHitpauseOnly,
    AttackerCustom1,
    AttackerCustom2,
};

