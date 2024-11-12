#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnapNetPropertyWithInterpolation.h"
#include "SnapNetPropertyVector2DBase.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyVector2DBase : public FSnapNetPropertyWithInterpolation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Clamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Value;
    
public:
    FSnapNetPropertyVector2DBase();
};

