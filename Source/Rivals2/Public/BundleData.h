#pragma once
#include "CoreMinimal.h"
#include "EquipmentItemAsset.h"
#include "BundleData.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UBundleData : public UEquipmentItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabReceiptFriendlyId;
    
    UBundleData();

};

