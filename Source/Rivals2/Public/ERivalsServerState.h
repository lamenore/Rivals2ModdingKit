#pragma once
#include "CoreMinimal.h"
#include "ERivalsServerState.generated.h"

UENUM(BlueprintType)
enum class ERivalsServerState : uint8 {
    None,
    Startup,
    WaitingForMatch,
    WaitingForPlayers,
    HostingMatch,
    EndingMatch,
    Count,
};

