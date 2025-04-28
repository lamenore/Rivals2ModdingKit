#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "MainMenuTabInterface.h"
#include "MainMenuHomeTab.generated.h"

class UMainMenuAdButton;
class UMainMenuButtonWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMainMenuHomeTab : public UMainMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_LocalButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_OnlineButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_TutorialButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_TempStoreButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_ExtrasButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_SettingsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_ExitButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuAdButton* BP_PrimaryAd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuAdButton* BP_BottomLeftAd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuAdButton* BP_BottomRightAd;
    
    UMainMenuHomeTab();

    UFUNCTION(BlueprintCallable)
    void ShowRewardsCachedDuringTitleScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnStorePressed();
    
    UFUNCTION(BlueprintCallable)
    void OnSettingsButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryAdPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnOnlineButtonPressed();
    
private:
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigateToFirstVisibleLeftSideButton(EUINavigation Direction);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLocalButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnExtrasPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnExitPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCodeRedeemPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBottomRightAdPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBottomLeftAdPressed();
    
};

