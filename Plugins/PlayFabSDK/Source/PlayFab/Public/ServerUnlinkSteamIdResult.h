#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerUnlinkSteamIdResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUnlinkSteamIdResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerUnlinkSteamIdResult();
};

