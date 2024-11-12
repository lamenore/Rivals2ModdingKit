#pragma once
#include "CoreMinimal.h"
#include "ERivalsPlayerInputType.h"
#include "InputByPlayerDelegate.generated.h"

class ARivalsPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInputByPlayer, ARivalsPlayerController*, Controller, const ERivalsPlayerInputType, InputType);

