#pragma once
#include "CoreMinimal.h"
#include "SnapNetTransport.h"
#include "SnapNetNativeTransport.generated.h"

UCLASS(Abstract, Blueprintable)
class SNAPNET_API USnapNetNativeTransport : public USnapNetTransport {
    GENERATED_BODY()
public:
    USnapNetNativeTransport();

};

