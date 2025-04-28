#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RivalsDialogueSubsystem.generated.h"

class UObject;
class URivalsDialogueSubsystem;

UCLASS(Blueprintable)
class RIVALS2_API URivalsDialogueSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URivalsDialogueSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URivalsDialogueSubsystem* Get(const UObject* WorldContextObject);
    
};

