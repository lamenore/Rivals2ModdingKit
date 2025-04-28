#pragma once
#include "CoreMinimal.h"
#include "EReplayMatchType.generated.h"

UENUM(BlueprintType)
enum class EReplayMatchType : uint8 {
    None,
    Local,
    Online,
    Ranked,
};

