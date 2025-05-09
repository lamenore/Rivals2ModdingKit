#pragma once
#include "CoreMinimal.h"
#include "ERPSChoiceType.generated.h"

UENUM(BlueprintType)
enum class ERPSChoiceType : uint8 {
    None,
    Rock,
    Paper,
    Scissors,
    Pass,
};

