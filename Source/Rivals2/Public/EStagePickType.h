#pragma once
#include "CoreMinimal.h"
#include "EStagePickType.generated.h"

UENUM()
enum class EStagePickType : int32 {
    None,
    Starter,
    CounterPick,
};

