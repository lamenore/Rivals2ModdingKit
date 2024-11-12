#pragma once
#include "CoreMinimal.h"
#include "RPSPlayerState.generated.h"

UENUM(BlueprintType)
enum RPSPlayerState {
    Choosing,
    ChosenWaiting,
    Won,
    Lost,
    Draw,
};

