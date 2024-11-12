#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SnapNetClientConnectDelegateDelegate.h"
#include "SnapNetClientConnectAsyncAction.generated.h"

class USnapNetClient;
class USnapNetClientConnectAsyncAction;

UCLASS(Blueprintable, MinimalAPI)
class USnapNetClientConnectAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetClientConnectDelegate OnComplete;
    
    USnapNetClientConnectAsyncAction();

    UFUNCTION(BlueprintCallable)
    static USnapNetClientConnectAsyncAction* Connect(USnapNetClient* client);
    
};

