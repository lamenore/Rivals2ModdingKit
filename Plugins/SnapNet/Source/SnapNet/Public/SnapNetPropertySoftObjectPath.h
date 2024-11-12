#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnapNetPropertyStringBase.h"
#include "SnapNetPropertySoftObjectPath.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertySoftObjectPath : public FSnapNetPropertyStringBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StringPoolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Value;
    
public:
    FSnapNetPropertySoftObjectPath();
};

