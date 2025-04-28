#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyString.h"
#include "SnapNetReliableMessage.h"
#include "RivalsStageSelectScreenMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsStageSelectScreenMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString SelectedStageNameString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString SelectedStageSkinString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 SelectedStageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean ShouldReturnToCSS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean ShouldReturnToMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean ShouldAttemptStageStrikeBan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum StageStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean ShouldEnableStageStriking;
    
    URivalsStageSelectScreenMessage();

};

