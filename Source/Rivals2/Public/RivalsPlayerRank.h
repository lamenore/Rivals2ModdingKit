#pragma once
#include "CoreMinimal.h"
#include "RivalsPlayerRank.generated.h"

class ARivalsPlayerEntity;

USTRUCT(BlueprintType)
struct FRivalsPlayerRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerEntity* PlayerEntity;
    
    RIVALS2_API FRivalsPlayerRank();
};

