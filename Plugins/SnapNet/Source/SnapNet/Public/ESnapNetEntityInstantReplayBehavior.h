#pragma once
#include "CoreMinimal.h"
#include "ESnapNetEntityInstantReplayBehavior.generated.h"

UENUM(BlueprintType)
enum class ESnapNetEntityInstantReplayBehavior : uint8 {
    Historical,
    Latest,
};

