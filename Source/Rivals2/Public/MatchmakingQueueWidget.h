#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "RivalsPlayFabLobbyInfo.h"
#include "MatchmakingQueueWidget.generated.h"

class UMenuButtonWidget;
class USpinnerPopupWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMatchmakingQueueWidget : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_RegionPreferencesDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_BackDisplayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpinnerPopupWidget* SpinnerPopupWidget;
    
public:
    UMatchmakingQueueWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTicketErrorWithQueue(const FString& InQueue);
    
    UFUNCTION(BlueprintCallable)
    void OnTicketErrorNoParams();
    
    UFUNCTION(BlueprintCallable)
    void OnRegionPreferencesButtonReleased(const int32 UserIndex);
    
public:
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

