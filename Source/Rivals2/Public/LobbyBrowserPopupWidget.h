#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "BasePopupWidget.h"
#include "RivalsPlayFabLobbyInfo.h"
#include "RivalsPlayFabOssSessionInfo.h"
#include "Templates/SubclassOf.h"
#include "LobbyBrowserPopupWidget.generated.h"

class UCanvasPanel;
class ULobbyEntryWidget;
class URivalsMenuButtonWidget;
class UTextBlock;
class UVerticalBox;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API ULobbyBrowserPopupWidget : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_RefreshLobbyListLobbyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_LobbyEntryContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_LoadingContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_SpinnerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_RefreshingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULobbyEntryWidget> WBP_LobbyEntry;
    
public:
    ULobbyBrowserPopupWidget();

    UFUNCTION(BlueprintCallable)
    void RefreshLobbyList();
    
    UFUNCTION(BlueprintCallable)
    void OnSessionsFound(const TArray<FRivalsPlayFabOssSessionInfo>& SessionList);
    
private:
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigateUpFromBottomBar(EUINavigation NavigationDirection);
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigateDownFromTopBar(EUINavigation NavigationDirection);
    
public:
    UFUNCTION(BlueprintCallable)
    void JoinLobbyViaCode();
    
    UFUNCTION(BlueprintCallable)
    void HideSpinnerNoError();
    
    UFUNCTION(BlueprintCallable)
    void HideSpinner(const FName ErrorTypeName);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLobbyCreated(const FRivalsPlayFabLobbyInfo LobbyInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleJoinLobbyWithInfo(const FRivalsPlayFabLobbyInfo LobbyInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void CreatePublicLobby();
    
    UFUNCTION(BlueprintCallable)
    void CreatePrivateLobby();
    
};

