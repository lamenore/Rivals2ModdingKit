#pragma once
#include "CoreMinimal.h"
#include "EPlayerSlotOptionButtonDisplayAreaType.generated.h"

UENUM(BlueprintType)
enum class EPlayerSlotOptionButtonDisplayAreaType : uint8 {
    Any,
    TopBarOnly,
    CSSOnly,
};

