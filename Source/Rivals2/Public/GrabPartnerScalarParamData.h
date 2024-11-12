#pragma once
#include "CoreMinimal.h"
#include "GrabPartnerScalarParamData.generated.h"

USTRUCT(BlueprintType)
struct FGrabPartnerScalarParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetThisFrame;
    
    RIVALS2_API FGrabPartnerScalarParamData();
};

