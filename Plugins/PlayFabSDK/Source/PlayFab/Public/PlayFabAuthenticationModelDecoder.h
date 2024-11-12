#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AuthenticationAuthenticateCustomIdResult.h"
#include "AuthenticationEmptyResponse.h"
#include "AuthenticationGetEntityTokenResponse.h"
#include "AuthenticationValidateEntityTokenResponse.h"
#include "PlayFabAuthenticationModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabAuthenticationModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabAuthenticationModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FAuthenticationValidateEntityTokenResponse decodeValidateEntityTokenResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAuthenticationGetEntityTokenResponse decodeGetEntityTokenResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAuthenticationEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAuthenticationAuthenticateCustomIdResult decodeAuthenticateCustomIdResultResponse(UPlayFabJsonObject* Response);
    
};

