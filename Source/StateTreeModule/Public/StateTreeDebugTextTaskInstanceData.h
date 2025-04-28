#pragma once
#include "CoreMinimal.h"
#include "StateTreeDebugTextTaskInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeDebugTextTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ReferenceActor;
    
    FStateTreeDebugTextTaskInstanceData();
};

