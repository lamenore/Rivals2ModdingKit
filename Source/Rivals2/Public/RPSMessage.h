#pragma once
#include "CoreMinimal.h"
#include "SnapNetReliableMessage.h"
#include "RPSMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URPSMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    URPSMessage();

};

