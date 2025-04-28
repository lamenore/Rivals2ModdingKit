#pragma once
#include "CoreMinimal.h"
#include "EStagePickType.h"
#include "EStageType.h"
#include "RivalsEquipmentId.h"
#include "StageEquipmentId.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FStageEquipmentId : public FRivalsEquipmentId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StageName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageType StageType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStagePickType StagePickType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDoublesAlt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDoublesAlt;
    
    FStageEquipmentId();
};

