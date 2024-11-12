#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SnapNetCustomInput.generated.h"

class APlayerController;

UCLASS(Abstract, Blueprintable)
class SNAPNET_API USnapNetCustomInput : public UObject {
    GENERATED_BODY()
public:
    USnapNetCustomInput();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintPopulate(APlayerController* LocalPlayerController);
    
};

