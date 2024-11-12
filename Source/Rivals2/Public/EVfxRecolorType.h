#pragma once
#include "CoreMinimal.h"
#include "EVfxRecolorType.generated.h"

UENUM(BlueprintType)
enum class EVfxRecolorType : uint8 {
    None,
    PlayerColor,
    PlayerColorDark,
    PlayerColorLight,
    Count,
};

