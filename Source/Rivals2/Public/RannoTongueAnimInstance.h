#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RannoTongueAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class RIVALS2_API URannoTongueAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TongueDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TongueAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimPosNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StateName;
    
    URannoTongueAnimInstance();

};

