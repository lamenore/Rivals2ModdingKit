#pragma once
#include "CoreMinimal.h"
#include "EntityReference.h"
#include "RivalsArticleEntity.h"
#include "LavaPool.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ALavaPool : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEntityReference> RivalsOnThisPool;
    
    ALavaPool(const FObjectInitializer& ObjectInitializer);

};

