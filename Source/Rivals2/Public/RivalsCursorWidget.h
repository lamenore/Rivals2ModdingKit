#pragma once
#include "CoreMinimal.h"
#include "RivalsWidget.h"
#include "RivalsCursorWidget.generated.h"

class ARivalsPlayerController;
class UCursorInterfaceWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URivalsCursorWidget : public URivalsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCursorInterfaceWidget* ParentCursorInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnerPlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PuckPlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCursorEnabled;
    
    URivalsCursorWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PuckRetrieved(const int32& PuckPlayerSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PuckPlaced();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEnabled(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDisabled(ARivalsPlayerController* Controller);
    
};

