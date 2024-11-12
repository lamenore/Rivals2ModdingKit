#pragma once
#include "CoreMinimal.h"
#include "ERivalsVfxHostLinkage.generated.h"

UENUM()
enum class ERivalsVfxHostLinkage : int8 {
    None,
    DestroyOnHostInterrupt,
    DestroyWhenNotAttacking,
    DestroyOnWindowTransition,
    DestroyOnStateChange,
    LoopUntilDeath,
    DetachOnStateChange,
};

