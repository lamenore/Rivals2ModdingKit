#pragma once
#include "CoreMinimal.h"
#include "EAnimationToPlay.generated.h"

UENUM(BlueprintType)
enum class EAnimationToPlay : uint8 {
    Press,
    LeftTilt,
    RightTilt,
    UpTilt,
    DownTilt,
    LeftStrong,
    RightStrong,
    UpStrong,
    DownStrong,
    None,
};

