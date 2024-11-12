#pragma once
#include "CoreMinimal.h"
#include "ERivalsServerType.generated.h"

UENUM(BlueprintType)
enum class ERivalsServerType : uint8 {
    None,
    PlayFab,
    Edgegap,
    Count,
};

