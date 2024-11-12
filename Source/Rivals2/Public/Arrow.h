#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "RivalsArticleEntity.h"
#include "Arrow.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AArrow : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean Empowered;
    
    AArrow(const FObjectInitializer& ObjectInitializer);

};

