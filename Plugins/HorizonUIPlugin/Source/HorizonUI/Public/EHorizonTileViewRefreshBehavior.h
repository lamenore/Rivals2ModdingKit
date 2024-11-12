#pragma once
#include "CoreMinimal.h"
#include "EHorizonTileViewRefreshBehavior.generated.h"

UENUM(BlueprintType)
enum class EHorizonTileViewRefreshBehavior : uint8 {
    None,
    ScrollToTop,
    ScrollToBottom,
};

