#pragma once
#include "CoreMinimal.h"
#include "EntityReference.h"
#include "RivalsStageEntity.h"
#include "MerchantPort.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AMerchantPort : public ARivalsStageEntity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEntityReference> EntitiesInWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEntityReference> EntitiesOutOfWater;
    
public:
    AMerchantPort(const FObjectInitializer& ObjectInitializer);

};

