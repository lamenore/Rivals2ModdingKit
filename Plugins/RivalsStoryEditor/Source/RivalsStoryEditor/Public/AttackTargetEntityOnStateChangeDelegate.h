#pragma once
#include "CoreMinimal.h"
#include "EAttackTargetEntityState.h"
#include "AttackTargetEntityOnStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackTargetEntityOnStateChange, EAttackTargetEntityState, State);

