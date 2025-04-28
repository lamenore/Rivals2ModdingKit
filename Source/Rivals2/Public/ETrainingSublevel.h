#pragma once
#include "CoreMinimal.h"
#include "ETrainingSublevel.generated.h"

UENUM()
enum class ETrainingSublevel : int32 {
    None,
    Training,
    Stage,
    Environment,
    Results,
};

