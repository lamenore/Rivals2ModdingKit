#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InsightsInsightsGetDetailsResponse.h"
#include "InsightsInsightsGetLimitsResponse.h"
#include "InsightsInsightsGetOperationStatusResponse.h"
#include "InsightsInsightsGetPendingOperationsResponse.h"
#include "InsightsInsightsOperationResponse.h"
#include "PlayFabInsightsModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabInsightsModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabInsightsModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FInsightsInsightsOperationResponse decodeInsightsOperationResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FInsightsInsightsGetPendingOperationsResponse decodeInsightsGetPendingOperationsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FInsightsInsightsGetOperationStatusResponse decodeInsightsGetOperationStatusResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FInsightsInsightsGetLimitsResponse decodeInsightsGetLimitsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FInsightsInsightsGetDetailsResponse decodeInsightsGetDetailsResponseResponse(UPlayFabJsonObject* Response);
    
};

