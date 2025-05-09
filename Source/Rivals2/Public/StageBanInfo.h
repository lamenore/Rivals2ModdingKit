#pragma once
#include "CoreMinimal.h"
#include "EStageSelectMode.h"
#include "StageBanInfo.generated.h"

USTRUCT(BlueprintType)
struct FStageBanInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageSelectMode CurrentMode;
    
    RIVALS2_API FStageBanInfo();
};

