#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "PlayFabNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPlayFabNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    UPlayFabNetDriver();

};

