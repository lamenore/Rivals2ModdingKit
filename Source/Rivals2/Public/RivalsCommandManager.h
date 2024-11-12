#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "RivalsCommandManager.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsCommandManager : public UCheatManager {
    GENERATED_BODY()
public:
    URivalsCommandManager();

    UFUNCTION(BlueprintCallable, Exec)
    void ForcePingQosBeacons();
    
};

