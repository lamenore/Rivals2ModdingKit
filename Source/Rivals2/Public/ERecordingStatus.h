#pragma once
#include "CoreMinimal.h"
#include "ERecordingStatus.generated.h"

UENUM(BlueprintType)
enum class ERecordingStatus : uint8 {
    Record,
    Playback,
};

