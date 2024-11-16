#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SkeletalMeshEffectData.h"
#include "RivalsVictorySequenceData.generated.h"

class UAnimSequence;
class UFMODEvent;
class ULevelSequence;

UCLASS(Blueprintable)
class RIVALS2_API URivalsVictorySequenceData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> VictoryAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> VictorySequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshEffectData> SkeletalMeshEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UAnimSequence>> SkinAnimationOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFMODEvent>> SoundEvents;
    
    URivalsVictorySequenceData();

};

