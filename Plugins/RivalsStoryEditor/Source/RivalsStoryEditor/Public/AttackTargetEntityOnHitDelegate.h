#pragma once
#include "CoreMinimal.h"
#include "RivalsActiveHitbox.h"
#include "AttackTargetEntityOnHitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackTargetEntityOnHit, FRivalsActiveHitbox, ActiveHitbox);

