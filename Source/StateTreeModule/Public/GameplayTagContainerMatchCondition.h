#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StateTreeConditionCommonBase.h"
#include "GameplayTagContainerMatchCondition.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FGameplayTagContainerMatchCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayContainerMatchType MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExactMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FGameplayTagContainerMatchCondition();
};

