#pragma once
#include "CoreMinimal.h"
#include "ERivalsPlayFabLobbyOwnerMigrationPolicy.generated.h"

UENUM(BlueprintType)
enum class ERivalsPlayFabLobbyOwnerMigrationPolicy : uint8 {
    None,
    Automatic,
    Manual,
    Server,
};

