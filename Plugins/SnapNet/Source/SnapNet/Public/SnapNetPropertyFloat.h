#pragma once
#include "CoreMinimal.h"
#include "SnapNetFloatEncoding.h"
#include "SnapNetPropertyWithInterpolation.h"
#include "SnapNetPropertyFloat.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyFloat : public FSnapNetPropertyWithInterpolation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Clamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetFloatEncoding Encoding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    FSnapNetPropertyFloat();
};

