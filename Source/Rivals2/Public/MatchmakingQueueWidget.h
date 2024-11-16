#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "RivalsPlayFabLobbyInfo.h"
#include "MatchmakingQueueWidget.generated.h"

class USpinnerPopupWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMatchmakingQueueWidget : public UBasePopupWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpinnerPopupWidget* SpinnerPopupWidget;
    
public:
    UMatchmakingQueueWidget();

    UFUNCTION(BlueprintCallable)
    void OnQueueAllPressed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMatchFound();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinMatchSuccess();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsEnteringTraining();
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyCreated(const FRivalsPlayFabLobbyInfo LobbyInfo);
    
};

