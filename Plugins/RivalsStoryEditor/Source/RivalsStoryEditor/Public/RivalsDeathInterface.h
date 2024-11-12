#pragma once
#include "CoreMinimal.h"
#include "UniversalStoryInterface.h"
#include "RivalsDeathInterface.generated.h"

class ARivalsCharacterEntity;

UINTERFACE(Blueprintable)
class RIVALSSTORYEDITOR_API URivalsDeathInterface : public UUniversalStoryInterface {
    GENERATED_BODY()
};

class RIVALSSTORYEDITOR_API IRivalsDeathInterface : public IUniversalStoryInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRespawn(ARivalsCharacterEntity* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDeath(ARivalsCharacterEntity* Character);
    
};

