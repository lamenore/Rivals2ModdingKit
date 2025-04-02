#pragma once
#include "CoreMinimal.h"
#include "ExpressiveTextParameterValue.h"
#include "ExTextValue_MaterialBase.generated.h"

class UMaterialInstanceConstant;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_MaterialBase : public UExpressiveTextParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* CombinedMaterial;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MaterialsChecksum;
    
    UExTextValue_MaterialBase();

};

