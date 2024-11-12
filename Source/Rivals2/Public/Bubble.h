#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsArticleEntity.h"
#include "Bubble.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ABubble : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 BubbleColorIndex;
    
    ABubble(const FObjectInitializer& ObjectInitializer);

};

