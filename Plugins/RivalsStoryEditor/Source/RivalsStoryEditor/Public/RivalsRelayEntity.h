#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsStoryEntity.h"
#include "RivalsStoryHitboxInterface.h"
#include "RivalsStoryToggleInterface.h"
#include "StoryEntityReferences.h"
#include "RivalsRelayEntity.generated.h"

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsRelayEntity : public ARivalsStoryEntity, public IRivalsStoryToggleInterface, public IRivalsStoryHitboxInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 RelayDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnRelayPulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnRelayToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnRelayTrue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnRelayFalse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnRelayHitbox;
    
    ARivalsRelayEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelayToggleActiveEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelaySetTrueEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelaySetFalseEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelayPulseEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelayHitboxEvent();
    

    // Fix for true pure virtual functions not being implemented
};

