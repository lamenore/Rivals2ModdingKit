#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyString.h"
#include "SnapNetReliableMessage.h"
#include "RivalsLoadGameplayMapMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsLoadGameplayMapMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString StageSkinName;
    
    URivalsLoadGameplayMapMessage();

};

