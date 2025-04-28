#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleRenderer.h"
#include "BubbleRenderer.generated.h"

class USkinnedAsset;

UCLASS(Blueprintable)
class RIVALS2_API ABubbleRenderer : public ARivalsArticleRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinnedAsset* OriginalBubbleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinnedAsset* AlternateBubbleMesh;
    
    ABubbleRenderer(const FObjectInitializer& ObjectInitializer);

};

