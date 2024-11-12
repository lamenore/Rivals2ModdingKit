#pragma once
#include "CoreMinimal.h"
#include "RivalsActiveHitbox.h"
#include "SnapNetPropertyFloat.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsColliderEntity.h"
#include "RivalsStoryHitboxInterface.h"
#include "RivalsStoryToggleInterface.h"
#include "StoryEntityReferences.h"
#include "RivalsSwitchEntity.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsSwitchEntity : public ARivalsColliderEntity, public IRivalsStoryToggleInterface, public IRivalsStoryHitboxInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat SwitchActiveFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat ScaledActiveFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat KBScaledDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 ActivatedFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnSwitchFlipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnSwitchOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnSwitchOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnSwitchHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwitchFlipped;
    
    ARivalsSwitchEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchOnEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchOffEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchHitEvent(FRivalsActiveHitbox& ActiveHitbox);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchFlippedEvent(int32 _frames);
    

    // Fix for true pure virtual functions not being implemented
};

