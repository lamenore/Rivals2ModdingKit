#pragma once
#include "CoreMinimal.h"
#include "PlayerLoadedAssetData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPlayerLoadedAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedAssets;
    
    RIVALS2_API FPlayerLoadedAssetData();
};

