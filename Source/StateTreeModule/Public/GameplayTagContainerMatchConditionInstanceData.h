#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainerMatchConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FGameplayTagContainerMatchConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OtherContainer;
    
    FGameplayTagContainerMatchConditionInstanceData();
};

