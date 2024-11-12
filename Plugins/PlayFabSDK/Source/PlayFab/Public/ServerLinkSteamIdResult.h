#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerLinkSteamIdResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerLinkSteamIdResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerLinkSteamIdResult();
};

