#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NexusAttributiontotalSpendToDate_Struct.h"
#include "NexusAttributionconversion_Struct.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributionconversion_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime lastPurchaseDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusAttributiontotalSpendToDate_Struct totalSpendToDate;
    
    NEXUSUNREALSDK_API FNexusAttributionconversion_Struct();
};

