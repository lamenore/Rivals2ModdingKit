#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EDisplayedCurrencyType.h"
#include "TopBarCurrencyDisplayer.generated.h"

class UCanvasPanel;
class URivalsButtonWidget;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTopBarCurrencyDisplayer : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 CurrencyDigits;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PreviewCurrencyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisplayedCurrencyType DisplayedCurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_Zeroes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CurrencyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_IconSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_BonusCoinPanel;
    
    UTopBarCurrencyDisplayer();

};

