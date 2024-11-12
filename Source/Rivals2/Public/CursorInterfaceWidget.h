#pragma once
#include "CoreMinimal.h"
#include "RivalsWidget.h"
#include "CursorInterfaceWidget.generated.h"

class UPanelWidget;
class URivalsCursorWidget;
class URivalsPuckWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCursorInterfaceWidget : public URivalsWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, URivalsCursorWidget*> CursorWidgetByPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, URivalsPuckWidget*> PuckWidgetByPlayerIndex;
    
public:
    UCursorInterfaceWidget();

    UFUNCTION(BlueprintCallable)
    bool RetrievePuck(const int32& RetrieverPlayerSlot, const int32& PuckPlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void PlacePuckAtWidgetGeo(const int32& PlacerPlayerSlot, UPanelWidget* InWidgetGeometry, UWidget* InCharacterButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickupPuck(const int32& CursorPlayerSlot, const int32& PuckPlayerSlot, UWidget* Button);
    
    UFUNCTION(BlueprintCallable)
    bool IsPuckPlaced(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPuckForCPU(const int32& PuckPlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerHoldingPuck(const int32& CursorPlayerSlot, int32& HeldPuckPlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPuckPlayerSlotFromCursorPlayerSlot(const int32& CursorPlayerSlot, const bool ReturnCursorSlotIfNoPuck);
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateAllCursors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EnsureHeldPuckIsValid(const int32& CursorPlayerSlot, const int32& PuckPlayerSlot);
    
};

