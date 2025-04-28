#pragma once
#include "CoreMinimal.h"
#include "RivalsLobbyErrorType.generated.h"

UENUM(BlueprintType)
enum RivalsLobbyErrorType {
    GeneralError,
    SessionDoesNotExistError,
    AlreadyInAnotherLobby,
    YouAreNotTheLobbyOwner,
    UpdateInProgress,
};

