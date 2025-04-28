#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "RivalsCursorManager.generated.h"

class UWidget;

UCLASS(Blueprintable)
class RIVALS2_API URivalsCursorManager : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    URivalsCursorManager();

    UFUNCTION(BlueprintCallable)
    void ToggleRivalsCursorDebug();
    
    UFUNCTION(BlueprintCallable)
    void ToggleRivalsAnalogDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetRivalsCursorToCenterScreen();
    
    UFUNCTION(BlueprintCallable)
    void SetRivalsCursorToCenterOfWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRivalsCursorValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRivalsCursorLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRivalsCursorHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRivalsCursorDebugActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRivalsAnalogDebugActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRivalsCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    void EnableRivalsCursor();
    
    UFUNCTION(BlueprintCallable)
    void DisableRivalsCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsGamepadRivalsCursorInputProcessor() const;
    
};

