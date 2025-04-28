#pragma once
#include "CoreMinimal.h"
#include "BaseScreenWidget.h"
#include "RivalsPlayFabLobbyInfo.h"
#include "MainMenuScreenWidget.generated.h"

class UMainMenuExtrasTab;
class UMainMenuHomeTab;
class UMainMenuLocalTab;
class UMainMenuOnlineFriendliesTab;
class UMainMenuOnlineTab;
class UMainMenuProgressionTab;
class UMainMenuRankedLeaderboardTab;
class UMainMenuReplayTab;
class UMainMenuStoreTab;
class UMainMenuTrialsSubTab;
class UMainMenuTutorialsSubTab;
class UMainMenuTutorialsTab;
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
    UMainMenuTutorialsTab* BP_MainMenuTutorialsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuTutorialsSubTab* BP_MainMenuTutorialsSubTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuTrialsSubTab* BP_MainMenuTrialsSubTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuExtrasTab* BP_MainMenuExtrasTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuReplayTab* BP_MainMenuReplayTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuProgressionTab* BP_MainMenuProgressionTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuRankedLeaderboardTab* BP_MainMenuRankedLeaderboardTab;
    
    UMainMenuScreenWidget();

    UFUNCTION(BlueprintCallable)
    void OpenTrialsSubTab(UUserWidget* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void OpenProgressionTab(UUserWidget* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void OpenExtrasTab(UUserWidget* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialsPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnRefocusScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPressed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnJoinLobbyFailed(const FName ErrorTypeName);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedLobby(const FRivalsPlayFabLobbyInfo LobbyInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void GoToSettingsHack();
    
    UFUNCTION(BlueprintCallable)
    void GoToHomeTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusSettingsHack();
    
};

