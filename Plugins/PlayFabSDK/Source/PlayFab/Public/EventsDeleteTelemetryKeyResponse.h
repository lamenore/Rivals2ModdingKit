#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EventsDeleteTelemetryKeyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEventsDeleteTelemetryKeyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasKeyDeleted;
    
    FEventsDeleteTelemetryKeyResponse();
};

