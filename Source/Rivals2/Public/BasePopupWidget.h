#pragma once
#include "CoreMinimal.h"
#include "ClientBehavior.h"
#include "EMenuSoundType.h"
#include "BasePopupWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UBasePopupWidget : public UClientBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSoundType BackSoundEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SelectOnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UWidget*> PreviousFocusWidgets;
    
public:
    UBasePopupWidget();

    UFUNCTION(BlueprintCallable)
    void ClosePopup();
    
};

