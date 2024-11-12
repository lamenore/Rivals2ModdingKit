#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "Templates/SubclassOf.h"
#include "DropdownPopup.generated.h"

class URivalsMenuButtonWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UDropdownPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ChoiceContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsMenuButtonWidget> WBP_DropDownChoiceButton;
    
public:
    UDropdownPopup();

protected:
    UFUNCTION(BlueprintCallable)
    void OnChoiceClicked(int32 ChoiceIndex);
    
};

