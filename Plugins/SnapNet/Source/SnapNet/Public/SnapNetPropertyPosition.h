#pragma once
#include "CoreMinimal.h"
#include "ESnapNetPositionEncodingSource.h"
#include "SnapNetPropertyVectorBase.h"
#include "SnapNetPropertyPosition.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyPosition : public FSnapNetPropertyVectorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapNetPositionEncodingSource EncodingSource;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SmallDeltaThreshold;
    
public:
    FSnapNetPropertyPosition();
};

