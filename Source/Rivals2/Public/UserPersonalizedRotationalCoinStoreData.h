#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UserPersonalizedRotationalCoinStoreData.generated.h"

USTRUCT(BlueprintType)
struct FUserPersonalizedRotationalCoinStoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime lastFullRerollDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime expirationDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ItemIds;
    
    RIVALS2_API FUserPersonalizedRotationalCoinStoreData();
};

