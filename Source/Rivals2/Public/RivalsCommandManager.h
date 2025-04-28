#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "EDebugCameraMode.h"
#include "RivalsCommandManager.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsCommandManager : public UCheatManager {
    GENERATED_BODY()
public:
    URivalsCommandManager();

    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerVisibility(const int32 Slot);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleLastStockVisuals();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCharacterOverlayVisibility() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraDebugMode(EDebugCameraMode Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForcePingQosBeacons();
    
};

