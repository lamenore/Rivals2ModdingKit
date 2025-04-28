#pragma once
#include "CoreMinimal.h"
#include "EtalusIcePlatform.h"
#include "EtalusIceManager.generated.h"

USTRUCT(BlueprintType)
struct FEtalusIceManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEtalusIcePlatform> IcePlatforms;
    
    ETALUS_API FEtalusIceManager();
};

