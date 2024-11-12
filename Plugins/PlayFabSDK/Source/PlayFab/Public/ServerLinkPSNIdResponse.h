#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerLinkPSNIdResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerLinkPSNIdResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerLinkPSNIdResponse();
};

