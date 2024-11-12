#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SnapNetSampleLoginCompleteDelegateDelegate.h"
#include "SnapNetSampleLoginAsyncAction.generated.h"

class UObject;
class USnapNetSampleLoginAsyncAction;

UCLASS(Blueprintable, MinimalAPI)
class USnapNetSampleLoginAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetSampleLoginCompleteDelegate OnComplete;
    
    USnapNetSampleLoginAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USnapNetSampleLoginAsyncAction* Login(UObject* WorldContextObject);
    
};

