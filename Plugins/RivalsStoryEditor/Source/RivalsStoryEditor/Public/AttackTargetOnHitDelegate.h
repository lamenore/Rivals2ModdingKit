#pragma once
#include "CoreMinimal.h"
#include "RivalsActiveHitbox.h"
#include "AttackTargetOnHitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackTargetOnHit, FRivalsActiveHitbox, ActiveHitbox);

