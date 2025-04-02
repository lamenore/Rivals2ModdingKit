#pragma once
#include "CoreMinimal.h"
#include "ExText_GlyphAnimation.h"
#include "ExpressiveTextParameterValue.h"
#include "ExTextValue_ClearAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_ClearAnimation : public UExpressiveTextParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExText_GlyphAnimation Value;
    
    UExTextValue_ClearAnimation();

};

