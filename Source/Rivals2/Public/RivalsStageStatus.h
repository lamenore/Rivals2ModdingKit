#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyString.h"
#include "RivalsStageStatus.generated.h"

USTRUCT(BlueprintType)
struct FRivalsStageStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString StageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 PlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum StageState;
    
    RIVALS2_API FRivalsStageStatus();
};

