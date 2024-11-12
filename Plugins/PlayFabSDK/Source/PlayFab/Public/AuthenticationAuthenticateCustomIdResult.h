#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AuthenticationAuthenticateCustomIdResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAuthenticationAuthenticateCustomIdResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* EntityToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NewlyCreated;
    
    FAuthenticationAuthenticateCustomIdResult();
};

