#pragma once
#include "CoreMinimal.h"
#include "ExTextValue_MaterialBase.h"
#include "ExTextValue_OutlineMaterial.generated.h"

class UExpressiveTextMaterial;

UCLASS(Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_OutlineMaterial : public UExTextValue_MaterialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UExpressiveTextMaterial*> Value;
    
    UExTextValue_OutlineMaterial();

};

