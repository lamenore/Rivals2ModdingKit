#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EventAsset.generated.h"

class UEventWithAsset;

UCLASS(Abstract, Blueprintable)
class UEventAsset : public UObject {
    GENERATED_BODY()
public:
    UEventAsset();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnPredicted(UEventWithAsset* Event);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnFirstTriggered(UEventWithAsset* Event);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnConfirmed(UEventWithAsset* Event);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnCanceled(UEventWithAsset* Event);
    
};

