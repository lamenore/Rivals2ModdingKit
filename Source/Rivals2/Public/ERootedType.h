#pragma once
#include "CoreMinimal.h"
#include "ERootedType.generated.h"

UENUM(BlueprintType)
enum class ERootedType : uint8 {
    None,
    Rooted,
    ForceRooted,
};

