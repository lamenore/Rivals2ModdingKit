#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyFloat.h"
#include "SnapNetPropertyString.h"
#include "RivalsSoundEventParameter.generated.h"

USTRUCT(BlueprintType)
struct FRivalsSoundEventParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat ParameterValue;
    
    RIVALS2_API FRivalsSoundEventParameter();
};

