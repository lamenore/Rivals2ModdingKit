#pragma once
#include "CoreMinimal.h"
#include "ItemCoordinate.generated.h"

USTRUCT(BlueprintType)
struct FItemCoordinate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnIndex;
    
    RIVALS2_API FItemCoordinate();
};

