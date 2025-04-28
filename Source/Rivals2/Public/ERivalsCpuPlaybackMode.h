#pragma once
#include "CoreMinimal.h"
#include "ERivalsCpuPlaybackMode.generated.h"

UENUM(BlueprintType)
enum class ERivalsCpuPlaybackMode : uint8 {
    Disabled,
    Control,
    Record,
    Playback,
};

