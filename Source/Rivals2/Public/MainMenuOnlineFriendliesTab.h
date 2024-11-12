#pragma once
#include "CoreMinimal.h"
#include "MainMenuTabInterface.h"
#include "RivalsPlayFabLobbyInfo.h"
#include "MainMenuOnlineFriendliesTab.generated.h"

class UMainMenuButtonWidget;

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
    UMainMenuButtonWidget* BP_BackButton;
    
public:
    UMainMenuOnlineFriendliesTab();

    UFUNCTION(BlueprintCallable)
    void OnJoinPublicButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinPrivateButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCreatePublicButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCreatePrivateButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonReleased();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLobbyCreated(const FRivalsPlayFabLobbyInfo LobbyInfo);
    
};

