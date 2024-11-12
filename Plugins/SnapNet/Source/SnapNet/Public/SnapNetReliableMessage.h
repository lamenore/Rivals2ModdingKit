#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SnapNetReliableMessage.generated.h"

UCLASS(Abstract, Blueprintable)
class SNAPNET_API USnapNetReliableMessage : public UObject {
    GENERATED_BODY()
public:
    USnapNetReliableMessage();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnReceivedFromServer(int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnReceivedFromClient(int32 PlayerIndex);
    
};

