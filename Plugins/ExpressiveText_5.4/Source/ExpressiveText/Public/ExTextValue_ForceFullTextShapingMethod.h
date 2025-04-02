#pragma once
#include "CoreMinimal.h"
#include "ExpressiveTextParameterValue.h"
#include "ExTextValue_ForceFullTextShapingMethod.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_ForceFullTextShapingMethod : public UExpressiveTextParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UExTextValue_ForceFullTextShapingMethod();

};

