#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Image.h"
#include "HorizonImage.generated.h"

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox2D UVRegion;
    
    UHorizonImage();

};

