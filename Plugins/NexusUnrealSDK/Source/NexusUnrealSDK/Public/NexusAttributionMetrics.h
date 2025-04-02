#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NexusAttributionconversion_Struct.h"
#include "NexusAttributionMetrics.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributionMetrics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime joinDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusAttributionconversion_Struct conversion;
    
    NEXUSUNREALSDK_API FNexusAttributionMetrics();
};

