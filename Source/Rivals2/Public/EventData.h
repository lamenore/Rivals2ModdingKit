#pragma once
#include "CoreMinimal.h"
#include "OnDynamicEventDelegate.h"
#include "EventData.generated.h"

USTRUCT(BlueprintType)
struct FEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOnDynamicEvent> DynamicCallbacks;
    
    RIVALS2_API FEventData();
};

