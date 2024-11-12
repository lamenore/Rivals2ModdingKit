#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GrabPartnerVectorParamData.generated.h"

USTRUCT(BlueprintType)
struct FGrabPartnerVectorParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetThisFrame;
    
    RIVALS2_API FGrabPartnerVectorParamData();
};

