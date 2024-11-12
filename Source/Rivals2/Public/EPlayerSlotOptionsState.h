#pragma once
#include "CoreMinimal.h"
#include "EPlayerSlotOptionsState.generated.h"

UENUM(BlueprintType)
enum class EPlayerSlotOptionsState : uint8 {
    None,
    Rebinding,
    Sliding,
};

