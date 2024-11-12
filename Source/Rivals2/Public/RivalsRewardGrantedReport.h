#pragma once
#include "CoreMinimal.h"
#include "RivalsRewardGrantedReport.generated.h"

USTRUCT(BlueprintType)
struct FRivalsRewardGrantedReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString itemIdRewarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString itemIdType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 amountRewarded;
    
    RIVALS2_API FRivalsRewardGrantedReport();
};

