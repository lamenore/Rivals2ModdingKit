#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleRenderer.h"
#include "ArrowRenderer.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AArrowRenderer : public ARivalsArticleRenderer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmpowered;
    
public:
    AArrowRenderer(const FObjectInitializer& ObjectInitializer);

};

