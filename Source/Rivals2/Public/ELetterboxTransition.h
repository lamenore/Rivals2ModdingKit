#pragma once
#include "CoreMinimal.h"
#include "ELetterboxTransition.generated.h"

UENUM(BlueprintType)
enum ELetterboxTransition {
    Open,
    Close,
    FocusOpen,
    FocusClose,
};

