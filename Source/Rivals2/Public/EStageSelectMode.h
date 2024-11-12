#pragma once
#include "CoreMinimal.h"
#include "EStageSelectMode.generated.h"

UENUM(BlueprintType)
enum class EStageSelectMode : uint8 {
    Choosing,
    Striking,
    Banning,
};

