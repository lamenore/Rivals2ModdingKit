#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EmoteUsageData.generated.h"

USTRUCT(BlueprintType)
struct FEmoteUsageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimesUsed;
    
    RIVALS2_API FEmoteUsageData();
};

