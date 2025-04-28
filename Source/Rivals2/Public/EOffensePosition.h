#pragma once
#include "CoreMinimal.h"
#include "EOffensePosition.generated.h"

UENUM(BlueprintType)
enum class EOffensePosition : uint8 {
    Front,
    Behind,
    Middle,
    Far,
};

