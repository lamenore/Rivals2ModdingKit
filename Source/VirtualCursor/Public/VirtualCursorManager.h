#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "VirtualCursorManager.generated.h"

class UWidget;

UCLASS(Blueprintable)
class VIRTUALCURSOR_API UVirtualCursorManager : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UVirtualCursorManager();

    UFUNCTION(BlueprintCallable)
    void ToggleCursorDebug();
    
    UFUNCTION(BlueprintCallable)
    void ToggleAnalogDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetCursorToCenterScreen();
    
    UFUNCTION(BlueprintCallable)
    void SetCursorToCenterOfWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorOverInteractableWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorDebugActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnalogDebugActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    void EnableAnalogCursor(bool bUseLeftStick);
    
    UFUNCTION(BlueprintCallable)
    void DisableAnalogCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsGamepadCursorInputProcessor() const;
    
};

