#pragma once
#include "CoreMinimal.h"
#include "EReplaySettingsType.generated.h"

UENUM()
enum class EReplaySettingsType : int32 {
    String,
    Number,
    Bool,
    IntPoint,
    Button,
};

