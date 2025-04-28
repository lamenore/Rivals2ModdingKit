#pragma once
#include "CoreMinimal.h"
#include "StateTreeNodeBlueprintBase.h"
#include "StateTreeEvaluatorBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class STATETREEMODULE_API UStateTreeEvaluatorBlueprintBase : public UStateTreeNodeBlueprintBase {
    GENERATED_BODY()
public:
    UStateTreeEvaluatorBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTreeStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTreeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(const float DeltaTime);
    
};

