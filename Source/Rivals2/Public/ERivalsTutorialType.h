#pragma once
#include "CoreMinimal.h"
#include "ERivalsTutorialType.generated.h"

UENUM(BlueprintType)
enum class ERivalsTutorialType : uint8 {
    None,
    Movement,
    Offense,
    Defense,
};

