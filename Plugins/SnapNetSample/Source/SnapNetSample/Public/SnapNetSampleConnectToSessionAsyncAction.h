#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SnapNetSampleConnectToSessionCompleteDelegateDelegate.h"
#include "SnapNetSampleConnectToSessionAsyncAction.generated.h"

class UObject;
class USnapNetSampleConnectToSessionAsyncAction;
class USnapNetSampleSessionListItem;

UCLASS(Blueprintable, MinimalAPI)
class USnapNetSampleConnectToSessionAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetSampleConnectToSessionCompleteDelegate OnComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USnapNetSampleSessionListItem* SessionListItem;
    
    USnapNetSampleConnectToSessionAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USnapNetSampleConnectToSessionAsyncAction* ConnectToSession(USnapNetSampleSessionListItem* NewSessionListItem, UObject* WorldContextObject);
    
};

