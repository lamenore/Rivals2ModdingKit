#pragma once
#include "CoreMinimal.h"
#include "BaseScreenWidget.h"
#include "MainMenuScreenWidget.generated.h"

class UMainMenuExtrasTab;
class UMainMenuHomeTab;
class UMainMenuLocalTab;
class UMainMenuOnlineFriendliesTab;
class UMainMenuOnlineTab;
class UMainMenuProgressionTab;
class UMainMenuStoreTab;
class UUserWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMainMenuScreenWidget : public UBaseScreenWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_TabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuHomeTab* BP_MainMenuHomeTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuOnlineTab* BP_MainMenuOnlineTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuStoreTab* BP_MainMenuStoreTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuOnlineFriendliesTab* BP_MainMenuOnlineFriendliesTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuLocalTab* BP_MainMenuLocalTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuExtrasTab* BP_MainMenuExtrasTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuProgressionTab* BP_MainMenuProgressionTab;
    
    UMainMenuScreenWidget();

    UFUNCTION(BlueprintCallable)
    void OpenProgressionTab(UUserWidget* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void OpenExtrasTab(UUserWidget* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void OnRefocusScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPressed();
    
    UFUNCTION(BlueprintCallable)
    void GoToSettingsHack();
    
    UFUNCTION(BlueprintCallable)
    void GoToHomeTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusSettingsHack();
    
};

