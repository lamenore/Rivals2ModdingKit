#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetReliableMessage.h"
#include "RPSChoiceMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URPSChoiceMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum RPSChoice;
    
    URPSChoiceMessage();

};

