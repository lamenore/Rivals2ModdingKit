#pragma once
#include "CoreMinimal.h"
#include "EStateTreeRunStatus.h"
#include "StateTreeActiveStates.h"
#include "StateTreeNodeBlueprintBase.h"
#include "StateTreeTransitionResult.h"
#include "StateTreeTaskBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class STATETREEMODULE_API UStateTreeTaskBlueprintBase : public UStateTreeNodeBlueprintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldStateChangeOnReselect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldCallTickOnlyOnEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldCopyBoundPropertiesOnTick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldCopyBoundPropertiesOnExitState: 1;
    
public:
    UStateTreeTaskBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EStateTreeRunStatus ReceiveTick(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateCompleted(const EStateTreeRunStatus CompletionStatus, const FStateTreeActiveStates CompletedActiveStates);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveLatentTick(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveLatentEnterState(const FStateTreeTransitionResult& Transition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExitState(const FStateTreeTransitionResult& Transition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EStateTreeRunStatus ReceiveEnterState(const FStateTreeTransitionResult& Transition);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishTask(const bool bSucceeded);
    
};

