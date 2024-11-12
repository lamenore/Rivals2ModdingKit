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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WinnerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LoserIndex;
    
    RIVALS2_API FStageBanInfo();
};

