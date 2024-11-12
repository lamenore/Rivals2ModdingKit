#pragma once
#include "CoreMinimal.h"
#include "ERivalsAIState.generated.h"

UENUM(BlueprintType)
enum ERivalsAIState {
    Aggressive,
    Passive,
    Recovering,
    Committed,
};

