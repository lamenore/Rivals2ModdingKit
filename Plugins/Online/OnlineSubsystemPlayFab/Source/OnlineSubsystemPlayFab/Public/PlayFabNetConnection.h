#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "PlayFabNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPlayFabNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UPlayFabNetConnection();

};

