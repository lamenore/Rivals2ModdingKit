#pragma once
#include "CoreMinimal.h"
#include "EInputDevice.generated.h"

UENUM(BlueprintType)
enum class EInputDevice : uint8 {
    AnyDevice,
    GcControllerInputDevice,
    KeyboardDevice,
    XInputInterface,
};

