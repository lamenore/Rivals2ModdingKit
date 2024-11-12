#pragma once
#include "CoreMinimal.h"
#include "EForsburnCloneMode.generated.h"

UENUM(BlueprintType)
enum class EForsburnCloneMode : uint8 {
    Active,
    Passive,
    SuperClone,
    Destroyed,
};

