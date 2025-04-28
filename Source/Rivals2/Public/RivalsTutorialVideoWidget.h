#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "RivalsTutorialVideoWidget.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URivalsTutorialVideoWidget : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* BP_NextScreen;
    
public:
    URivalsTutorialVideoWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void ReturnToTutorialScreen();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClosedPopup();
    
};

