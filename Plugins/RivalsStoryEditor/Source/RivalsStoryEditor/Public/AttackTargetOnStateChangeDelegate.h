#pragma once
#include "CoreMinimal.h"
#include "EAttackTargetState.h"
#include "AttackTargetOnStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackTargetOnStateChange, EAttackTargetState, State);

