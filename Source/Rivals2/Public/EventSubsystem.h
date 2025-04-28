#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventData.h"
#include "OnDynamicEventDelegate.h"
#include "EventSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class UEventSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEventData> Events;
    
public:
    UEventSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnsubscribeAllListenersOfType(UObject* Listener);
    
    UFUNCTION(BlueprintCallable)
    void UnsubscribeAllListenersOfEventType(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void Unsubscribe(FName Name, FOnDynamicEvent Callback);
    
    UFUNCTION(BlueprintCallable)
    void Subscribe(FName Name, FOnDynamicEvent Callback);
    
    UFUNCTION(BlueprintCallable)
    void Broadcast(FName Name, UObject* Payload);
    
};

