#pragma once
#include "CoreMinimal.h"
#include "EquipmentItemAsset.h"
#include "IconData.generated.h"

class UPaperFlipbook;

UCLASS(Blueprintable)
class RIVALS2_API UIconData : public UEquipmentItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAnimated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperFlipbook> flipbook;
    
    UIconData();

};

