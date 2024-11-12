#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EDisplayFor.h"
#include "RivalsWidget.h"
#include "UIButtonDisplayer.generated.h"

class ARivalsPlayerController;
class UImage;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UUIButtonDisplayer : public URivalsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisplayFor DisplayFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldListenForInputChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_InputButtonSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_InputDisplayGamepadButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_InputDisplayKeyCapButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_InputDisplayKeyCapTextBlock;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerController* CurrentPlayerController;
    
public:
    UUIButtonDisplayer();

    UFUNCTION(BlueprintCallable)
    void DisplayNothing();
    
    UFUNCTION(BlueprintCallable)
    void DisplayKey(const FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void DisplayIconForAction(const FName ActionName, ARivalsPlayerController* PlayerController, const int32 BindingIndex);
    
};

