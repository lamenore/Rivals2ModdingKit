#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SnapNetGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class SNAPNET_API ASnapNetGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    ASnapNetGameModeBase(const FObjectInitializer& ObjectInitializer);

};

