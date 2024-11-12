#pragma once
#include "CoreMinimal.h"
#include "ERivalsPlayFabLobbyAccessPolicy.generated.h"

UENUM(BlueprintType)
enum ERivalsPlayFabLobbyAccessPolicy {
    Public,
    Friends,
    Private,
};

