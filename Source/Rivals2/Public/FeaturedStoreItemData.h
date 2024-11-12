#pragma once
#include "CoreMinimal.h"
#include "ItemArray.h"
#include "ItemCoordinateArray.h"
#include "FeaturedStoreItemData.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FFeaturedStoreItemData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FItemArray> ItemRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FItemArray> ItemColumns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UWidget*, FItemCoordinateArray> ItemWidgetMap;
    
public:
    RIVALS2_API FFeaturedStoreItemData();
};

