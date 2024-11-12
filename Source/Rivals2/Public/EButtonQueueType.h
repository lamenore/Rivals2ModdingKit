#pragma once
#include "CoreMinimal.h"
#include "EButtonQueueType.generated.h"

UENUM(BlueprintType)
enum EButtonQueueType {
    Singles,
    Doubles,
    FFA,
    Ranked,
    All,
};

