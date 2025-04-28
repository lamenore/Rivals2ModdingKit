#pragma once
#include "CoreMinimal.h"
#include "EEmoteCategory.h"
#include "EquipmentItemAsset.h"
#include "EmoteData.generated.h"

class UPaperFlipbook;

UCLASS(Blueprintable)
class RIVALS2_API UEmoteData : public UEquipmentItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperFlipbook> flipbook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmoteCategory EmoteCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortIndex;
    
    UEmoteData();

};

