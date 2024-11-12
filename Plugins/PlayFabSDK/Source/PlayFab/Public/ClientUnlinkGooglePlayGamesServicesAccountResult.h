#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkGooglePlayGamesServicesAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkGooglePlayGamesServicesAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkGooglePlayGamesServicesAccountResult();
};

