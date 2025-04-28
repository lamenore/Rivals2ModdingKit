#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StateTreeSchema.generated.h"

UCLASS(Abstract, Blueprintable)
class STATETREEMODULE_API UStateTreeSchema : public UObject {
    GENERATED_BODY()
public:
    UStateTreeSchema();

};

