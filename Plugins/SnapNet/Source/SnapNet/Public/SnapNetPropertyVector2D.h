#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyVector2DBase.h"
#include "SnapNetVector2DEncoding.h"
#include "SnapNetPropertyVector2D.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyVector2D : public FSnapNetPropertyVector2DBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetVector2DEncoding Encoding;
    
public:
    FSnapNetPropertyVector2D();
};

