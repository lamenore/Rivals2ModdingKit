#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EventsGetTelemetryKeyResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FEventsGetTelemetryKeyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* KeyDetails;
    
    FEventsGetTelemetryKeyResponse();
};

