#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SnapNetTransport.generated.h"

UCLASS(Abstract, Blueprintable)
class SNAPNET_API USnapNetTransport : public UObject {
    GENERATED_BODY()
public:
    USnapNetTransport();

    UFUNCTION(BlueprintCallable)
    void SetupClientByUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeout(int32 TimeoutSeconds);
    
};

