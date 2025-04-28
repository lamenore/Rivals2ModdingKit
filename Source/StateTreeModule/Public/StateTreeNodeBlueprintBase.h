#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStateTreeTransitionPriority.h"
#include "StateTreeEvent.h"
#include "StateTreeStateLink.h"
#include "StateTreeNodeBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class STATETREEMODULE_API UStateTreeNodeBlueprintBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CachedOwner;
    
public:
    UStateTreeNodeBlueprintBase();

    UFUNCTION(BlueprintCallable)
    void SendEvent(const FStateTreeEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransition(const FStateTreeStateLink& TargetState, const EStateTreeTransitionPriority Priority);
    
};

