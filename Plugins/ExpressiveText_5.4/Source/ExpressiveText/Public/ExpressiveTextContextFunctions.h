#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExpressiveTextContext.h"
#include "ExpressiveTextContextFunctions.generated.h"

class IExText_ActionInterface;
class UExText_ActionInterface;

UCLASS(Blueprintable)
class UExpressiveTextContextFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UExpressiveTextContextFunctions();

private:
    UFUNCTION(BlueprintCallable)
    static void AddAction(FExpressiveTextContext& Context, FName ActionName, TScriptInterface<IExText_ActionInterface> Action);
    
};

