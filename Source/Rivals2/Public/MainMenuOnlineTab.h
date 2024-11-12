#pragma once
#include "CoreMinimal.h"
#include "MainMenuTabInterface.h"
#include "MainMenuOnlineTab.generated.h"

class UMainMenuButtonWidget;
class USpinnerPopupWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMainMenuOnlineTab : public UMainMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_ReconnectButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_RankedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_CasualButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_FriendlyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_BackButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpinnerPopupWidget* SpinnerRef;
    
public:
    UMainMenuOnlineTab();

    UFUNCTION(BlueprintCallable)
    void OnReconnectButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnRankedButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnFriendlyButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCasualButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonReleased();
    
};

