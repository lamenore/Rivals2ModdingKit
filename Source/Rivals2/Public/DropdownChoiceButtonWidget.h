#pragma once
#include "CoreMinimal.h"
#include "RivalsMenuButtonWidget.h"
#include "DropdownChoiceButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UDropdownChoiceButtonWidget : public URivalsMenuButtonWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChoiceClickedEvent, int32, ChoiceIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChoiceClickedEvent BP_OnChoiceClickedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoiceIndex;
    
public:
    UDropdownChoiceButtonWidget();

};

