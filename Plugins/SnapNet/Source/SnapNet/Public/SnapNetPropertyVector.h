#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyVectorBase.h"
#include "SnapNetVectorEncoding.h"
#include "SnapNetPropertyVector.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyVector : public FSnapNetPropertyVectorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetVectorEncoding Encoding;
    
public:
    FSnapNetPropertyVector();
};

