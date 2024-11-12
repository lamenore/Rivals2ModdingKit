#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEntityIndex.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsHitEntityInfo.generated.h"

USTRUCT(BlueprintType)
struct FRivalsHitEntityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex EntityIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 RehitTimer;
    
    RIVALS2_API FRivalsHitEntityInfo();
};

