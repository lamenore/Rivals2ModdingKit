#pragma once
#include "CoreMinimal.h"
#include "ArticleCreationData.h"
#include "AttackSFXCreationData.h"
#include "CameraFocusProjectileCreationData.h"
#include "CameraShakeCreationData.h"
#include "EBReverseType.h"
#include "ERivalsCharacterStateCategory.h"
#include "ERootedType.h"
#include "RivalsCharacterAttackWindow.h"
#include "RivalsHitboxAttributes.h"
#include "RivalsHitboxOnHitProperties.h"
#include "RivalsVfxDefinitionContainer.h"
#include "RumbleCreationData.h"
#include "SkeletalMeshEffectData.h"
#include "ThrowData.h"
#include "VFXCreationData.h"
#include "RivalsCharacterAttackData.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class RIVALS2_API URivalsCharacterAttackData : public URivalsVfxDefinitionContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* GroundedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AerialAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsCharacterStateCategory Groundedness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LandingLagFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LandingLagAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERootedType RootedType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBReverseType BReverseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StayCrouchedAfterDtilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsCharacterAttackWindow> Windows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsHitboxAttributes> HitboxAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsHitboxOnHitProperties> HitboxOnHitProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArticleCreationData> ArticleCreationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowData ThrowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackSFXCreationData> SFXCreationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshEffectData> MeshEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVFXCreationData> VFXCreationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraFocusProjectileCreationData> CameraFocusProjectileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraShakeCreationData> CameraShakeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRumbleCreationData> RumbleData;
    
    URivalsCharacterAttackData();

};

