#pragma once
#include "CoreMinimal.h"
#include "SnapNetDoubleEncoding.h"
#include "SnapNetPropertyWithInterpolation.h"
#include "SnapNetPropertyDouble.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyDouble : public FSnapNetPropertyWithInterpolation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Clamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetDoubleEncoding Encoding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Loop;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
public:
    FSnapNetPropertyDouble();
};

