#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerUnlinkNintendoSwitchDeviceIdResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUnlinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerUnlinkNintendoSwitchDeviceIdResult();
};

