#pragma once
#include "CoreMinimal.h"
#include "RivalsEquipmentId.h"
#include "StageSkinEquipmentId.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct RIVALS2_API FStageSkinEquipmentId : public FRivalsEquipmentId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StageSkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalizableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> StageThumbnail;
    
    FStageSkinEquipmentId();
};

