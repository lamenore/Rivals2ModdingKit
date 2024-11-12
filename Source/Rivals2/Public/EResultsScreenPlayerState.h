#pragma once
#include "CoreMinimal.h"
#include "EResultsScreenPlayerState.generated.h"

UENUM(BlueprintType)
enum class EResultsScreenPlayerState : uint8 {
    Waiting,
    ViewingRanks,
    ViewingStats,
    Ready,
    NextRound,
    BackToMatchmaking,
    ForceExit,
};

