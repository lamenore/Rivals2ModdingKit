#pragma once
#include "CoreMinimal.h"
#include "ExText_GlyphAnimation.h"
#include "ExpressiveTextParameterValue.h"
#include "ExTextValue_RevealAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_RevealAnimation : public UExpressiveTextParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExText_GlyphAnimation Value;
    
    UExTextValue_RevealAnimation();

};

