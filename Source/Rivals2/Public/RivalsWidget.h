#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERivalsPlayerInputType.h"
#include "RivalsWidget.generated.h"

class ARivalsPlayerController;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URivalsWidget : public UUserWidget {
    GENERATED_BODY()
public:
    URivalsWidget();

    UFUNCTION(BlueprintCallable)
    void OnPlayerInput(ARivalsPlayerController* Controller, const ERivalsPlayerInputType InputType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TriggerRight(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TriggerLeft(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Taunt4Released(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Taunt3Released(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Taunt2Released(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Taunt1Released(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShoulderRightReleased(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShoulderRightPressed(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShoulderRightHeld(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShoulderLeftReleased(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShoulderLeftPressed(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShoulderLeftHeld(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartReleased(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStart(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSelect(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRightStickHorizontal(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeftStickRight(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeftStickLeft(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeftStickHorizontal(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDeactivated(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBackPressed(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBackHeld(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBack(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActivated(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAccept(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Action4Pressed(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Action4(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Action3Pressed(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Action3(ARivalsPlayerController* Controller);
    
};

