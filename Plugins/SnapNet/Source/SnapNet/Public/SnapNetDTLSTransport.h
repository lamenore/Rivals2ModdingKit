#pragma once
#include "CoreMinimal.h"
#include "SnapNetNativeTransport.h"
#include "SnapNetDTLSTransport.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetDTLSTransport : public USnapNetNativeTransport {
    GENERATED_BODY()
public:
    USnapNetDTLSTransport();

    UFUNCTION(BlueprintCallable)
    void SetSessionId(const FString& SessionId);
    
    UFUNCTION(BlueprintCallable)
    void SetServerPort(int32 Port);
    
};

