#pragma once
#include "CoreMinimal.h"
#include "EHudMode.generated.h"

UENUM(BlueprintType)
enum class EHudMode : uint8 {
    ShowAll,
    OverheadOnly,
    BottomOnly,
    None,
    Count,
};

