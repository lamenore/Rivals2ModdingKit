#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SnapNetPacketCodec.generated.h"

UCLASS(Abstract, Blueprintable)
class SNAPNET_API USnapNetPacketCodec : public UObject {
    GENERATED_BODY()
public:
    USnapNetPacketCodec();

};

