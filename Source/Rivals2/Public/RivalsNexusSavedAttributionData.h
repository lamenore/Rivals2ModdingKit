#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RivalsNexusSavedAttributionData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsNexusSavedAttributionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NexusMemberAttributionCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NexusMemberAttributionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime NexusMemberAttributionDate;
    
    RIVALS2_API FRivalsNexusSavedAttributionData();
};

