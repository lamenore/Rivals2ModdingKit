#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ExpressiveTextMaterial.generated.h"

class UMaterialFunctionMaterialLayer;

UCLASS(Blueprintable)
class EXPRESSIVETEXT_API UExpressiveTextMaterial : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialFunctionMaterialLayer* MaterialLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DynamicParameters;
    
    UExpressiveTextMaterial();

};

