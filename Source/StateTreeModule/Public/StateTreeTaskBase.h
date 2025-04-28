#pragma once
#include "CoreMinimal.h"
#include "StateTreeNodeBase.h"
#include "StateTreeTaskBase.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeTaskBase : public FStateTreeNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTaskEnabled: 1;
    
    FStateTreeTaskBase();
};

