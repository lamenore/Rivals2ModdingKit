#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyFloat.h"
#include "ArcLengthTableEntry.generated.h"

USTRUCT(BlueprintType)
struct FArcLengthTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat CurvePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat DistanceTraveled;
    
    RIVALS2_API FArcLengthTableEntry();
};

