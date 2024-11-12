#pragma once
#include "CoreMinimal.h"
#include "OnRespawnSetEventDelegate.generated.h"

class ARivalsCharacterEntity;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRespawnSetEvent, ARivalsCharacterEntity*, Character);

