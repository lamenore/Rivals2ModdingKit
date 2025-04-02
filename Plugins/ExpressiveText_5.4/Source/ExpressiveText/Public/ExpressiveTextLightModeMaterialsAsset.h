#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EExpressiveTextLightMode.h"
#include "ExpressiveTextLightModeMaterialsAsset.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class UExpressiveTextLightModeMaterialsAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EExpressiveTextLightMode, UMaterialInterface*> LightModeMaterials;
    
    UExpressiveTextLightModeMaterialsAsset();

};

