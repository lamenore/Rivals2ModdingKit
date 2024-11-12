#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyStringBase.h"
#include "SnapNetPropertyString.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyString : public FSnapNetPropertyStringBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StringPoolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
public:
    FSnapNetPropertyString();
};

