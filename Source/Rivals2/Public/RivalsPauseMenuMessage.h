#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetReliableMessage.h"
#include "RivalsPauseMenuMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsPauseMenuMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean ShouldRestartMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean ShouldEndMatch;
    
    URivalsPauseMenuMessage();

};

