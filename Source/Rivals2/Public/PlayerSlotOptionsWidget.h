#pragma once
#include "CoreMinimal.h"
#include "RivalsWidget.h"
#include "PlayerSlotOptionsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPlayerSlotOptionsWidget : public URivalsWidget {
    GENERATED_BODY()
public:
    UPlayerSlotOptionsWidget();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAxis(const FName AxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAction(const FName ActionName);
    
};

