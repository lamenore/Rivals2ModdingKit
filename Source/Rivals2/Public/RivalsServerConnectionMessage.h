#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyString.h"
#include "SnapNetReliableMessage.h"
#include "RivalsServerConnectionMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsServerConnectionMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString PlayFabTitlePlayerAccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString PlayerMatchId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum ReplayAutoSaveSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString PlayerPreferredEvent;
    
    URivalsServerConnectionMessage();

};

