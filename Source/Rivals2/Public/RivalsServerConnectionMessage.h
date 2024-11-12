#pragma once
#include "CoreMinimal.h"
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
    
    URivalsServerConnectionMessage();

};

