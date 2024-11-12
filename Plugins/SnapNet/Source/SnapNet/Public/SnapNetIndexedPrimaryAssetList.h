#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SnapNetIndexedPrimaryAssetList.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetIndexedPrimaryAssetList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPrimaryAssetId, int32> AssetIdToIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAssetData> AssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPrimaryAssetType AssetType;
    
public:
    FSnapNetIndexedPrimaryAssetList();
};

