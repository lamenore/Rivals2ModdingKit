#pragma once
#include "CoreMinimal.h"
#include "EquipmentItemAsset.h"
#include "PlatformSoundEvent.h"
#include "RivalsBgmData.h"
#include "StageSkinScalarParameterContainer.h"
#include "StageSkinVectorParameterContainer.h"
#include "Templates/SubclassOf.h"
#include "RivalsStageSkinData.generated.h"

class ARivalsPlatformRenderer;
class ARivalsStageEntity;
class URivalsSoundEffectContainer;
class URivalsStageData;
class URivalsVfxDefinitionAsset;

UCLASS(Blueprintable)
class RIVALS2_API URivalsStageSkinData : public UEquipmentItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StageSkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URivalsStageData> ParentStageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OriginalStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalizableName;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARivalsStageEntity> StageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsBgmData BgmData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FStageSkinScalarParameterContainer> ScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FStageSkinVectorParameterContainer> VectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastStockTransitionFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ARivalsPlatformRenderer>> PlatformRendererClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlatformSoundEvent> PlatformSoundEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsSoundEffectContainer> SoundEffectContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StateBasedSoundNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsVfxDefinitionAsset> VfxDefinitionContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawStageCollision;
    
    URivalsStageSkinData();

};

