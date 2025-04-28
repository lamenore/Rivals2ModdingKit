#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyEntityIndex.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyString.h"
#include "SnapNetPropertyVector.h"
#include "EntityComponentOwner.h"
#include "SnapNetPropertyVfxDefinitionContainer.h"
#include "RivalsVfxEntity.generated.h"

class URivalsVfxEntityComponent;
class USceneComponent;

UCLASS(Blueprintable)
class RIVALS2_API ARivalsVfxEntity : public AActor, public IEntityComponentOwner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum CreatedByAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum CreatedByState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 CreatedByWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 DurationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean EmitterActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsVfxEntityComponent* entityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector EffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector EffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex HostEntityIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 NiagaraVars[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean NiagaraVarsDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex OwnerRivalEntityIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum FacingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean FacingLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 ParticleAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 RemainingFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVfxDefinitionContainer VfxDefinitionContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString VfxName;
    
public:
    ARivalsVfxEntity(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

