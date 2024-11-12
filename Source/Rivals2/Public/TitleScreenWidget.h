#pragma once
#include "CoreMinimal.h"
#include "BaseScreenWidget.h"
#include "TitleScreenWidget.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTitleScreenWidget : public UBaseScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* BP_NextScreen;
    
public:
    UTitleScreenWidget();

    UFUNCTION(BlueprintCallable)
    void SwapToMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayConstructAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeaveToMainMenu();
    
};

