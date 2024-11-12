#pragma once
#include "CoreMinimal.h"
#include "RivalsActiveHitbox.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyString.h"
#include "RivalsColliderEntity.h"
#include "RivalsStoryHitboxInterface.h"
#include "RivalsStoryToggleInterface.h"
#include "StoryEntityReferences.h"
#include "RivalsBreakableEntity.generated.h"

class ARivalsBreakableRenderer;
class ARivalsVfxEntity;
class URivalsVfxDefinitionAsset;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsBreakableEntity : public ARivalsColliderEntity, public IRivalsStoryHitboxInterface, public IRivalsStoryToggleInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsVfxDefinitionAsset* StoryVfxContainer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean UseHitboxDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 RespawnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 DestroyedFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString BreakSFXString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString VFXDefinitionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsVfxEntity* BreakVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnBreakEntityEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnBreakEntityToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnBreakEntityHitbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsBreakableRenderer* Renderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool QueueBreak;
    
    ARivalsBreakableEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreakableRespawnEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreakableHitEvent(const FRivalsActiveHitbox& _hitbox);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreakableBrokenEvent();
    

    // Fix for true pure virtual functions not being implemented
};

