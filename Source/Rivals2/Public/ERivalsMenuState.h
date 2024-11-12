#pragma once
#include "CoreMinimal.h"
#include "ERivalsMenuState.generated.h"

UENUM(BlueprintType)
enum class ERivalsMenuState : uint8 {
    None,
    MainMenu,
    CharacterSelect,
    StageSelect,
    VersusScreen,
    Gameplay,
    Results,
    CharacterDataMenu,
    StoryMenu,
    TitleScreen,
    Count,
    RivalsMenuState_MAX UMETA(Hidden),
};

