#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TutorialSoundEffectContainer.generated.h"

class UFMODEvent;

UCLASS(Blueprintable)
class RIVALS2_API UTutorialSoundEffectContainer : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* TutorialSounds[11];
    
public:
    UTutorialSoundEffectContainer();

};

