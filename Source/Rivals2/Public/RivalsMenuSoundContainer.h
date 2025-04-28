#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RivalsMenuSoundContainer.generated.h"

class UFMODEvent;

UCLASS(Blueprintable)
class RIVALS2_API URivalsMenuSoundContainer : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MenuSounds[86];
    
public:
    URivalsMenuSoundContainer();

};

