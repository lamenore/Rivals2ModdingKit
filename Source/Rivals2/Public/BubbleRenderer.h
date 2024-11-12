#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleRenderer.h"
#include "BubbleRenderer.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ABubbleRenderer : public ARivalsArticleRenderer {
    GENERATED_BODY()
public:
    ABubbleRenderer(const FObjectInitializer& ObjectInitializer);

};

