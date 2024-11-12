#pragma once
#include "CoreMinimal.h"
#include "EntityReference.h"
#include "RivalsArticleEntity.h"
#include "RockShard.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ARockShard : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEntityReference> SiblingShardEntityIndexes;
    
    ARockShard(const FObjectInitializer& ObjectInitializer);

};

