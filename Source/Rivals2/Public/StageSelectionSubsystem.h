#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StageSelectionSubsystem.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UStageSelectionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UStageSelectionSubsystem();

};

