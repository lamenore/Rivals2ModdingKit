#pragma once
#include "CoreMinimal.h"
#include "AIInputEvent.h"
#include "AIInputEventContainer.generated.h"

USTRUCT(BlueprintType)
struct FAIInputEventContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIInputEvent> InputEvents;
    
    RIVALS2_API FAIInputEventContainer();
};

