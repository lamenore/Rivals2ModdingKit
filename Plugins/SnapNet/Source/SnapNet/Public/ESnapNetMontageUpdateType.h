#pragma once
#include "CoreMinimal.h"
#include "ESnapNetMontageUpdateType.generated.h"

UENUM(BlueprintType)
enum class ESnapNetMontageUpdateType : uint8 {
    Normal,
    ForceTimeSync,
};

