#pragma once
#include "CoreMinimal.h"
#include "ERivalsArcadeRewardType.generated.h"

UENUM()
enum class ERivalsArcadeRewardType : int32 {
    ITEM_GUID,
    PROGRESSION_XP,
    EVENT_XP,
    BOTH_XP,
};

