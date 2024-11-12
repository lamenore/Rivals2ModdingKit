#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyFloat.h"
#include "SnapNetPropertyQuaternion.h"
#include "RivalsPropertyCurvePointQuat.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPropertyCurvePointQuat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat InVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyQuaternion OutVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyQuaternion ArriveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyQuaternion LeaveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum InterpMode;
    
    RIVALSSTORYEDITOR_API FRivalsPropertyCurvePointQuat();
};

