#pragma once
#include "CoreMinimal.h"
#include "ERivalsLobbyMatchingState.generated.h"

UENUM(BlueprintType)
enum ERivalsLobbyMatchingState {
    RivalsLobbyMatchingState_None,
    RivalsLobbyMatchingState_Matchmaking,
    RivalsLobbyMatchingState_GetMatch,
    RivalsLobbyMatchingState_PollMatchUserData,
    RivalsLobbyMatchingState_JoiningMatch,
    RivalsMenuState_MAX = RivalsLobbyMatchingState_JoiningMatch UMETA(Hidden),
};

