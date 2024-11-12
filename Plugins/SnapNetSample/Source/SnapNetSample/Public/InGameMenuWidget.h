#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InGameMenuWidget.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SNAPNETSAMPLE_API UInGameMenuWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UInGameMenuWidget();

    UFUNCTION(BlueprintCallable)
    void ResumePlaying();
    
    UFUNCTION(BlueprintCallable)
    void LeaveMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetWidgetToFocusOnOpen();
    
};

