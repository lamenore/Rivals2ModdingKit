#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ExText_ActionInterface.generated.h"

UINTERFACE(Blueprintable)
class UExText_ActionInterface : public UInterface {
    GENERATED_BODY()
};

class IExText_ActionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Run();
    
};

