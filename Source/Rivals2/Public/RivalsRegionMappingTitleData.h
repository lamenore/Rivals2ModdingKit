#pragma once
#include "CoreMinimal.h"
#include "RivalsRegionMapping.h"
#include "RivalsRegionMappingTitleData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsRegionMappingTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsRegionMapping> region_mappings;
    
    RIVALS2_API FRivalsRegionMappingTitleData();
};

