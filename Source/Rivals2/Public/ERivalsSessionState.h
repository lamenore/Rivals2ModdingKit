#pragma once
#include "CoreMinimal.h"
#include "ERivalsSessionState.generated.h"

UENUM(BlueprintType)
enum class ERivalsSessionState : uint8 {
    None,
    CharacterSelect,
    StageSelect,
    VersusScreen,
    Gameplay,
    Results,
    Count,
};

