#pragma once
#include "CoreMinimal.h"
#include "RivalsEquipmentId.h"
#include "StageSkinEquipmentId.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FStageSkinEquipmentId : public FRivalsEquipmentId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StageSkinName;
    
    FStageSkinEquipmentId();
};

