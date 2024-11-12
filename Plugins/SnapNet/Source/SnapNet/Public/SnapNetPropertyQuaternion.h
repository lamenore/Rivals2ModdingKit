#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnapNetPropertyWithInterpolation.h"
#include "SnapNetPropertyQuaternion.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyQuaternion : public FSnapNetPropertyWithInterpolation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BitsPerAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Value;
    
public:
    FSnapNetPropertyQuaternion();
};

