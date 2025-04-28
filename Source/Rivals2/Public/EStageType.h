#pragma once
#include "CoreMinimal.h"
#include "EStageType.generated.h"

UENUM()
enum class EStageType : int32 {
    None,
    Story,
    Casual,
    Competitive,
    TargetTest = 5,
    Development,
    Training,
    Random,
};

