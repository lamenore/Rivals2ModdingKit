#pragma once
#include "CoreMinimal.h"
#include "ExpressiveTextParameterValue.h"
#include "ExTextValue_DrawOutlineAsSeparateLayer.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_DrawOutlineAsSeparateLayer : public UExpressiveTextParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UExTextValue_DrawOutlineAsSeparateLayer();

};

