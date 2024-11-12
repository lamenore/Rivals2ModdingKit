#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnapNetPropertyWithInterpolation.h"
#include "SnapNetPropertyVectorBase.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyVectorBase : public FSnapNetPropertyWithInterpolation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Clamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
public:
    FSnapNetPropertyVectorBase();
};

