#pragma once
#include "CoreMinimal.h"
#include "EPauseMenuTab.generated.h"

UENUM(BlueprintType)
enum class EPauseMenuTab : uint8 {
    Main,
    CPU,
    SaveState,
    Network,
    HUD,
};

