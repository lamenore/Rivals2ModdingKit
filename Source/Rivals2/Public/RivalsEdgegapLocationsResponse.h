#pragma once
#include "CoreMinimal.h"
#include "RivalsEdgegapLocationInfo.h"
#include "RivalsEdgegapPaginationInfo.h"
#include "RivalsEdgegapLocationsResponse.generated.h"

USTRUCT(BlueprintType)
struct FRivalsEdgegapLocationsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsEdgegapLocationInfo> locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> messages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsEdgegapPaginationInfo Pagination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 total_count;
    
    RIVALS2_API FRivalsEdgegapLocationsResponse();
};

