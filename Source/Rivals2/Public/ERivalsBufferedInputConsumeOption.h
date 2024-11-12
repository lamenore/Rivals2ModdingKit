#pragma once
#include "CoreMinimal.h"
#include "ERivalsBufferedInputConsumeOption.generated.h"

UENUM(BlueprintType)
enum class ERivalsBufferedInputConsumeOption : uint8 {
    Consume,
    Peek,
};

