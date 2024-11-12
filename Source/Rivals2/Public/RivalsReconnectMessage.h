#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetReliableMessage.h"
#include "RivalsReconnectMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsReconnectMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 ReconnectingPlayerSlot;
    
    URivalsReconnectMessage();

};

