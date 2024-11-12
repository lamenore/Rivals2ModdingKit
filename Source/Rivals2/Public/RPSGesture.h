#pragma once
#include "CoreMinimal.h"
#include "RPSGesture.generated.h"

UENUM(BlueprintType)
enum class RPSGesture : uint8{
    Rock,
    Paper,
    Scissors,
    Pass,
    None,
};

