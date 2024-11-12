#pragma once
#include "CoreMinimal.h"
#include "EDebuggingInfoMode.generated.h"

UENUM(BlueprintType)
enum class EDebuggingInfoMode : uint8 {
    None,
    FullInfo,
    LightInfo,
    Count,
};

