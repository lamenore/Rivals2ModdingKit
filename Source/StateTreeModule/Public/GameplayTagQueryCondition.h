#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StateTreeConditionCommonBase.h"
#include "GameplayTagQueryCondition.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FGameplayTagQueryCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FGameplayTagQueryCondition();
};

