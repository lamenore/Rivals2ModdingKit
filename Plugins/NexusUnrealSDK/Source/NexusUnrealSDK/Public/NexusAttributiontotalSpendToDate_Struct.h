#pragma once
#include "CoreMinimal.h"
#include "NexusAttributiontotalSpendToDate_Struct.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributiontotalSpendToDate_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Total;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Currency;
    
    NEXUSUNREALSDK_API FNexusAttributiontotalSpendToDate_Struct();
};

