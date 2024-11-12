#pragma once
#include "CoreMinimal.h"
#include "RivalsPlatformGameplayTickDelegate.generated.h"

class ARivalsPlatformEntity;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRivalsPlatformGameplayTick, TArray<ARivalsPlatformEntity*>, PlatformEntities);

