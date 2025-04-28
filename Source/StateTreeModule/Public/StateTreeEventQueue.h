#pragma once
#include "CoreMinimal.h"
#include "StateTreeEvent.h"
#include "StateTreeEventQueue.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeEventQueue {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeEvent> Events;
    
public:
    FStateTreeEventQueue();
};

