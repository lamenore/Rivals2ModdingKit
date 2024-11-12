#pragma once
#include "CoreMinimal.h"
#include "ItemCoordinate.h"
#include "ItemCoordinateArray.generated.h"

USTRUCT(BlueprintType)
struct FItemCoordinateArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemCoordinate> Items;
    
    RIVALS2_API FItemCoordinateArray();
};

