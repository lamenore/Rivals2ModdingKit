#pragma once
#include "CoreMinimal.h"
#include "ERivalsReplayAutoSaveSetting.generated.h"

UENUM(BlueprintType)
enum class ERivalsReplayAutoSaveSetting : uint8 {
    Off,
    LocalOnly,
    OnlineOnly,
    All,
};

