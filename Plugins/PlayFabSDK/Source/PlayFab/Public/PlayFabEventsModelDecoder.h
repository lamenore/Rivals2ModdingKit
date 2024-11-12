#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EventsCreateTelemetryKeyResponse.h"
#include "EventsDeleteTelemetryKeyResponse.h"
#include "EventsGetTelemetryKeyResponse.h"
#include "EventsListTelemetryKeysResponse.h"
#include "EventsSetTelemetryKeyActiveResponse.h"
#include "EventsWriteEventsResponse.h"
#include "PlayFabEventsModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabEventsModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabEventsModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FEventsWriteEventsResponse decodeWriteEventsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEventsSetTelemetryKeyActiveResponse decodeSetTelemetryKeyActiveResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEventsListTelemetryKeysResponse decodeListTelemetryKeysResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEventsGetTelemetryKeyResponse decodeGetTelemetryKeyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEventsDeleteTelemetryKeyResponse decodeDeleteTelemetryKeyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEventsCreateTelemetryKeyResponse decodeCreateTelemetryKeyResponseResponse(UPlayFabJsonObject* Response);
    
};

