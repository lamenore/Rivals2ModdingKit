#pragma once
#include "CoreMinimal.h"
#include "ExTextValue_MaterialBase.h"
#include "ExTextValue_Material.generated.h"

class UExpressiveTextMaterial;

UCLASS(Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_Material : public UExTextValue_MaterialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UExpressiveTextMaterial*> Value;
    
    UExTextValue_Material();

};

