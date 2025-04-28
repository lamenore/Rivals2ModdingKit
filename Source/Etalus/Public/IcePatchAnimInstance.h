#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "IcePatchAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ETALUS_API UIcePatchAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightCutoff;
    
    UIcePatchAnimInstance();

};

