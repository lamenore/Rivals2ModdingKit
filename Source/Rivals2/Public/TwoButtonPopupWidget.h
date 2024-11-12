#pragma once
#include "CoreMinimal.h"
#include "OneButtonPopupWidget.h"
#include "TwoButtonPopupWidget.generated.h"

class UMenuButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTwoButtonPopupWidget : public UOneButtonPopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_ConfirmButton;
    
public:
    UTwoButtonPopupWidget();

    UFUNCTION(BlueprintCallable)
    void OnConfirmPressed(const int32 UserIndex);
    
};

