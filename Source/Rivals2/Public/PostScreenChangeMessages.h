#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetReliableMessage.h"
#include "PostScreenChangeMessages.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UPostScreenChangeMessages : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum NewSessionState;
    
    UPostScreenChangeMessages();

};

