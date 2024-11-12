#pragma once
#include "CoreMinimal.h"
#include "RivalsHitboxOnHitProperties.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertySoftObjectPath.h"
#include "RivalsColliderEntity.h"
#include "RivalsWirewayInterface.h"
#include "SoftObjectReference.h"
#include "RivalsHazardVolumeEntity.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsHazardVolumeEntity : public ARivalsColliderEntity, public IRivalsWirewayInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 RehitTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean KillOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean CheckIfImmune;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertySoftObjectPath VisualMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsHitboxOnHitProperties HitboxOnHitProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectReference> OnCollideEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HazardVolume;
    
    ARivalsHazardVolumeEntity(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

