#pragma once
#include "CoreMinimal.h"
#include "EDisplayFor.generated.h"

UENUM(BlueprintType)
enum class EDisplayFor : uint8 {
    Both,
    Keyboard,
    Gamepad,
};

