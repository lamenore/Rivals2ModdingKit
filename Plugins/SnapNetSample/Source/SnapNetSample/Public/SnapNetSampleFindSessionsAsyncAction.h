#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SnapNetSampleFindSessionsCompleteDelegateDelegate.h"
#include "SnapNetSampleFindSessionsAsyncAction.generated.h"

class UObject;
class USnapNetSampleFindSessionsAsyncAction;

UCLASS(Blueprintable, MinimalAPI)
class USnapNetSampleFindSessionsAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetSampleFindSessionsCompleteDelegate OnComplete;
    
    USnapNetSampleFindSessionsAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USnapNetSampleFindSessionsAsyncAction* FindSessions(UObject* WorldContextObject);
    
};

