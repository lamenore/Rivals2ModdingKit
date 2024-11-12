#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyFloat.h"
#include "SnapNetPropertyVector.h"
#include "RivalsPropertyCurvePointVector.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPropertyCurvePointVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat InVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector OutVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector ArriveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector LeaveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum InterpMode;
    
    RIVALSSTORYEDITOR_API FRivalsPropertyCurvePointVector();
};

