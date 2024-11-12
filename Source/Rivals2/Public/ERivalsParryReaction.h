#pragma once
#include "CoreMinimal.h"
#include "ERivalsParryReaction.generated.h"

UENUM(BlueprintType)
enum class ERivalsParryReaction : uint8 {
    Stun,
    NoStun,
    Unparryable,
};

