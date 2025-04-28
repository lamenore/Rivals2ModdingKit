#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EquipmentItemAsset.h"
#include "EventStoreData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class RIVALS2_API UEventStoreData : public UEquipmentItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartDate;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Banner;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventString;
    
    UEventStoreData();

};

