#pragma once
#include "CoreMinimal.h"
#include "ExpressiveTextParameterValue.h"
#include "ExTextValue_OutlineOnDropShadows.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_OutlineOnDropShadows : public UExpressiveTextParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UExTextValue_OutlineOnDropShadows();

};

