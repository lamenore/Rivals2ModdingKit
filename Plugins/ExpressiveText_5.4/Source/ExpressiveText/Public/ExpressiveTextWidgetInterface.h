#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ExpressiveTextSelector.h"
#include "ExpressiveTextWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class UExpressiveTextWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IExpressiveTextWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FExpressiveTextSelector& Text);
    
};

