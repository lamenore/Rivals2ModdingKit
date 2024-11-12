#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SnapNetRewoundDelegateDelegate.h"
#include "SnapNetRewindAsyncAction.generated.h"

class USnapNetEntityComponent;
class USnapNetRewindAsyncAction;

UCLASS(Blueprintable, MinimalAPI)
class USnapNetRewindAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetRewoundDelegate Rewound;
    
    USnapNetRewindAsyncAction();

    UFUNCTION(BlueprintCallable)
    static USnapNetRewindAsyncAction* RewindSimulationSubset(USnapNetEntityComponent* entityComponent, TArray<int32> entityIndicesToRewind);
    
    UFUNCTION(BlueprintCallable)
    static USnapNetRewindAsyncAction* RewindSimulation(USnapNetEntityComponent* entityComponent);
    
};

