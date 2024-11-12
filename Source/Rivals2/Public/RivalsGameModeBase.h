#pragma once
#include "CoreMinimal.h"
#include "SnapNetGameModeBase.h"
#include "RivalsGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class RIVALS2_API ARivalsGameModeBase : public ASnapNetGameModeBase {
    GENERATED_BODY()
public:
    ARivalsGameModeBase(const FObjectInitializer& ObjectInitializer);

};

