#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VirtualCursor.generated.h"

class APlayerController;
class UWidget;

UCLASS(Blueprintable)
class VIRTUALCURSOR_API UVirtualCursor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVirtualCursor();

    UFUNCTION(BlueprintCallable)
    static void SetCursorToCenterScreen(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void SetCursorToCenterOfWidget(APlayerController* PlayerController, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOverInteractableWidget(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetCursorPosition(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void Enable(APlayerController* PlayerController, bool bUseLeftStick);
    
    UFUNCTION(BlueprintCallable)
    static void Disable(APlayerController* PlayerController);
    
};

