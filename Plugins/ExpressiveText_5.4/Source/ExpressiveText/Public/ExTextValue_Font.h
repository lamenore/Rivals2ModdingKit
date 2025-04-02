#pragma once
#include "CoreMinimal.h"
#include "ExpressiveTextParameterValue.h"
#include "ExTextValue_Font.generated.h"

class UExpressiveTextFont;

UCLASS(Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_Font : public UExpressiveTextParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExpressiveTextFont* Value;
    
    UExTextValue_Font();

};

