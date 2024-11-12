#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsStoryPersistentStats.generated.h"

USTRUCT(BlueprintType)
struct FRivalsStoryPersistentStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 Damage;
    
    RIVALS2_API FRivalsStoryPersistentStats();
};

