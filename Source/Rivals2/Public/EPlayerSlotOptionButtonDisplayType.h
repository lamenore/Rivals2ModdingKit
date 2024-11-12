#pragma once
#include "CoreMinimal.h"
#include "EPlayerSlotOptionButtonDisplayType.generated.h"

UENUM(BlueprintType)
enum class EPlayerSlotOptionButtonDisplayType : uint8 {
    Any,
    GamepadOnly,
    KeyboardOnly,
};

