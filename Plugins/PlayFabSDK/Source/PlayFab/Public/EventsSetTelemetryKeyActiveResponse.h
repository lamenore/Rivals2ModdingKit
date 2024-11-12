#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EventsSetTelemetryKeyActiveResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FEventsSetTelemetryKeyActiveResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* KeyDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasKeyUpdated;
    
    FEventsSetTelemetryKeyActiveResponse();
};

