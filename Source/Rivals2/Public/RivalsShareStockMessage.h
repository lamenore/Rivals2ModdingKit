#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEntityIndex.h"
#include "SnapNetReliableMessage.h"
#include "RivalsShareStockMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsShareStockMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex DeadCharacterEntityIndex;
    
    URivalsShareStockMessage();

};

