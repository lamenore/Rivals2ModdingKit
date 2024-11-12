#pragma once
#include "CoreMinimal.h"
#include "Shakes/LegacyCameraShake.h"
#include "RivalsCameraShake.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URivalsCameraShake : public ULegacyCameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinIntensity;
    
    URivalsCameraShake();

};

