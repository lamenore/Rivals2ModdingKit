#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleEntity.h"
#include "RivalsEyeBreakEntity.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ARivalsEyeBreakEntity : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFalling;
    
public:
    ARivalsEyeBreakEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsFalling();
    
    UFUNCTION(BlueprintCallable)
    void BounceEye();
    
};

