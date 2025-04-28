#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyString.h"
#include "SnapNetReliableMessage.h"
#include "StageSelectStateChangeMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UStageSelectStateChangeMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString StageNameString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsRandomStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum NewStageStatus;
    
    UStageSelectStateChangeMessage();

};

