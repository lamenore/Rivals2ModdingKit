#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagQueryConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FGameplayTagQueryConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    FGameplayTagQueryConditionInstanceData();
};

