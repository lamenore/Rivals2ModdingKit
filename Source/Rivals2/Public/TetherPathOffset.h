#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyVector2D.h"
#include "TetherPathOffset.generated.h"

USTRUCT(BlueprintType)
struct FTetherPathOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector2D TetherPointOffset;
    
    RIVALS2_API FTetherPathOffset();
};

