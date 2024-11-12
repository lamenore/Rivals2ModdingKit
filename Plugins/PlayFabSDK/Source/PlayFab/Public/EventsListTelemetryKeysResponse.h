#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EventsListTelemetryKeysResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FEventsListTelemetryKeysResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> KeyDetails;
    
    FEventsListTelemetryKeysResponse();
};

