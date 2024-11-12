#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerLinkNintendoSwitchDeviceIdResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerLinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerLinkNintendoSwitchDeviceIdResult();
};

