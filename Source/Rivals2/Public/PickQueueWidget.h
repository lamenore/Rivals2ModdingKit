#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "RivalsPlayFabLobbyInfo.h"
#include "PickQueueWidget.generated.h"

class UImage;
class URivalsMenuButtonWidget;
class UTextBlock;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPickQueueWidget : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_StateSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_SinglesButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_DoublesButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_DoublesButton_WithFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_FFAButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_DualQueueButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_RegionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_LoadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_AlertTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_Loading;
    
public:
    UPickQueueWidget();

    UFUNCTION(BlueprintCallable)
    void OnQueuingFailed(const FString& QueueName);
    
    UFUNCTION(BlueprintCallable)
    void OnQueueSinglesPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnQueueFFAPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnQueueDoublesWithFriendPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnQueueDoublesPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingTicketCancelled();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchFound();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinMatchSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinMatchFail();
    
    UFUNCTION(BlueprintCallable)
    void OnEdgegapSessionJoined();
    
    UFUNCTION(BlueprintCallable)
    void OnDualQueuePressed();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeRegionsPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelQueuingSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelQueuingError();
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyCreated(const FRivalsPlayFabLobbyInfo LobbyInfo);
    
};

