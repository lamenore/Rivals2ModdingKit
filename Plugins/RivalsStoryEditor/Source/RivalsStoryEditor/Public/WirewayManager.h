#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WirewayManager.generated.h"

UCLASS(Blueprintable)
class UWirewayManager : public UObject {
    GENERATED_BODY()
public:
    UWirewayManager();

    UFUNCTION(BlueprintCallable)
    void GameplayTick();
    
};

