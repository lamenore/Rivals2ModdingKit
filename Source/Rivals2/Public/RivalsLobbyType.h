#pragma once
#include "CoreMinimal.h"
#include "RivalsLobbyType.generated.h"

UENUM(BlueprintType)
enum RivalsLobbyType {
    RivalsLobbyType_Undefined,
    RivalsLobbyType_Default,
    RivalsLobbyType_DoublesWithFriend,
    RivalsLobbyType_MIN = RivalsLobbyType_Undefined,
    RivalsLobbyType_MAX = RivalsLobbyType_DoublesWithFriend UMETA(Hidden),
};

