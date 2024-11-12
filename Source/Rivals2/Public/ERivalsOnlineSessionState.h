#pragma once
#include "CoreMinimal.h"
#include "ERivalsOnlineSessionState.generated.h"

UENUM(BlueprintType)
enum class ERivalsOnlineSessionState : uint8 {
    None,
    Boot,
    MatchPrep,
    CharacterSelect,
    StageSelect,
    StageStrikeBanOne,
    StageStrikeBanTwo,
    Gameplay,
    Results,
    MatchEnd,
    Cancelled,
    Forfeited,
};

