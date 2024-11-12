#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AuthenticationEmptyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAuthenticationEmptyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAuthenticationEmptyResponse();
};

