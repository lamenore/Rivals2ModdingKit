#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EventsCreateTelemetryKeyResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FEventsCreateTelemetryKeyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* NewKeyDetails;
    
    FEventsCreateTelemetryKeyResponse();
};

