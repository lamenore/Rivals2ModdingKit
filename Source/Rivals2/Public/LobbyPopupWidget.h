#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "RivalsLobbyErrorType.h"
#include "RivalsPlayFabLobbyInfo.h"
#include "Templates/SubclassOf.h"
#include "LobbyPopupWidget.generated.h"

class UImage;
class ULobbyPlayerEntryWidget;
class UMenuButtonWidget;
class UScaleBox;
class UTextBlock;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API ULobbyPopupWidget : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_QueueLobbyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_RemoveServerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_JoinServerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_ChangeRegionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_ToggleSpectatingButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_LeaveLobbyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_CopyCodeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_ShowCodeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_LobbyCodeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_LoadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_AlertTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CurrentPlayerCountTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_MaxPlayerCountTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_LobbyTitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_Loading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_LobbyMemberBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_SpectatorLobbyNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULobbyPlayerEntryWidget> WBP_LobbyPlayerEntryWidget;
    
public:
    ULobbyPopupWidget();

    UFUNCTION(BlueprintCallable)
    void SyncLobbyUIStateWithInfo(const FRivalsPlayFabLobbyInfo LobbyInfo);
    
    UFUNCTION(BlueprintCallable)
    void SyncLobbyUIState();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleSpectatingPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnShowLobbyCodePressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRemoveServerPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRegionChangePressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnQueueLobbyPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnQueueLobbyDoublesPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyCodeCopyPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveLobbyPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinServerPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinMatchSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinMatchStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinMatchFail();
    
    UFUNCTION(BlueprintCallable)
    void OnInviteFriendsPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleUpdateLobbyFailure(TEnumAsByte<RivalsLobbyErrorType> ErrorType);
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyConnectionLost();
    
};

