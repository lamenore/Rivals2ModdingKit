#pragma once
#include "CoreMinimal.h"
#include "SnapNetStringPool.generated.h"

USTRUCT(BlueprintType)
struct FSnapNetStringPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStrings;
    
    SNAPNET_API FSnapNetStringPool();
};

