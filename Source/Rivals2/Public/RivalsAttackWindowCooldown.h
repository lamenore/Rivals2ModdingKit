#pragma once
#include "CoreMinimal.h"
#include "RivalsAttackWindowCooldown.generated.h"

USTRUCT(BlueprintType)
struct FRivalsAttackWindowCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CooldownStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CooldownDuration;
    
    RIVALS2_API FRivalsAttackWindowCooldown();
};

