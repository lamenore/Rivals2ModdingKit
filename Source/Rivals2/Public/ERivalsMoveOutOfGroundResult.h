#pragma once
#include "CoreMinimal.h"
#include "ERivalsMoveOutOfGroundResult.generated.h"

UENUM(BlueprintType)
enum class ERivalsMoveOutOfGroundResult : uint8 {
    SuccessfulMove,
    FailedMove,
    AlreadyOutOfGround,
};

