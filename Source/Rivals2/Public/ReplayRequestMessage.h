#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetReliableMessage.h"
#include "ReplayRequestMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UReplayRequestMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bRequestManualSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum AutoSaveSetting;
    
    UReplayRequestMessage();

};

