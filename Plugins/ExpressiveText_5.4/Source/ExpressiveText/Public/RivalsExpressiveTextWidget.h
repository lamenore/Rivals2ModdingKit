#pragma once
#include "CoreMinimal.h"
#include "ExpressiveTextWidget.h"
#include "RivalsExpressiveTextWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class EXPRESSIVETEXT_API URivalsExpressiveTextWidget : public UExpressiveTextWidget {
    GENERATED_BODY()
public:
    URivalsExpressiveTextWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateText(const FText& InText);
    
};

