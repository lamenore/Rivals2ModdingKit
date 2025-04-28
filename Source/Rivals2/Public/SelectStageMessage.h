#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyString.h"
#include "SnapNetReliableMessage.h"
#include "SelectStageMessage.generated.h"

UCLASS(Blueprintable)
class USelectStageMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bSelectRandomStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString SelectedStageNameString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString SelectedStageSkinString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString SelectedStageFriendlyIdString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString SelectedStageSkinFriendlyIdString;
    
    USelectStageMessage();

};

