#pragma once
#include "CoreMinimal.h"
#include "ExText_GlyphAnimation.generated.h"

class UExpressiveTextAnimation;

USTRUCT(BlueprintType)
struct FExText_GlyphAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExpressiveTextAnimation* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reverse;
    
    EXPRESSIVETEXT_API FExText_GlyphAnimation();
};

