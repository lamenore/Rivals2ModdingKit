#pragma once
#include "CoreMinimal.h"
#include "RivalsEdgegapPaginator.generated.h"

USTRUCT(BlueprintType)
struct FRivalsEdgegapPaginator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 num_pages;
    
    RIVALS2_API FRivalsEdgegapPaginator();
};

