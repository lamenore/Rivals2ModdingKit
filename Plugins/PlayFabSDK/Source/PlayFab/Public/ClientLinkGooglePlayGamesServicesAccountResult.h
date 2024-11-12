#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkGooglePlayGamesServicesAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkGooglePlayGamesServicesAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkGooglePlayGamesServicesAccountResult();
};

