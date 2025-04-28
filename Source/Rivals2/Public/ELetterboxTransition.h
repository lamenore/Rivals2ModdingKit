#pragma once
#include "CoreMinimal.h"
#include "ELetterboxTransition.generated.h"

UENUM(BlueprintType)
enum class ELetterboxTransition : uint8 {
    Open,
    Close,
    OpenToFocus,
    CloseToFocus,
    CloseFromFocus,
};

