#pragma once
#include "CoreMinimal.h"
#include "EDisplayType.generated.h"

UENUM(BlueprintType)
enum class EDisplayType : uint8 {
    Both,
    Keyboard,
    Gamepad,
};

