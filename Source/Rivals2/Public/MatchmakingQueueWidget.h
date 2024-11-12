#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "RivalsPlayFabLobbyInfo.h"
#include "MatchmakingQueueWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMatchmakingQueueWidget : public UBasePopupWidget {
    GENERATED_BODY()
public:
    UMatchmakingQueueWidget();

    UFUNCTION(BlueprintCallable)
    void OnQueueAllPressed();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnteringTraining();
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyCreated(const FRivalsPlayFabLobbyInfo LobbyInfo);
    
};

