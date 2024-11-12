#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ClientBehavior.generated.h"

class ARivalsPlayerController;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UClientBehavior : public UUserWidget {
    GENERATED_BODY()
public:
    UClientBehavior();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartReleased(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStart(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSelectReleased(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSelect(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRightTriggerReleased(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRightTrigger(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRightStickVertical(ARivalsPlayerController* Controller, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRightStickHorizontal(ARivalsPlayerController* Controller, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRightShoulderReleased(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRightShoulder(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeftTriggerReleased(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeftTrigger(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeftStickVertical(ARivalsPlayerController* Controller, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeftStickHorizontal(ARivalsPlayerController* Controller, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeftShoulderReleased(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeftShoulder(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDPadUp(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDPadRight(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDPadLeft(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDPadDown(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAction4Released(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAction4(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAction3Released(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAction3(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAction2Released(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAction2(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAction1Released(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAction1(ARivalsPlayerController* Controller);
    
};

