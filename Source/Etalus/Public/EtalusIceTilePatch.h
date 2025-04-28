#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyFloat.h"
#include "SnapNetPropertyInt32.h"
#include "EtalusIceTilePatch.generated.h"

USTRUCT(BlueprintType)
struct FEtalusIceTilePatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 LifetimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat LeftEdgeXPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat RightEdgeXPos;
    
    ETALUS_API FEtalusIceTilePatch();
};

