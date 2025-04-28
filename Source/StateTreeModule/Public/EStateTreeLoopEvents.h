#pragma once
#include "CoreMinimal.h"
#include "EStateTreeLoopEvents.generated.h"

UENUM(BlueprintType)
enum class EStateTreeLoopEvents : uint8 {
    Next,
    Break,
};

