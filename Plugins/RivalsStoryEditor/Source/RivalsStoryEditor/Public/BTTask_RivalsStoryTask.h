#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RivalsStoryTask.generated.h"

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API UBTTask_RivalsStoryTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_RivalsStoryTask();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString BP_GetRuntimeDescription() const;
    
};

