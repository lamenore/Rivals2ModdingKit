#pragma once
#include "CoreMinimal.h"
#include "EquipmentItemAsset.h"
#include "RespawnPlatformData.generated.h"

class ARespawnPlatformRenderer;

UCLASS(Blueprintable)
class RIVALS2_API URespawnPlatformData : public UEquipmentItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARespawnPlatformRenderer> RespawnPlatformRenderer;
    
    URespawnPlatformData();

};

