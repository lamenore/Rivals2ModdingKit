#pragma once
#include "CoreMinimal.h"
#include "MainMenuTabInterface.h"
#include "RivalsPlayFabLobbyInfo.h"
#include "RivalsPlayFabOssSessionInfo.h"
#include "MainMenuOnlineFriendliesTab.generated.h"

class UMainMenuButtonWidget;
class USpinnerPopupWidget;
class UTextInputPopup;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMainMenuOnlineFriendliesTab : public UMainMenuTabInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_CreatePublicButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_CreatePrivateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_JoinPublicButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_JoinPrivateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_CreatePublicWorkshopButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_CreatePrivateWorkshopButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_JoinPublicWorkshopButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_JoinPrivateWorkshopButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextInputPopup* TextInputPopupWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpinnerPopupWidget* SpinnerPopupWidget;
    
public:
    UMainMenuOnlineFriendliesTab();

    UFUNCTION(BlueprintCallable)
    void OnJoinPublicWorkshopButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinPublicButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinPrivateWorkshopButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinPrivateButtonPressed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnJoinLobbyFailed(const FName LobbyInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedLobby(const FRivalsPlayFabLobbyInfo LobbyInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnFindLobbiesSuccess(const TArray<FRivalsPlayFabOssSessionInfo>& SessionList);
    
    UFUNCTION(BlueprintCallable)
    void OnFindLobbiesFailed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCreatePublicWorkshopButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCreatePublicButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCreatePrivateWorkshopButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCreatePrivateButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonReleased();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLobbyCreated(const FRivalsPlayFabLobbyInfo LobbyInfo);
    
};

