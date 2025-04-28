#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEntityIndex.h"
#include "SnapNetPropertyInt32.h"
#include "EtalusFrozenShieldHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FEtalusFrozenShieldHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex HitRivalEntityIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 HitShieldTimer;
    
    ETALUS_API FEtalusFrozenShieldHitInfo();
};

