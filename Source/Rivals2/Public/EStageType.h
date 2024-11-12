#pragma once
#include "CoreMinimal.h"
#include "EStageType.generated.h"

UENUM()
enum class EStageType : int32 {
    None,
    Story,
    Casual,
    CounterPick,
    Starter,
    TargetTest,
    Development,
    Training,
};

